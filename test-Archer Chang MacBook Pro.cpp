#include <stdio.h>

int main()
{
    // about different type of data
    // int integer;
    // short int short_integer;
    // long int long_integer;
    // char char1;
    // float float_number;
    // double double_number;
    // int sizelength;

    // sizelength = sizeof(integer);
    // printf("Size of int is %d.\n", sizelength);
    // sizelength = sizeof(short_integer);
    // printf("Size of short int is %d.\n", sizelength);
    // sizelength = sizeof(long_integer);
    // printf("Size of long int is %d.\n", sizelength);
    // sizelength = sizeof(char1);
    // printf("Size of char is %d.\n", sizelength);
    // sizelength = sizeof(float_number);
    // printf("Size of float is %d.\n", sizelength);
    // sizelength = sizeof(double_number);
    // printf("Size of double is %d.\n", sizelength);

    // different type of data do calculate
    int num1, num2, num3;
    printf("Please enter the first number: ");
    scanf("%d", &num1);
    printf("Please enter the second number: ");
    scanf("%d", &num2);
    printf("Please enter the third number: ");
    scanf("%d", &num3);
    double average = (num1 + num2 + num3) / 3.0; //divide by 3.0 is needed. Because the calculate need to do the int type divide by float than it can get the float type variable.
    printf("Average of these three number is : %f.\n", average);

    return 0;
}