# Write your MySQL query statement below
SELECT max(num) as num
FROM
(SELECT num
FROM MyNumbers
GROUP BY num
HAVING Count(*)=1)t;
-- ORDER BY num DESC LIMIT 1;