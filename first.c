#include<stdio.h>
void main()
{
  int a,b,c;
  println("Enter two numbers for calculation");
  scanf("%d %d",a,b);
  c=a+b;
  println("the sum is %d",c);
  
  int sub(a,b)
  {
    return a-b;
  }
  int mul(a,b)
  {
    return a*b;
  }
}
