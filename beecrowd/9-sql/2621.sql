SELECT products.name AS name
FROM products
JOIN providers ON providers.id = products.id_providers
WHERE providers.name LIKE 'P%' AND products.amount > 10 AND products.amount < 20;