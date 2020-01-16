
#include <stdio.h>
 
int a=10;   
 
void fun(void);
 
int main()
{
  int a=20;
  int b=30;  
 
  printf("In main()  a=%d, b=%d\n",a,b);
  fun();
  printf("In main() after calling fun() ~ b=%d\n",b);
  return 0;
}
 
void fun(void)
{
  int b=40;  
 
  printf("In fun()  a= %d\n", a);
  printf("In fun()  b= %d\n", b);
}
