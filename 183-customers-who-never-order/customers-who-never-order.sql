# Write your MySQL query statement below
SELECT name AS Customers
From Customers
WHERE id NOt IN (SELECT customerId FROM Orders);