#include <stdio.h>
int input();
int add(int a, int b);
void output(int a,int b, int sum);
int main()
{
  int a, b,sum;
  printf("enters the two numbwers:");
    a = intput();
    b = input();
  sum = add(a,b);
  output(a,b,sum);
}
int input()
{ 
  int a;
  scanf("%d",&a);
  return a;
}
int add(int a,int b)
{
  int sum;
  sum a + b;
    return sum;
}
void output(int a, int b, int sum )
{
  printf("the sum of %d and %d is %\n",a,b,sum);
}