-- show databases;
-- create database transaction;
-- use transaction;
-- -- Create the accounts table
-- create table accounts(accountnumber varchar(20) primary key,
-- balance decimal(10,2) not null);
-- create table transactions
-- (transactionID int auto_increment primary key,
-- sourceaccount varchar(20) not null,
-- destinationaccount varchar(20) not null,
-- amount decimal (10,2) not null,
-- timestamp timestamp default current_timestamp,
-- foreign key (sourceaccount) references accounts(accountnumber),
-- foreign key (destinationaccount) references accounts(accountnumber)
-- );
-- insert into accounts values
-- ('A123',1000.00),
-- ('B456',500.50),
-- ('C789',750.25),
-- ('D987',1200.75),
-- ('E654',150.00),
-- ('F321',900.45);
-- select * from accounts;

-- DELIMITER //

-- CREATE PROCEDURE TransferMoney(
--     IN sourceAccount VARCHAR(20),
--     IN destinationAccount VARCHAR(20),
--     IN transferAmount DECIMAL(10, 2)
-- )
-- BEGIN
--     DECLARE sourceBalance DECIMAL(10, 2);
--     DECLARE destinationBalance DECIMAL(10, 2);

--     -- Get the current balances of the source and destination accounts
--     SELECT Balance INTO sourceBalance
--     FROM Accounts
--     WHERE AccountNumber = sourceAccount;

--     SELECT Balance INTO destinationBalance
--     FROM Accounts
--     WHERE AccountNumber = destinationAccount;

--     -- Check if there is enough balance in the source account
--     IF sourceBalance >= transferAmount THEN
--         -- Deduct money from the source account
--         UPDATE Accounts
--         SET Balance = sourceBalance - transferAmount
--         WHERE AccountNumber = sourceAccount;

--         -- Add money to the destination account
--         UPDATE Accounts
--         SET Balance = destinationBalance + transferAmount
--         WHERE AccountNumber = destinationAccount;

--         -- Log the transaction
--         INSERT INTO Transactions (SourceAccount, DestinationAccount, Amount)
--         VALUES (sourceAccount, destinationAccount, transferAmount);
--         
--         -- Commit the transaction
--         COMMIT;
--         
--         SELECT 'Transaction Successful' AS Message;
--     ELSE
--         -- Insufficient balance in the source account
--         SELECT 'Transaction Failed: Insufficient Balance' AS Message;
--     END IF;
-- END;  
-- //

-- DELIMITER ;

-- call transfermoney('A123','B456',100);
-- select * from accounts;
create database employee;
use employee;
create table dept(DeptId int primary key, DeptName varchar(20));
create table emp(EmpId int primary key, FirstName varchar(20), LastName varchar(20), Email varchar(30), PhoneNo bigint, HireDate date, salary int, DepartmentId int NOT NULL, foreign key(DepartmentId) references dept(DeptId) );
alter table emp add age int;
select * from emp;
insert into dept values(1,'SoftwareDept'),(2,'ITDept'),(3,'ProductionDept'),(4,'ManagementDept'),(5,'FinanceDept');
insert into emp values(1451,'Abc','Bcd','abc@gmail.com',0000000000,'2004-5-8',1000000,1,26),
					  (1452,'Def','Bcd','def@gmail.com',1111111111,'2004-9-27',1200000,2,26),
                      (1453,'Ghi','Bcd','ghi@gmail.com',2222222222,'2002-1-2',900000,3,27),
                      (1454,'Jkl','Bcd','jkl@gmail.com',3333333333,'2001-8-20',600000,4,24),
                      (1455,'Mno','Bcd','mno@gmail.com',4444444444,'2001-8-20',900000,5,30),
                      (1456,'Pqr','Bcd','pqr@gmail.com',5555555555,'2012-5-9',900000,1,29),
                      (1457,'Stu','Bcd','stu@gmail.com',6666666666,'2007-8-20',400000,2,31),
                      (1458,'Vwx','Bcd','vwx@gmail.com',7777777777,'2008-7-9',800000,3,25),
                      (1459,'Yza','Bcd','yza@gmail.com',8888888888,'2010-11-18',900000,4,25),
                      (1460,'Cba','Bcd','cba@gmail.com',9999999999,'2006-12-20',900000,5,28);

