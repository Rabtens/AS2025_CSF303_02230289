# C++ Programming — Practical Exercises Report

**Course:** BSc Software Engineering  
**Student Name:** Kuenzang Rabten  
**Student Number:** 12230289  
**Date:** March 4, 2026

---

## Table of Contents
1. [Personal Introduction](#q01-personal-introduction)
2. [Arithmetic with Student Number](#q02-arithmetic-with-student-number)
3. [String Manipulation & Analysis](#q03-string-manipulation--analysis)
4. [User Input & Type Conversion](#q04-user-input--type-conversion)
5. [Conditional Grade Classification](#q05-conditional-grade-classification)
6. [Loop-Based Pattern Generation](#q06-loop-based-pattern-generation)
7. [Array Operations & Statistics](#q07-array-operations--statistics)
8. [Function Design & Modular Programming](#q08-function-design--modular-programming)
9. [Vector & Dynamic Collections](#q09-vector--dynamic-collections)
10. [Classes & Object-Oriented Design](#q10-classes--object-oriented-design)

---

## Q01: Personal Introduction

### Objective
Create a simple C++ program that displays formatted personal information.

### Requirements
Complete the following:

- Declare a "string" variable to hold your full name
- Declare an "int" variable for your student number
- Use "cout" to write out your own introduction in a nicely formatted style where each member of the introduction will be on a new line and have clear labels (e.g. "Name:Kuenzang Rabten"; "Student No.: 12230289").

### Expected Output
```
=============================
 Student Profile
=============================
Name : Kuenzang Rabten
Student No : 12230289
Course : BSc Software Engineering
=============================
```

### Implementation
File: `question1.cpp`

### Screenshot
![alt text](<assets/Screenshot from 2026-03-04 12-05-30.png>)

---

## Q02: Arithmetic with Student Number

### Objective
Perform various arithmetic operations on your student number.

### Requirements
- Save your student number as an integer type variable
- Calculate and print:
  - The individual sum of the digits
  - If the student number is odd or even
  - The division remainder of 7
  - The student number multiplied by 3

### Expected Output
```
Student Number : 12230289
Digit Sum : 27
Odd / Even : Odd
Remainder (% 7) : 1
Multiplied by 3 : 36690867
```

### Implementation
File: `question2.cpp`

### Screenshot
![alt text](<assets/Screenshot from 2026-03-04 12-09-54.png>)

---

## Q03: String Manipulation & Analysis

### Objective
Demonstrate string manipulation techniques in C++.

### Requirements
- Declare a string variable containing your full name
- Display the total character count including spaces
- Display the name converted to uppercase and to lowercase
- Display your initials by extracting the first character of each word
- Display the length of your first name only

### Expected Output
```
Full Name : Kuenzang Rabten
Total Length : 15
Uppercase : KUENZANG RABTEN
Lowercase : kuenzang rabten
Initials : K.R.
First Name Len : 8
```

### Implementation
File: `question3.cpp`

### Screenshot
![alt text](<assets/Screenshot from 2026-03-04 12-10-57.png>)

---

## Q04: User Input & Type Conversion

### Objective
Handle user input and perform date calculations.

### Requirements
- Prompt the user to enter their name, student number, and age
- Calculate the year they were born (use the current year)
- Calculate the year they will turn 100 years old
- Display all entered and computed values in a formatted summary

### Expected Output
```
Enter your name : Kuenzang Rabten
Enter student number : 12230289
Enter your age : 20
----------------------------------------
Summary
----------------------------------------
Name : Kuenzang Rabten
Student No : 2230289
Year of Birth : 2004
Year at Age 100: 2104
```

### Implementation
File: `question4.cpp`

### Screenshot
![alt text](<assets/Screenshot from 2026-03-04 12-12-51.png>)

---

## Q05: Conditional Grade Classification

### Objective
Implement conditional logic for grade classification with input validation.

### Requirements
- Store your name and student number as variables (hardcoded)
- Prompt the user to enter a mark between 0 and 100
- Using if-else if-else, classify the mark as:
  - Distinction (>=75)
  - Merit (>=60)
  - Pass (>=40)
  - Fail (<40)
- Display a personalised result message including the student name, mark entered, and classification
- Add input validation: if the mark is outside 0–100, print an error message instead

### Expected Output
```
Enter mark: 70
----------------------------------------
Student : Kuenzang Rabten (12230289)
Mark : 70
Grade : Merit
Result : Congratulations, You have passed.
----------------------------------------
```

### Implementation
File: `question5.cpp`

### Screenshot
![alt text](<assets/Screenshot from 2026-03-04 12-14-27.png>)

---

## Q06: Loop-Based Pattern Generation

### Objective
Use loops to generate various patterns and outputs.

### Requirements
- Store your first name in a string variable
- Using a loop, print your first name on each line N times, where N is the number of characters in your first name
- Using a nested loop, print a right-angled triangle of asterisks where the height equals the number of characters in your full name
- Print the multiplication table (1 to 10) for the last digit of your student number

### Expected Output
```
Name repeated (8 times):
Kuenzang
Kuenzang
Kuenzang
Kuenzang
Kuenzang
Kuenzang
Kuenzang
Kuenzang

Triangle (height = 16):
*
**
***
****
*****
******
*******
********
*********
**********
***********
************
*************
**************
***************
****************

Times Table for 9 (last digit of 12230289):
9 x 1 = 9
9 x 2 = 18
9 x 3 = 27
9 x 4 = 36
9 x 5 = 45
9 x 6 = 54
9 x 7 = 63
9 x 8 = 72
9 x 9 = 81
9 x 10 = 90
```

### Implementation
File: `question6.cpp`

### Screenshot
![alt text](<assets/Screenshot from 2026-03-05 09-48-23.png>)
---

## Q07: Array Operations & Statistics

### Objective
Work with arrays and perform statistical operations.

### Requirements
- Declare an integer array named using your first name (e.g., `kuenzang_marks`) with 5 elements
- Populate the array with 5 test marks of your choice (hardcoded)
- Compute and display:
  - All marks listed with their index
  - The highest mark
  - The lowest mark
  - The average mark
  - The number of marks above average
- Display a simple text-based bar for each mark using asterisks (one * per 10 marks)

### Expected Output
```
Student: Kuenzang Rabten | No: 12230289
------------------------------------------
Index Mark Bar
[0] 85 ********
[1] 72 *******
[2] 90 *********
[3] 65 ******
[4] 78 *******
------------------------------------------
Highest : 90
Lowest : 65
Average : 78.00
Above Average: 2 
```

### Implementation
File: `question7.cpp`

### Screenshot
![alt text](<assets/Screenshot from 2026-03-04 12-18-28.png>)

---

## Q08: Function Design & Modular Programming

### Objective
Create and use custom functions for modular programming.

### Requirements
- Write a function `int digitSum(int n)` that returns the sum of digits of a given integer. Call it with your student number
- Write a function `bool isPrime(int n)` that returns true if n is prime. Call it with your student number
- Write a function `int countVowels(string s)` that returns the number of vowels. Call it with your full name
- Write a function `string reverseString(string s)` that returns the reversed string. Call it with your full name
- Display all results in a formatted summary, clearly attributing each result to the function that produced it

### Expected Output
```
========================================
 Function Results for Kuenzang Rabten
 Student No: 12230289
========================================
digitSum: 27
isPrime: No
countVowels: 5
reverseString: netbaR gnazneuK
========================================
```

### Implementation
File: `question8.cpp`

### Screenshot
![alt text](<assets/Screenshot from 2026-03-04 13-05-52.png>)

---

## Q09: Vector & Dynamic Collections

### Objective
Demonstrate the use of C++ STL vector container and common algorithms.

### Requirements
- Declare a `vector<int>` named using your student number (e.g., `v12230289`)
- Run it at runtime: prompt the user to enter 6 integer values
- Display the vector contents before and after sorting in ascending order
- Using the STL, find and display the minimum, maximum, and sum
- Remove all values below the average and display the final vector

### Expected Output
```
Enter 6 values: 45 12 87 34 65 22
Original : 45 12 87 34 65 22
Sorted : 12 22 34 45 65 87
Min : 12
Max : 87
Sum : 265
Average : 44.17
After removing below average:
45 65 87
```

### Implementation
File: `question9.cpp`

### Screenshot
![alt text](<assets/Screenshot from 2026-03-04 13-07-19.png>)

---

## Q10: Classes & Object-Oriented Design

### Objective
Design and implement a class using object-oriented programming principles.

### Requirements
- Design a class `Student` with private attributes:
  - `name` (string)
  - `studentNumber` (int)
  - `vector<float>` of marks
- Implement a parameterised constructor that accepts name and student number
- Implement methods:
  - `addMark(float m)`
  - `float getAverage()`
  - `float getHighest()`
  - `float getLowest()`
  - `void printReport()`
- In main(), instantiate the class using your own name and student number
- Add at least 5 marks via `addMark()`
- Call `printReport()` to display a complete formatted academic report
- Demonstrate encapsulation by ensuring all attributes are private and only accessible via methods

### Expected Output
```
================================================
 ACADEMIC REPORT
================================================
Student Name : Kuenzang Rabten
Student No : 12230289
Marks Entered : 5
Marks : 88 76 91 65 83
Average : 80.60
Highest : 91
Lowest : 65
Classification: Merit
================================================
```

### Implementation
File: `question10.cpp`

### Screenshot
![alt text](<assets/Screenshot from 2026-03-04 13-08-59.png>)

---

## Summary

This practical exercise covers the following C++ programming concepts while doing the practical:

- Basic I/O operations and formatting
- Arithmetic operations and type conversion
- String manipulation and analysis
- Conditional statements and input validation
- Loop control structures and pattern generation
- Array operations and statistical analysis
- Function design and modular programming
- STL vectors and algorithms
- Object-oriented programming with classes and encapsulation


### Compilation Commands
```bash
g++ question1.cpp -o question1
g++ question2.cpp -o question2
g++ question3.cpp -o question3
g++ question4.cpp -o question4
g++ question5.cpp -o question5
g++ question6.cpp -o question6
g++ question7.cpp -o question7
g++ question8.cpp -o question8
g++ question9.cpp -o question9
g++ question10.cpp -o question10
```

### Execution Commands
```bash
./question1
./question2
./question3
./question4
./question5
./question6
./question7
./question8
./question9
./question10
```


