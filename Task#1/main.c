#include <stdio.h>
#include <stdlib.h>

int main()
{

/*
//1- find max number of three numbers.

    int a , b , c ;
    printf("Enter three numbers : ");
    scanf("%d %d %d" , &a , &b , &c);

    // conditions
    if(a == b && b == c)
        printf("All Equal = %d",a);
    else if(a >= b && a >= c)
        printf("Max num = %d\n",a);
    else if(b >= a && b >= c)
        printf("Max num = %d\n",b);
    else if(c >= a && c >= b)
        printf("Max num = %d\n",c);

*/

/*
        int x = 5 ;
        if(x = -3)
            printf("Hello world\n");
*/

/*
//2- build a simple calculator that can add, subtract,
//divide, multiply and mod only 2 operands.

int x , y ;
char op ;

printf("Enter number 1 , number 2 : ");
scanf("%d %d",&x,&y);

printf("Enter operation you want : ");
// add space before %c to skip newline ch or any whitespace
scanf(" %c",&op);

switch(op)
{
case '+':
    printf("Sum of %d + %d = %d",x,y,x+y);
    break;
case '-':
    printf("Sub of %d - %d = %d",x,y,x-y);
    break;
case '*':
    printf("Multiplication of %d * %d = %d",x,y,x*y);
    break;
case '/':
    while(y < 0)
    {
        printf("Enter value > 0 for Y : ");
        scanf("%f",&y);
    }
    printf("Division of  %d / %d = %d",x,y,x/y);
    break;
case '%':
   printf("Modulus of  %d and %d = %d",x,y,x%y);
   break;

default:
    printf("Enter only (+ - / * % ) /n");
    break;

}

*/

/*
//3- build a simple scientific calculator that utilizes the logic gates
//using the logical operators on 2 operands only.

int x , y ;
char ch ;

printf("Enter operands : ");
scanf("%d %d",&x,&y);

printf("Enter your logic gate : ");
scanf(" %c",&ch);

if(ch == '&')
{
    if(x == 1 && y == 1)
        printf("1");
    else
        printf("0");
}
else if(ch == '|')
 {
    if(x == 0 && y == 0)
        printf("0");
    else
        printf("1");
 }
else if(ch == '!')
{
    if(x == 1)
        printf("0");
    else
        printf("1");

    printf("\n");

     if(y == 1)
        printf("0");
    else
        printf("1");

}

*/
        /*
//4- Given 3 numbers A, B and C, Print the minimum 
//and the maximum numbers.

 int a , b , c ;
    printf("Enter three numbers : ");
    scanf("%d %d %d" , &a , &b , &c);

    // conditions
    if(a == b && b == c)
        printf("All Equal = %d",a);
    else if(a >= b && b >= c)
        printf("Max num = %d\n Min num = %d",a,c);
    else if(b >= a && a >= c)
        printf("Max num = %d\n Min num = %d",b,c);
    else if(c >= a && a >= b)
        printf("Max num = %d\n Min num = %d",c,b);
    else if(a >= c && c >= b)
        printf("Max num = %d\n Min num = %d",a,b);
    else if(b >= c && c >= a)
        printf("Max num = %d\n Min num = %d",b,a);
    else if(c >= b && b >= a)
        printf("Max num = %d\n Min num = %d",c,a);

        */


        /*
//5- Given two numbers A and B. Print "Yes"
//if A is greater than or equal to B. Otherwise print "No".
int num1 , num2 ;

printf("Enter two numbers : ");
scanf("%d %d",&num1,&num2);

if(num1 >= num2)
    printf("Yes\n");
else
    printf("No\n");

        */


/*
//6- Given four numbers A,B,C and D.
//Print the result of the following equation :
//X = (A*B)- (C*D).

  int A , B , C , D , X ;

  printf("Enter A , B, C, D : ");
  scanf("%d %d %d %d",&A,&B,&C,&D);
  X = (A*B)- (C*D);
  printf("X = %d",X);
*/

/*
//7 - Given two numbers X and Y.
//Print the summation and multiplication and subtraction of these 2 numbers

 int n , m , sum , sub , mult ;
 printf("Enter two numbers : ");
 scanf("%d %d",&n,&m);
 sum = n + m ;
 printf("SUM of %d + %d = %d\n",n,m,sum);

 sub = n - m ;
 printf("SUB of %d - %d = %d\n",n,m,sub);

 mult = n * m;
 printf("MULT of %d * %d = %d\n",n,m,mult);

 */
    return 0;
}
