
#include <stdio.h>
int CheckDivision(int num, int a , int b)
{
	
	if( num%a==0 && num%b==0 )
		return 1;
	else
		return 0;
}
int main()
{
  int number=0,A=0,B=0;
  printf("Enter any integer number : ");
  scanf("%d",&number);
  printf("Enter first divisor : ");
  scanf("%d",&A);
  printf("Enter second divisor : ");
  scanf("%d",&B);

	if(CheckDivision(number,A,B))
		printf("%d is divisible by %d and %d\n",number,A,B);
	else
		printf("%d is not divisible by %d and %d\n",number,A,B);
	
    return 0;
}
