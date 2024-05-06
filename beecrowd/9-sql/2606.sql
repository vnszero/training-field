SELECT products.id AS id, products.name AS name
FROM products
JOIN categories ON categories.id = products.id_categories
WHERE categories.name LIKE 'super%';
