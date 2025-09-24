# Write your MySQL query statement below
SELECT P.product_name,s.year,s.price
FROM Product P
join Sales s ON s.product_id=p.product_id
WHERE s.sale_id IS NOT NULL;