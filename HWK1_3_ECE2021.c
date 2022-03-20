//     
//						HomeWork1_3.c
//
//	By: Bren Garcìa Martì
//	Date: 25 Jan 2021
//
//	Problem Statement: Write a program to practice your  C
//	        math problem solving skills.
//
//				   /////// Algorithm ///////
// preprocessor header file
// main function
//	int variables to store the results of the math problems
//	display label string to console to show the numbers are 12 and 6
//	label string to the operator manipulating the math
//	display the solution to the math problem
//
//	label string to the operator manipulating the math
//	display the solution to the math problem
//
//	label string to the operator manipulating the math
//	display the solution to the math problem
//
//	label string to the operator manipulating the math
//	display the solution to the math problem
//
// end main function
//
////////////////////////////////////////////////
#include <stdio.h> // preprocessor header file
int  main(void) // main function
{
	//	define int variables to store the results of the math problems
	int twelve = 12;
	int six = 6;

	//	display label string to console to show the numbers are 12 and 6
	printf_s("The two numbers are 12 and 6.\n");

	printf_s("Addition: % d\n\n", twelve + six); // display the solution

		printf_s("Subtraction: % d\n\n", twelve - six); // display the solution

			printf_s("Multiplication: % d \n\n", twelve * six); // display the solution

				printf_s("Division: % d \n\n", twelve / six); // display the solution

					return 0;
} // end main
