SELECT customers.name,rentals.rentals_date 
FROM rentals 
JOIN customers ON customers.id = rentals.id_customers
WHERE rentals.rentals_date BETWEEN TO_DATE('2016-09-01', 'YYYY-MM-DD') AND TO_DATE('2016-09-30', 'YYYY-MM-DD');