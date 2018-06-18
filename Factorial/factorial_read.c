
#include <stdio.h>

int main(void)
{
int num;
printf("Please input a number: ");
scanf("%d",&num);

int res = 1;
int x = num;
while(x > 0){
res *= x;
x -= 1;
}
printf("The factorial of %d is %d\n",num,res);
   return 0;
}

