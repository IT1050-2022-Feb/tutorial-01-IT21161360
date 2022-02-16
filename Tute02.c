/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/


#include<stdio.h>
int main (void)
//main functions begins for execution
{
	//declaring variables
	int distance,x,y;

  //enter the distance
	printf("Input the distance that van has travelled :");
	scanf("%d",&distance); 
	
  //using if
	if (distance<=30)  
	{
		x=distance*50;
		printf("The distance is : %d",x);
	}

  //using else if
	else if (distance>30) 
	{
		y=(distance*30)+(distance-30)*40;
	  printf("The distance is : %d",y);
	}

  //using else
	else 
	{
    //invalid input
		printf("This is invalid input");
    
	
	}
  //return type value
	return 0;  
}
