SELECT 
    clients.name, 
    clients.investment, 
    stats.month AS month_of_payback, 
    (stats.amount - clients.investment) AS "return"
FROM 
    clients
JOIN (
    SELECT 
        operations.client_id AS client_id, 
        operations.month AS month, 
        SUM(operations.profit) OVER (PARTITION BY operations.client_id ORDER BY operations.month) AS amount
    FROM 
        operations
) AS stats 
ON stats.client_id = clients.id
WHERE 
    stats.amount >= clients.investment
    AND NOT EXISTS (
        SELECT 1
        FROM (
            SELECT 
                operations.client_id, 
                operations.month, 
                SUM(operations.profit) OVER (PARTITION BY operations.client_id ORDER BY operations.month) AS amount
            FROM 
                operations
        ) AS inner_stats
        WHERE 
            inner_stats.client_id = stats.client_id
            AND inner_stats.amount >= clients.investment
            AND inner_stats.month < stats.month
    )
ORDER BY 
    "return" DESC;