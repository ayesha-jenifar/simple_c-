# simple_c++
Exercise 1. Passing arguments by value vs. by reference. Make a function setAge which asks the users name and age and then prints it onto the screen. First create a variable age in the main function and then set its value according the user input in the sub function. So we are passing argument by reference.
Example 2. Array as function arguments. Make a function called Lotterynumbers that gets an array as function arguments. Lotterynumbers picks random lottery numbers for the array that is created in the main function.

Exercise 3. Dart scores. Make a program that asks 5 dart scores from the user. Program then finds the best score and tells it to the user.

Exercise 4. Little phone book (2 points). Make a small and simple phone book app that uses two string arrays. First array contains names and the second array corresponding numbers (without spaces, ie. 0401234567). Program has main menu with 3 selections. 1: add a contact, 2: find contact, and 3:exit program.

You can set the array max size for example 20 persons. For example:

const unsigned int MAX_LKM = 20;

string nimet[MAX_LKM];

string numerot[MAX_LKM];

Names and numbers are in parallel arrays. First name in element names[0] and corresponding number in numbers[0] etc.
---------------------------------------------------------------------------------------------------------------------

Exercise 5. Arrays. Integer array. Make a program in which you create a 10 element array for exam scores. Use for- loop to ask 10 exam scores and input them to the array. After this the scores are printed onto the screen and also shown the total score (all scores added together), and also average score. 

Exercise 6. Arrays. Make a 12 element array in which you input monthly amount of rain. ask monthly amount of rain from the user and then print histogram as shown below. Ask rain amount in main function and print stars in the sub function which is called in the main program. Prototyping for example:

void printStar (int amount);

Program example.

Input amount of rain: 3

Input amount of rain: 5

Input amount of rain: 12

Input amount of rain: 16

Input amount of rain: 21

Input amount of rain: 18

Input amount of rain: 19

Input amount of rain: 16

Input amount of rain: 11

Input amount of rain: 7

Input amount of rain: 4

Input amount of rain: 1

***

*****

************

****************

********************

******************

*******************

***********

*******

****

*

Exercise 7. Switch-Case. Write a program that asks 2 numbers from  the user and then asks the operation:

Choose 1, if you want to add the numbers
Choose 2, if you want to subtract the numbers
Choose 3, if you want to multiply the numbers
Choose 4, if you want to divide the numbers

After the choice is given the result is printed onto the screen. Use switch-case- structure.

Exercise 8: Functions, boolean -variable. In math a number is a prime number if that number is divisible only with itself and one. Make a function that finds out whether a number is a prime number or not. Function in a Boolean function so it returns true or false. Main function prints all numbers between 0 and 1000 and sub function finds out whether that number is prime or not.



