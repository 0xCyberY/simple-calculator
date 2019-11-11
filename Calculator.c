#include<stdio.h>
#include<stdlib.h>
int main()
{
int a,b,c,choice;
printf("Enter the values of a and b:");
scanf("%d%d",&a,&b);
printf(" \nEnter your choice \n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Divison \n 5.Remainder \n");
scanf("%d", &choice);
switch(choice)
{
case 1:
c=a+b;
printf(" Addition=%d\n", c);
break;
case 2:
c=a-b;
printf(" Substraction=%d\n" , c);
break;
case 3:
c=a*b;
printf(" Multiplication=%d\n", c);
break;
case 4:
c=a/b;
printf(" Divide=%d\n", c);
break;
case 5:
c=a%b;
printf(" Remainder=%d\n",c );
break;
default:
printf(" Invalid Result\n");
break;
}
}
