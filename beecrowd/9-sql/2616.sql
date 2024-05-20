SELECT customers.id, customers.name
FROM customers
WHERE NOT EXISTS (
    SELECT 1
    FROM locations
    WHERE locations.id_customers = customers.id
);