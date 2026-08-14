# Write your MySQL query statement below
SELECT u.user_id,
ROUND(
    AVG(
        CASE 
            WHEN c.action="confirmed" THEN 1.00
            ELSE 0
        END

    ),
    2
) confirmation_rate

FROM Signups u
LEFT JOIN Confirmations c
ON u.user_id= c.user_id
Group By u.user_id;