# Write your MySQL query statement below
select id,
 case
              when  p_id IS NULL then 'Root'

              when  p_id is not null and  id  in (select p_id from Tree group by p_id  )then 'Inner'

              when  id not in (select p_id from Tree where p_id  is not null) then 'Leaf'

              end as type from Tree