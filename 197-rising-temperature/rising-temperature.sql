# Write your MySQL query statement below
SELECT w.id
FROM Weather w
INNER JOIN Weather b 
ON datediff(w.recordDate,b.recordDate)=1
WHERE w.temperature>b.temperature;
