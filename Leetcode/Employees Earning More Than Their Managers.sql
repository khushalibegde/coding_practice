SELECT e1.name as Employee
FROM Employee e1,Employee e2
where e2.id = e1.managerId
AND e1.salary>e2.salary;
