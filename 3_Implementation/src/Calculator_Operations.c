#include <calculator_operations.h>

void add(float n1, float n2)
{
  float result = n1+n2;
  display(n1, n2, '+', result);
}

void subtract(float n1, float n2)
{
  float result = n1-n2;
  display(n1, n2, '-', result);
}

void multiply(float n1, float n2)
{
  float result = n1*n2;
  display(n1, n2, '*', result);
}

void divide(float n1, float n2)
{
  float result = n1/n2;
  display(n1, n2, '/', result);
}

void rem(float n1, float n2)
{
  int num1 = n1;
  int num2 = n2;
  int result = num1%num2;
  printf("%d %% %d = %d\n", num1, num2, result);
}

void power(float n1, float n2)
{
  if(n2<0) 
  printf("Second number should be positive");
  else
  {
    float result=1.0;
    for(int i=1; i<=n2;i++)
    {
       result *= n1;
    }
    display(n1, n2, '^', result);
  }
}

void modulus(float n1, float n2)
{
    int num1 = n1;
    int num2 = n2;
    int result = num1 % num2;
    printf("The modulus of %d and %d is %d",num1,num2, result);
    
}