-- Ques1
SELECT d.DeptName, SUM(e.Salary) AS TotalSalaryExp
FROM emp e
JOIN dept d ON e.DepartmentId = d.DeptId
GROUP BY d.DeptName;

-- Ques2
select avg(salary), count(*) from emp;

-- Ques3
SELECT d.DeptName, CONCAT(e.FirstName, ' ', e.LastName) AS EmpName, e.Salary
FROM dept d
JOIN emp e ON d.DeptId = e.DepartmentId
WHERE (e.Salary, e.DepartmentId) IN (
    SELECT MAX(Salary), DepartmentId
    FROM emp
    GROUP BY DepartmentId
);


-- Ques4
SELECT d.DeptName, COUNT(*) AS EmployeeCount
FROM dept d
LEFT JOIN emp e ON d.DeptId = e.DepartmentId
GROUP BY d.DeptName;

-- Ques5
SELECT AVG(EXTRACT(YEAR FROM HireDate)) AS AverageHireYear
FROM emp;

-- Ques 6
SELECT FirstName, LastName
FROM emp
ORDER BY HireDate ASC
LIMIT 1;

-- Ques7
SELECT d.DeptName, AVG(e.Salary) AS AvgSalary
FROM emp e
JOIN dept d ON e.DepartmentId = d.DeptId
GROUP BY d.DeptName
ORDER BY AvgSalary DESC
LIMIT 1;


-- Ques 8
select sum(salary) from emp;

-- Ques 9
SELECT
    FirstName,
    LastName,
    TIMESTAMPDIFF(YEAR, HireDate, CURDATE()) 
FROM emp;


-- Ques 6 procedure

DELIMITER //

 create PROCEDURE GetLongestTenuredEmployee()
BEGIN
    SELECT FirstName, LastName
	FROM emp
	ORDER BY HireDate ASC
	limit 1;
END //
DELIMITER ;
call GetLongestTenuredEmployee();

-- Ques 7 procedure
DELIMITER //
CREATE PROCEDURE GetDepartmentWithHighestAvgSalary()
BEGIN
    SELECT DepartmentName
    FROM (
        SELECT d.DeptName AS DepartmentName, AVG(e.Salary) AS AvgSalary
        FROM emp e
        JOIN dept d ON e.DepartmentId = d.DeptId
        GROUP BY d.DeptName
        ORDER BY AvgSalary DESC
        LIMIT 1
    ) AS HighestAvgSalaryDepartment;
END //
DELIMITER ;
call GetDepartmentWithHighestAvgSalary();
-- Ques 8 procedure
DELIMITER //
CREATE PROCEDURE CalculateTotalAnnualSalaryExpenditure()
BEGIN
    DECLARE TotalSalary INT;
    
    SELECT SUM(Salary) INTO TotalSalary
    FROM emp;
    
    SELECT TotalSalary ;
END //
DELIMITER ;
call CalculateTotalAnnualSalaryExpenditure();
-- Ques 9
DELIMITER //
CREATE PROCEDURE CalculateWorkAnniversary()
BEGIN
    SELECT
        FirstName,
        LastName,
        TIMESTAMPDIFF(YEAR, HireDate, CURDATE()) 
    FROM emp;
END //
DELIMITER ;
call CalculateWorkAnniversary();

create table leave1 (
	LeaveId int primary key,
    EmpId int,
    DeptId int,
    StartDate date,
    EndDate date,
    TypeOfLeave varchar(20),
    foreign key(EmpId) references emp(EmpId),
    foreign key(DeptId) references dept(DeptId)
    );

