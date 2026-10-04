# Write your MySQL query statement below
select max(salary) as SecondHighestSalary from Employee
where id not in (select id from Employee  WHERE salary = (SELECT MAX(salary) FROM Employee) )