/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include<stdio.h>
int main (void)
//main function begins for execution
{
  //declaring variables
	int number,counter=0,sum=0;

  //enter the number
   printf("Enter the number :");
   scanf("%d",&number);

   //using while loop
   while(counter<=number)
   {
   
    //calculate the sum
   	 sum=sum+counter;

     //using counter increment
  	 counter++;
   	
	}
  //prints the sum
	printf("The sum is : %d",sum);

 //return type value
	return 0; 
	


}
