#include <stdio.h>

int main()
{
  
  char cal;
  int n1,n2;

  printf("Enter First Number \n");
  scanf("%d",&n1);
  printf("Enter Second Number \n");
  scanf("%d",&n2);

  printf("Enter Cal \n");
  scanf(" %c",&cal);
  
  switch(cal)
  {
    case '+':
    {printf("Answer is %d",n1+n2);
    break;}

    case '-':
    {printf("Answer is %d",n1-n2);
    break;}

    case '*':
    {printf("Answer is %d",n1*n2);
    break;}

    case '/':
    {printf("Answer is %d",n1/n2);
    break;}
  }
}