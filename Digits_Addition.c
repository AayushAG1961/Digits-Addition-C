#include<stdio.h>

int addi(int);
void main()
{
	int x,y;
	printf("Enter any number : ");
	scanf("%d", &x);
	y=addi(x);
	printf("Sum of digits of %d = %d",x,y);
}
int addi(int n)
{
	int new_no,rem,res;
	if(n==1)
		res=1;
	else if(n==0)
		res=0;
	else
	{
		new_no= n%10;
		rem= n/10;
		res= new_no + addi(rem);
	}

	
	return res;
}
