#include<stdio.h>
#include<conio.h>
int main()
{
int first_number, second_number, third_number, temp;
printf("Enter first number: "); 
scanf("%d",&first_number);
printf("Enter second number: "); 
scanf("%d",&second_number);
printf("Enter third number: ");
scanf("%d",&third_number);
printf("Before swapping \n");
printf("First number: %d \n", first_number);
printf("Second number: %d \n", second_number);
printf("Third number: %d \n", third_number);
temp = first_number;
first_number = second_number; 
second_number = third_number; 
third_number = temp; 
printf("After swapping \n");
printf("First number: %d \n", first_number);
printf("Second number: %d \n", second_number);
printf("Third number: %d \n", third_number);
return 0;
}


