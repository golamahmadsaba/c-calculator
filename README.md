# Calculator in C

This is a **calculator program** written in C. It allows the user to perform basic arithmetic operations : addition, subtraction, multiplication, and division.

---

## Features

* Addition of many numbers as your wish
* Subtraction of two numbers
* Multiplication of many numbers as your wish
* Division of two numbers (checks for division by zero)
* User-friendly menu interface

---

## How to Use

1. Open your terminal and go to the project folder.
2. Compile the program using GCC:

```bash
gcc calculator.c -o calculator
```

3. Run the program:

```bash
./calculator
```

4. Follow the on-screen menu:

* Enter your name
* Enter your choice (1-4) for the operation
* Enter the two numbers
* View the result

---

## Example

```
What's your name?
Golam Ahmad Saba
Hello,Golam Ahmad Saba
.
This is Calculator Menu. What do you want to do ,Golam Ahmad Saba
?

1. For addition, enter 1
2. For substraction ,enter 2
3. For multiplication, enter 3
4. For division , enter 4
Enter your choice: 1
How many numbers: 3
Enter 1 number:25
Enter 2 number:15
Enter 3 number:10
The summation is : 50
Do you want do any calculation ? Enter Y for yes and N for no : 
Y


This is Calculator Menu. What do you want to do ,Golam Ahmad Saba
?
1. For addition, enter 1
2. For substraction ,enter 2
3. For multiplication, enter 3
4. For division , enter 4
Enter your choice: 2
Enter 1st Number :50
Enter 2nd Number :12
Subtraction of 50 and 12 is : 38
Do you want do any calculation ? Enter Y for yes and N for no : 
N
```

---

## Notes

* Only **integer numbers** are supported.
* Division by zero is not allowed and will show an error.


---

## License

This project is **free to use and modify**. Feel free to contribute or improve it.
