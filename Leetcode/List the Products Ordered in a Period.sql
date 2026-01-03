SELECT product_name, SUM(unit) as unit
FROM products p, orders o
where p.product_id = o.product_id
AND order_date BETWEEN '2020-02-01' AND '2020-02-29'
GROUP BY p.product_id
HAVING SUM(unit) >=100;