insert into emp values(1461,'cab','aaa','cab@gmail.com',1010011111,'2004-5-8',1000000,1,26),
					  (1462,'fed','aaa','fed@gmail.com',1111111110,'2004-9-27',1200000,2,26),
                      (1463,'ihg','aaa','ihg@gmail.com',2222222221,'2002-1-2',900000,3,27),
                      (1464,'lkj','aaa','lkj@gmail.com',3333333331,'2001-8-20',600000,4,24),
                      (1465,'onm','aaa','onm@gmail.com',4444444441,'2001-8-20',900000,5,30),
                      (1466,'rqp','aaa','rqp@gmail.com',5555555551,'2012-5-9',900000,1,29),
                      (1467,'uts','aaa','uts@gmail.com',6666666661,'2007-8-20',400000,2,31),
                      (1468,'xwv','aaa','xwv@gmail.com',7777777771,'2008-7-9',800000,3,25),
                      (1469,'azy','aaa','azy@gmail.com',8888888881,'2010-11-18',900000,4,25),
                      (1470,'acb','aaa','acb@gmail.com',9999999991,'2006-12-20',900000,5,28),
                      (1471,'cab','bbb','cab@gmail.com',1010011111,'2004-5-8',1000000,1,26),
					  (1472,'fed','bbb','fed@gmail.com',1111111110,'2004-9-27',1200000,2,26),
                      (1473,'ihg','bbb','ihg@gmail.com',2222222221,'2002-1-2',900000,3,27),
                      (1474,'lkj','bbb','lkj@gmail.com',3333333331,'2001-8-20',600000,4,24),
                      (1475,'onm','bbb','onm@gmail.com',4444444441,'2001-8-20',900000,5,30),
                      (1476,'rqp','bbb','rqp@gmail.com',5555555551,'2012-5-9',900000,1,29),
                      (1477,'uts','bbb','uts@gmail.com',6666666661,'2007-8-20',400000,2,31),
                      (1478,'xwv','bbb','xwv@gmail.com',7777777771,'2008-7-9',800000,3,25),
                      (1479,'azy','bbb','azy@gmail.com',8888888881,'2010-11-18',900000,4,25),
                      (1480,'acb','bbb','acb@gmail.com',9999999991,'2006-12-20',900000,5,28),
                      (1481,'cab','ccc','cab@gmail.com',1010011111,'2004-5-8',1000000,1,26),
					  (1482,'fed','ccc','fed@gmail.com',1111111110,'2004-9-27',1200000,2,26),
                      (1483,'ihg','ccc','ihg@gmail.com',2222222221,'2002-1-2',900000,3,27),
                      (1484,'lkj','ccc','lkj@gmail.com',3333333331,'2001-8-20',600000,4,24),
                      (1485,'onm','ccc','onm@gmail.com',4444444441,'2001-8-20',900000,5,30),
                      (1486,'rqp','ccc','rqp@gmail.com',5555555551,'2012-5-9',900000,1,29),
                      (1487,'uts','ccc','uts@gmail.com',6666666661,'2007-8-20',400000,2,31),
                      (1488,'xwv','ccc','xwv@gmail.com',7777777771,'2008-7-9',800000,3,25),
                      (1489,'azy','ccc','azy@gmail.com',8888888881,'2010-11-18',900000,4,25),
                      (1490,'acb','ccc','acb@gmail.com',9999999991,'2006-12-20',900000,5,28),
                      (1491,'cab','ddd','cab@gmail.com',1010011111,'2004-5-8',1000000,1,26),
					  (1492,'fed','ddd','fed@gmail.com',1111111110,'2004-9-27',1200000,2,26),
                      (1493,'ihg','ddd','ihg@gmail.com',2222222221,'2002-1-2',900000,3,27),
                      (1494,'lkj','ddd','lkj@gmail.com',3333333331,'2001-8-20',600000,4,24),
                      (1495,'onm','ddd','onm@gmail.com',4444444441,'2001-8-20',900000,5,30),
                      (1496,'rqp','ddd','rqp@gmail.com',5555555551,'2012-5-9',900000,1,29),
                      (1497,'uts','ddd','uts@gmail.com',6666666661,'2007-8-20',400000,2,31),
                      (1498,'xwv','ddd','xwv@gmail.com',7777777771,'2008-7-9',800000,3,25),
                      (1499,'azy','ddd','azy@gmail.com',8888888881,'2010-11-18',900000,4,25),
                      (1500,'acb','ddd','acb@gmail.com',9999999991,'2006-12-20',900000,5,28);

