# Write your MySQL query statement below
SELECT DISTINCT class
FROM Courses 
GROUP BY class
HAVING count(student)>=5;
