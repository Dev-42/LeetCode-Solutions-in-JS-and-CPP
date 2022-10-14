SELECT
E.name as Employee 
FROM Employee E
JOIN Employee AS M
ON E.ManagerId = M.Id
WHERE E.Salary > M.Salary;