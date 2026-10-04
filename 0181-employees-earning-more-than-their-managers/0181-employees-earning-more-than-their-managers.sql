# Write your MySQL query statement below
#select name as Employee from Employee where salary >(select salary from Employee where id in (select managerId from Employee )#
select name as Employee from Employee as e where salary >(select salary from Employee m where m.id=e.managerId)