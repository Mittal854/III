create database university;
use university;
-- Table for Students
CREATE TABLE Students (
    StudentID INT PRIMARY KEY,
    FirstName VARCHAR(50),
    LastName VARCHAR(50),
    DateOfBirth DATE,
    Gender CHAR(1),
    Email VARCHAR(100),
    Phone VARCHAR(15)
);

-- Table for Courses
CREATE TABLE Courses (
    CourseID INT PRIMARY KEY,
    CourseName VARCHAR(100),
    Department VARCHAR(50),
    Credits INT
);

-- Table for Enrollments (Many-to-Many Relationship between Students and Courses)
CREATE TABLE Enrollments (
    EnrollmentID INT PRIMARY KEY,
    StudentID INT,
    CourseID INT,
    EnrollmentDate DATE,
    FOREIGN KEY (StudentID) REFERENCES Students(StudentID),
    FOREIGN KEY (CourseID) REFERENCES Courses(CourseID)
);

-- Table for Professors
CREATE TABLE Professors (
    ProfessorID INT PRIMARY KEY,
    FirstName VARCHAR(50),
    LastName VARCHAR(50),
    Department VARCHAR(50),
    Email VARCHAR(100),
    Phone VARCHAR(15)
);

-- Table for Class Schedule
CREATE TABLE ClassSchedule (
    ScheduleID INT PRIMARY KEY,
    CourseID INT,
    ProfessorID INT,
    DayOfWeek VARCHAR(15),
    StartTime TIME,
    EndTime TIME,
    Room VARCHAR(20),
    FOREIGN KEY (CourseID) REFERENCES Courses(CourseID),
    FOREIGN KEY (ProfessorID) REFERENCES Professors(ProfessorID)
);

-- Table for Grades
CREATE TABLE Grades (
    GradeID INT PRIMARY KEY,
    EnrollmentID INT,
    Grade VARCHAR(2),
    FOREIGN KEY (EnrollmentID) REFERENCES Enrollments(EnrollmentID)
);

-- Table for Departments
CREATE TABLE Departments (
    DepartmentID INT PRIMARY KEY,
    DepartmentName VARCHAR(50),
    HeadProfessorID INT,
    FOREIGN KEY (HeadProfessorID) REFERENCES Professors(ProfessorID)
);

insert into students values
	(1401,'A','B','2004-05-08','M','ab@gmail.com','62830xxxxx'),
    (1402,'A','C','2004-05-09','F','ac@gmail.com','62830xxxxx'),
    (1403,'A','D','2004-06-10','M','ad@gmail.com','62830xxxxx'),
    (1404,'A','E','2004-07-11','M','ae@gmail.com','62830xxxxx'),
    (1405,'A','F','2004-05-08','F','af@gmail.com','62830xxxxx'),
    (1406,'A','G','2004-05-08','F','ag@gmail.com','62830xxxxx'),
    (1407,'A','H','2004-05-08','M','ah@gmail.com','62830xxxxx'),
    (1408,'A','I','2004-05-08','M','ai@gmail.com','62830xxxxx'),
    (1409,'A','J','2004-05-08','M','aj@gmail.com','62830xxxxx'),
    (1410,'A','K','2004-05-08','F','ak@gmail.com','62830xxxxx'),
    (1411,'A','L','2004-05-08','F','al@gmail.com','62830xxxxx'),
    (1412,'A','M','2004-05-08','F','am@gmail.com','62830xxxxx'),
    (1413,'A','N','2004-05-08','M','an@gmail.com','62830xxxxx'),
    (1414,'A','O','2004-05-08','M','ao@gmail.com','62830xxxxx'),
    (1415,'A','P','2004-05-08','M','ap@gmail.com','62830xxxxx'),
    (1416,'A','Q','2004-05-08','M','aq@gmail.com','62830xxxxx'),
    (1417,'A','R','2004-05-08','M','ar@gmail.com','62830xxxxx'),
    (1418,'A','S','2004-05-08','F','as@gmail.com','62830xxxxx'),
    (1419,'A','T','2004-05-08','M','at@gmail.com','62830xxxxx'),
    (1420,'A','U','2004-05-08','M','au@gmail.com','62830xxxxx'),
    (1421,'A','V','2004-05-08','M','av@gmail.com','62830xxxxx'),
    (1422,'A','W','2004-05-08','M','aw@gmail.com','62830xxxxx'),
    (1423,'A','X','2004-05-08','M','ax@gmail.com','62830xxxxx'),
    (1424,'A','Y','2004-05-08','M','ay@gmail.com','62830xxxxx'),
    (1425,'A','Z','2004-05-08','M','az@gmail.com','62830xxxxx'),
    (1426,'B','A','2004-05-08','M','ba@gmail.com','62830xxxxx'),
    (1427,'B','B','2004-05-08','M','bb@gmail.com','62830xxxxx'),
    (1428,'B','C','2004-05-08','F','bc@gmail.com','62830xxxxx'),
    (1429,'B','D','2004-05-08','F','bd@gmail.com','62830xxxxx'),
    (1430,'B','E','2004-05-08','F','be@gmail.com','62830xxxxx'),
    (1431,'B','F','2004-05-08','F','bf@gmail.com','62830xxxxx');
    