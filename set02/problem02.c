#include<stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);
int input_side()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	return n;
}
int check_scalene(int a , int b , int c)
{
	int isscalene;
	if(a!=b && b!=c)
    printf("the given triangle is isscalene\n");
}
void output(int a, int b, int c, int isscalene)
{
	printf("the given side of triangle %d , %d and %d is scalene",a,b,c,isscalene);
}
int main()
{
	int a, b, c, isscalene;
	a=input_side();
	b=input_side();
	c=input_side();
	isscalene=check_scalene(a,b,c);
	output(a,b,c, isscalene);
	return 0;
}