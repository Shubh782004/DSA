# Write your MySQL query statement below
select p.product_id, IFNULL(round(sum(COALESCE(u.units,0)*p.price)/sum(u.units),2),0) as average_price
from
prices p left join UnitsSold u
on(p.product_id = u.product_id and u.purchase_date between p.start_date and p.end_date)
group by product_id;

