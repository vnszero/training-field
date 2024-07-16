SELECT name, CAST(TO_CHAR(payday, 'DD') AS INT) AS day
FROM loan;