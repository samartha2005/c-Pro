
#include<stdio.h>
int main()
{
	int number, reversedNumber=0,reminder;
    printf("Enter the number: ");
    scanf("%d", &number);
    while(number!=0)
{
reminder=number%10;	
reversedNumber= reversedNumber * 10 + reminder;
number/=10;
}
	printf("The Reversed number is: %d\n",reversedNumber);
return 0;
}
