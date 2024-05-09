SELECT products.name AS name, providers.name AS name, categories.name AS name
FROM products
JOIN providers ON providers.id = products.id_providers
JOIN categories ON categories.id = products.id_categories
WHERE providers.name = 'Sansul SA' AND categories.name = 'Imported';