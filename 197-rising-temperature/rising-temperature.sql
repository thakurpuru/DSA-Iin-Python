# Write your MySQL query statement below
SELECT today.id
FROM Weather yestarday
CROSS JOIN Weather today
WHERE DATEDIFF(today.recordDate,yestarday.recordDate)=1 AND today.temperature > yestarday.temperature;