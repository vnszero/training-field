
SELECT temperature, count(temperature) AS number_of_records 
FROM records
GROUP BY mark, temperature
ORDER BY mark;