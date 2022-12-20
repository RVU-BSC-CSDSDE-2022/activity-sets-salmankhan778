#include <stdio.h>
int main(void)
{
  int a,b,sum;
  printf("enter the first number, \d");
  scanf("%d",&a);
  print("enter the second number,\d");
  scanf("%b",&b);
  sum=sum_func(a,b);
  printf("the sum of the 2 number is %d",sum);
  
}
sum_func(int a, int b)
{int sum;
  sum=a+b;
  return sum;
  }