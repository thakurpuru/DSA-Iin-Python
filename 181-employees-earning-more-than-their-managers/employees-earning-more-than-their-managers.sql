# Write your MySQL query statement below
SELECT e1.name AS Employee
FROM Employee e1
JOIN Employee e2 on e2.id=e1.managerId
WHERE e1.salary>e2.salary;
