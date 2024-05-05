SELECT products.name AS name, providers.name AS name, products.price AS price
FROM products
JOIN providers ON products.id_providers = providers.id
JOIN categories ON products.id_categories = categories.id
WHERE categories.name = 'Super Luxury' AND products.price > 1000;