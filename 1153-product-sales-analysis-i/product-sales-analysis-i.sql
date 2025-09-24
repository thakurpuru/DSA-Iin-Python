# Write your MySQL query statement below
SELECT product_name,year,price
FROM Sales s
    INNER join Product P ON s.product_id=p.product_id;
