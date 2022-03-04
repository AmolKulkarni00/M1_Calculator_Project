# Introduction
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

* Simple Calculator helps users to calculate simple calculations with great speed and accessibility. This project allows users to calculate basic four operations in mathematics such as, Addition, Subtraction, Multiplication, Division. In this Project which I have implemented special operations such as Modulus and Factorial.
* The input includes the command such as, we can give numbers based on the operation the user wants. For example, for addition we give 1 as a command and that particular operation works. 

# Requirements 
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

The Requirements consists of two levels 
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 ## High Level Requirements 
 --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

| ID | Description | 	Category | Status |
|------|---------------------------------------------------|-----------|-------------|
| HR01 | User shall be able to select the operation choice | Technical | IMPLEMENTED |
| HR02 | User shall be able to add two numbers             | Technical | IMPLEMENTED |
| HR03 | User shall be able to subtract two numbers        | Technical | IMPLEMENTED |
| HR04 | User shall be able to multiply two numbers        | Technical | IMPLEMENTED |
| HR05 | User shall be able to divide two mumbers          | Technical | IMPLEMENTED |
| HR06 | User shall be able to find modulus of two numbers | Technical | IMPLEMENTED |
| HR07 | User shall be able to find factorial of a number  | Technical | IMPLEMENTED |

## Low Level Requirements 
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

| ID | Description | Category | Status |
|------|---------------------------------------------------------------------------------------------|-----------|-------------|
| LR01 | If the calculations is impossible the calculator shall display an error message to the user | Technical | IMPLEMENTED |
| LR02 | The calculator shall do the arithmetic operations selected by the user                      | Technical | IMPLEMENTED |
    
# SWOT Analysis Of Calculator 
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

![Untitled Workspace (1)](https://user-images.githubusercontent.com/98872937/156564177-fced696b-165f-4aed-a9f2-b9527f2e1464.jpg)

# 5W and 1H 
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

![5W 1H](https://user-images.githubusercontent.com/98872937/156577308-046e1a01-c350-4b27-b313-e25a65be5eac.jpg) 

# Architecture 
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

FLOWCHART DIAGRAM
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
![Flow Chart](https://user-images.githubusercontent.com/98872937/156617426-8c9ae864-91b5-4815-ba4b-72d93496db49.jpg)

SEQUENCE DIAGRAM
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
![Sequence](https://user-images.githubusercontent.com/98872937/153473273-c6796a46-b036-4468-971f-95b48dce87c0.jpeg)

COMPONENT DIAGRAM
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
![Component Diagram](https://user-images.githubusercontent.com/98872937/156582035-9e68efa9-7c68-45b8-a268-f48d10cd1566.jpg)

STRUCTURE DIAGRAM
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
![Structure Diagram](https://user-images.githubusercontent.com/98872937/156578499-75320acf-e713-47c1-a45d-1398039a8cc8.jpg) 

TEST PLAN
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

HIGH LEVEL TEST PLAN
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
| Test ID | Descrpition | Exp I/P | Exp O/P | Actual Output | Type Of Test |
|-----|-----------------------------------------------------|---------------|-------------------|-------------------|----------------|
| H01 | Check if the code is working as expected            |  Valid Input  | Correct Output    | Correct Output    | Manual Testing |
| H02 | Check if the system handles the boundary conditions | Invalid Input | Incorrect Display | Incorrect Display | Manual Testing |
| H03 | Check for the flow control jump                     | For Valid I/P | Jumps Correctly   | Jumps Correctly   | Manual Testing |
| H04 | Check for the flow control jump                     |  Invalid I\P  | Incorrect Display | Incorrect Display | Manual Testing | 

LOW LEVEL TEST PLAN
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- 
| Test ID | Descrpition | Exp I/P | Exp O/P | Actual Output | Type of Test |
|-----|----------------|-------------|------------|------------|-----------|
| L01 | addition       | float value | float O/P  | float O/P  | Unit Test |
| L02 | addition       | int value   | int O/P    | int O/P    | Unit Test |
| L03 | subtraction    | float value | float O/P  | float O/P  | Unit Test |
| L04 | subtraction    | int value   | int O/P    | int O/P    | Unit Test |
| L05 | multiplication | float value | float O/P  | float O/P  | Unit Test | 
| L06 | multiplication | int value   | int O/P    | int O/P    | Unit Test |
| L07 | division       | float value | float O/P  | float O/P  | Unit Test |
| L08 | division       | int value   | int O/P    | int O/P    | Unit Test |
| L09 | modulus        | float value | Terminates | Terminates | Unit Test |
| L10 | modulus        | int value   | int O/P    | int O/P    | Unit Test |
| L11 | factorial      | float value | Terminates | Terminates | Unit Test |
| L12 | factorial      | int value   | int O/P    | int O/P    | Unit Test | 

OUTPUT
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

ADDITION
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
![Addition](https://user-images.githubusercontent.com/98872937/156626399-561de281-b35a-4959-81ce-6bf2fc6ca5e3.jpeg)

SUBTRACTION 
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
![Subtraction](https://user-images.githubusercontent.com/98872937/156626471-1833deaa-47b7-4d4c-819c-a7f338c3a426.jpeg)

MULTIPLICATION 
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
![Multiplication](https://user-images.githubusercontent.com/98872937/156626669-cab7d290-321e-4104-9126-bf28836c772f.jpeg)

DIVISION 
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
![Division](https://user-images.githubusercontent.com/98872937/156626765-1bdffa0e-7bb2-40be-9b37-92cb37c00702.jpeg)

MODULES 
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
![Modulus](https://user-images.githubusercontent.com/98872937/156626813-699790f4-23f3-4369-880d-152a5044bf57.jpeg)

FACTORIAL
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
![Factorial](https://user-images.githubusercontent.com/98872937/156626916-4c91d462-fdcc-4953-97b0-89390ea7a9a6.jpeg) 

