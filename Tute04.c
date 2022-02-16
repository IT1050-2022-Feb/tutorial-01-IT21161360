/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

//declaring global functions
int minimum(int number1,int number2);
int maximum(int number1,int number2);
int multiply(int number1,int number2);

int main()
//main function begins for execution

 {
   
   //declaring variables
   int no1, no2;

   //enter the number1
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);

   //enter the number2
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);

   //calling the minimum function
   printf("%d ", minimum(no1, no2));

   //calling the maximum function
   printf("%d ", maximum(no1, no2));

   //calling the multiply function
   printf("%d ", multiply(no1, no2));

   //return type value
   return 0;
}

//minimum function
int minimum(int number1,int number2)
{

  //using if
	if (number1<number2)
	{
    //return type value
		return number1;
	}

  //using else
	else
	{
    //return type value
		return number2;
	}
}

//maximum function
int maximum(int number1,int number2)
{

  //using if
	if (number1<number2)
	{
    //return type value
		return number2;
	}

  //using else if
	else
	{
    //return type value
		return number1;
	}
	
}

//multiply function
int multiply(int number1,int number2)
{
  //return type value
	return number1*number2;
}