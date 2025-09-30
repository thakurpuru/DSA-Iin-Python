# Write your MySQL query statement below
SELECT p.project_id,ROUND(SUM(E.experience_years)/COUNT(p.employee_id),2)
AS average_years
FROM Project p
JOIN Employee E ON E.employee_id=p.employee_id
GROUP BY project_id;