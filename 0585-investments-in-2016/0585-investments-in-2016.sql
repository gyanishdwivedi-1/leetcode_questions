# Write your MySQL query statement below
select  CAST(ROUND(SUM(tiv_2016), 2) AS DECIMAL(10,2)) AS tiv_2016 from Insurance where pid in  (select pid from Insurance group by lat,lon having count(*)=1) AND tiv_2015 IN (
    SELECT tiv_2015
    FROM Insurance
    GROUP BY tiv_2015
    HAVING COUNT(*) > 1
);