#include<stdio.h>
#include<conio.h>
void calc(int);
void calc(int a)
{
  if(a==4)
    return ;
  printf("hello");
 calc(a+1);
printf("%d",a);
}
void main()
{int a=1;
calc(a);
}