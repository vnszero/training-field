(
    SELECT CONCAT('Podium: ', team) AS name
    FROM league
    ORDER BY position
    LIMIT 3
)
UNION ALL
(
    SELECT CONCAT('Demoted: ', name) AS name
    FROM (
        SELECT team AS name, position
        FROM league
        ORDER BY position DESC
        LIMIT 2
    ) subquery
    ORDER BY position ASC
);