insert into leave1 values(101,1451,1,'2019-08-14','2019-08-16','Leave'),
						 (102,1452,2,'2019-08-14','2019-08-22','Medical Leave'),
                         (103,1451,1,'2019-09-15','2019-09-17','Leave'),
                         (104,1465,5,'2019-08-02','2019-08-04','Leave'),
                         (105,1472,2,'2019-02-20','2019-02-21','Leave'),
                         (106,1451,1,'2019-07-14','2019-07-21','Medical Leave'),
                         (107,1451,1,'2019-01-14','2019-01-16','Leave'),
                         (108,1453,3,'2019-08-14','2019-08-16','Medical Leave'),
                         (109,1472,2,'2019-08-14','2019-08-18','Medical Leave'),
                         (110,1465,5,'2019-03-14','2019-03-16','Leave'),
                         (111,1451,1,'2019-04-08','2019-04-09','Leave'),
                         (112,1488,3,'2019-08-14','2019-08-16','Leave'),
                         (113,1478,3,'2019-08-14','2019-08-16','Medical Leave'),
                         (114,1456,1,'2019-08-14','2019-08-16','Leave'),
                         (115,1457,2,'2019-08-14','2019-08-16','Leave'),
                         (116,1478,3,'2019-08-14','2019-08-16','Leave'),
                         (117,1481,1,'2019-08-14','2019-08-16','Medical Leave'),
                         (118,1500,5,'2019-08-14','2019-08-16','Leave'),
                         (119,1498,3,'2019-08-14','2019-08-16','Leave'),
                         (120,1478,3,'2019-01-13','2019-08-16','Leave'),
                         (121,1451,1,'2019-08-14','2019-08-16','Leave'),
                         (122,1472,2,'2019-08-14','2019-08-16','Leave'),
                         (123,1481,1,'2019-08-14','2019-08-16','Leave'),
                         (124,1451,1,'2019-12-14','2019-12-16','Leave'),
                         (125,1494,4,'2019-08-14','2019-08-16','Leave'),
                         (126,1475,5,'2019-08-14','2019-08-16','Leave'),
                         (127,1465,5,'2019-04-22','2019-08-23','Leave'),
                         (128,1466,1,'2019-08-14','2019-08-16','Medical Leave'),
                         (129,1485,5,'2019-08-14','2019-08-16','Leave'),
                         (130,1451,1,'2019-08-01','2019-08-05','Leave');

-- Ques 10
SELECT
    e.EmpId,
    CONCAT(e.FirstName, ' ', e.LastName) AS EmployeeName,
    SUM(DATEDIFF(EndDate, StartDate) + 1) AS TotalLeaveDays
FROM
    emp e
LEFT JOIN
    leave1 l ON e.EmpId = l.EmpId
GROUP BY
    e.EmpId, e.FirstName, e.LastName
ORDER BY
    e.EmpId;

-- Ques 11
SELECT
    e.EmpId,
    CONCAT(e.FirstName, ' ', e.LastName) AS EmployeeName,
    SUM(DATEDIFF(EndDate, StartDate) + 1) AS TotalLeaveDays
FROM
    emp e
LEFT JOIN
    leave1 l ON e.EmpId = l.EmpId
GROUP BY
    e.EmpId, e.FirstName, e.LastName
ORDER BY
    TotalLeaveDays desc
    Limit 1;

-- Ques 10 procedure
DELIMITER //
create procedure TotalLeavesbyEmp()
BEGIN
	SELECT
    e.EmpId,
    CONCAT(e.FirstName, ' ', e.LastName) AS EmployeeName,
    SUM(DATEDIFF(EndDate, StartDate) + 1) AS TotalLeaveDays
FROM
    emp e
LEFT JOIN
    leave1 l ON e.EmpId = l.EmpId
GROUP BY
    e.EmpId, e.FirstName, e.LastName
ORDER BY
    e.EmpId;
END //
DELIMITER ;
call TotalLeavesbyEmp();

-- Ques 11 procedure
DELIMITER //
create procedure MostLeave()
BEGIN
	SELECT
    e.EmpId,
    CONCAT(e.FirstName, ' ', e.LastName) AS EmployeeName,
    SUM(DATEDIFF(EndDate, StartDate) + 1) AS TotalLeaveDays
FROM
    emp e
LEFT JOIN
    leave1 l ON e.EmpId = l.EmpId
GROUP BY
    e.EmpId, e.FirstName, e.LastName
ORDER BY
    TotalLeaveDays desc
    Limit 1;
END //
DELIMITER ;
call MostLeave();
