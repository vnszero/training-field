SELECT ROUND(
        (SUM(price) / COUNT(*)),
        2
    ) AS price
FROM products;