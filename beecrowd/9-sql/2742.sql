SELECT 
    life_registry.name,
    ROUND(
        life_registry.omega * 1.618,
        3
    ) AS "Fator N"
FROM life_registry
JOIN dimensions ON dimensions.id = life_registry.dimensions_id
WHERE (dimensions.name = 'C875' OR dimensions.name = 'C774') AND life_registry.name LIKE 'Richard%'
ORDER BY life_registry.omega;