/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include<stdio.h>
int main(void)
//main function begins for execution
{
  //declaring variables
  int mark1, mark2,sum;
  float average;

  //Enter the mark1 subject marks
  printf("Enter the mark1 marks :");
  scanf("%d",&mark1); 

  //Enter the mark2 subject marks
  printf("Enter the mark2 marks :");
  scanf("%d",&mark2); 

  //calculate the sum
  sum=mark1+mark2;  

  //calculate the average
  average=sum/2.0;

  //prints the average
  printf("The average is : %.2f",average); 

  //return type value
  return 0; 
}
  
