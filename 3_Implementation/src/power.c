#include<stdio.h>
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