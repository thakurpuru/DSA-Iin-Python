# Write your MySQL query statement below
SELECT P.product_name,s.year,s.price
FROM Sales s
INNER join Product P ON s.product_id=p.product_id
