# Write your MySQL query statement below
select Employee.name,b.bonus from Employee left join Bonus b on Employee.empId=b.empId where bonus<1000 or bonus is NULL