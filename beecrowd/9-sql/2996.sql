SELECT 
    packages.year, 
    sender.name AS sender, 
    receiver.name AS receiver
FROM packages
JOIN users AS sender ON sender.id = packages.id_user_sender
JOIN users AS receiver ON receiver.id = packages.id_user_receiver
WHERE 
    (packages.color = 'blue' OR packages.year = 2015) 
    AND (sender.address != 'Taiwan' AND receiver.address != 'Taiwan')
ORDER BY packages.year DESC;