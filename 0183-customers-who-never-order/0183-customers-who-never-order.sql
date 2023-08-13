# Write your MySQL query statement below
select name AS Customers
from Customers c
left join Orders o
ON c.id=o.customerID
where o.id IS NULL
