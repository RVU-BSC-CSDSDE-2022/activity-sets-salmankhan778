u65#include <stdio.h>
int input();
int compare( int a, int b, int c);
void output(int a, int b, int c, int largsets);
int input()
{
  int n;
  printf("enter the numbres");
  scanf("%d",&n);
  return 0;
}
int compare( int a, int b, int c)
{
  int largest=a;
  if (b>largest);
  {
    largest=b;
  }
 if (c>largest);
  {
  largest=c;
  }
  return largest;
  }
void output(int a, int b, int c, int lagest)
{
    printf("largest number of %d ,%d and %d is %d ",a,b,c,largest);
  }
  int main(){
    int a,b,c,largest;
    a=input();
    b=input();
    c=input();
    largest=compare(a,b,c);
    output(a,b,c,largest);
    return 0;
}
