int input();
int add(int a, int b);
void output(int a, int b, int sum);
int input()
{
  int a;
  printf("enter the number");
  scanf("%d",&a);
  return a;
}
int add(int a, int b)
{
  int sum;
  sum=a+b;
  return sum;
}
void output(int a, int b, int sum)
{
  printf(" sum of the %d and %d is %d\n",a,b,sum);
}
int main()
{
int a,b, sum;
a=input();
b=input();
sum= add(a,b);
output(a,b,sum);
return 0;
}