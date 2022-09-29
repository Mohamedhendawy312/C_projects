// Libraries
# include <stdio.h>
# include <stdlib.h>
# include <math.h>


#define note "try again, enter the valid operation"
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void factorial();
void power();
void square();
void cube();
void squareroot();

int main()
{
    printf("\t\tWelcome to the Calculator!!\n\n");

    int choice;

    printf("\n******* press 0 to quit the program *******n");
    printf("Enter 1 for Addition \n");
    printf("Enter 2 for Subtraction \n");
    printf("Enter 3 for Multiplication \n");
    printf("Enter 4 for Division \n");
    printf("Enter 5 for Modulus \n");
    printf("Enter 6 for Factorial \n");
    printf("Enter 7 for Power \n");
    printf("Enter 8 for Square \n");
    printf("Enter 9 for Cube \n");
    printf("Enter 10 for Squareroot \n");

    while(1)
    {
        printf("\n\nEnter the operation you want to perform: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addition();
                break;
            case 2:
                subtraction();
                break;
            case 3:
                multiplication();
                break;
            case 4:
                division();
                break;
            case 5:
                modulus();
                break;
            case 6:
                factorial();
                break;
            case 7:
                power();
                break;
            case 8:
                square();
                break;
            case 9:
                cube();
                break;
            case 10:
                squareroot();
                break;
            case 0:
                exit(0);
            default:
            printf("\n********** %s **********\n", note);
        }
    }
    return 0;
}


void addition()
{
    double x, y;
    printf("First number:");
    scanf("%lf", &x);
    printf("Second number:");
    scanf("%lf", &y);
    double sum = x + y;
    printf("The sum of x and y is %lf\n", sum);
}

void subtraction()
{
    double x, y;
    printf("First number:");
    scanf("%lf", &x);
    printf("Second number:");
    scanf("%lf", &y);
    double subtract = x - y;
    printf("The subtraction of x and y is %lf\n", subtract);
}

void multiplication()
{
    double x;
    double y;
    printf("First number:");
    scanf("%lf", &x);
    printf("Second number:");
    scanf("%lf", &y);
    double multiply = x * y;
    printf("The multiplication of x and y is %lf\n", multiply);

}

void division()
{
    double x, y;
    printf("First number:");
    scanf("%lf", &x);
    printf("Second number:");
    scanf("%lf", &y);
    double division = x / y;
    printf("The division of x and y is %lf\n", division);
}

void modulus()
{
    int x, y;
    printf("First number:");
    scanf("%i", &x);
    printf("Second number:");
    scanf("%i", &y);
    int modulus = x % y;
    printf("The modulus of x and y is %i\n", modulus);
}

void factorial()
{
    int n,factorial;
    printf("Enter the number you want the factorial of: ");
    scanf("%d",&n);
    factorial=1;
    for(int i=1;i<=n;i++){
        factorial=factorial*i; // factorial*=i;
    }
    printf("\nFactorial of %d is %d",n,factorial);
}

void power()
{
    double b;
    double p;
    printf("The base: ");
    scanf("%lf", &b);
    printf("The power:");
    scanf("%lf", &p);
    double result =pow(b,p);
    printf("The power is %lf",result);
}

void square()
{
    double b;
    printf("Enter the number you want the square of: ");
    scanf("%lf",&b);
    double result=pow(b,2);
    printf("The square of %lf is %lf",b,result);
}

void cube()
{
    double b;
    printf("Enter the number you want the cube of: ");
    scanf("%lf",&b);
    double result=pow(b,3);
    printf("The cube of %lf is %lf",b,result);
}

void squareroot()
{
    double b;
    printf("Enter the number you want the square root of : ");
    scanf("%lf",&b);
    double result = sqrt(b);
    printf("The square root of %lf is %lf",b,result);
}
