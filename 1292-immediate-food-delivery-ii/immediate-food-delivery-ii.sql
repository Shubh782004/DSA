# Write your MySQL query statement below
WITH Firorder
AS (SELECT customer_pref_delivery_date,customer_id,order_date,
ROW_NUMBER() OVER(
    PARTITION BY customer_id
    ORDER BY order_date
) as rn

FROM Delivery
) 
SELECT 
ROUND(
    SUM(CASE
        WHEN order_date=customer_pref_delivery_date THEN 1.00 
        ELSE 0.00
        END)/COUNT(*)*100
,2) immediate_percentage
FROM Firorder
WHERE rn=1;




