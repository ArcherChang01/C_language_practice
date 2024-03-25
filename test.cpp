#include <stdio.h>
// #include <iso646.h>   //需要使用and的時候include這個。但一般來說都是使用&&而非and
#include <stdlib.h>
#include <time.h>

int main() {
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
    // int num1, num2, num3;
    // printf("Please enter the first number: ");
    // scanf("%d", &num1);
    // printf("Please enter the second number: ");
    // scanf("%d", &num2);
    // printf("Please enter the third number: ");
    // scanf("%d", &num3);
    // double average = (num1 + num2 + num3) / 3.0; //divide by 3.0 is needed. Because the calculate need to do the int type divide by float than it can get the float type variable.
    // printf("Average of these three number is : %.2f.\n", average);

    // variable type char pracatice
    // char ch_01 = 'A';
    // printf("%c\n", ch_01);
    // char ch_02 = 'A' + 1;
    // printf("%c\n", ch_02);
    // char ch_03 = 'A' + '1';
    // printf("%c\n", ch_03);
    // char ch_04 = 65;
    // printf("%c\n", ch_04);
    // char ch_05 = 'A';
    // printf("%d\n", ch_05);

    // char input_letter, output_letter;
    // printf("Please enter a uppercase letter: \n");
    // scanf("%c", &input_letter);
    // if (input_letter > 64 && input_letter < 91) {
    //     output_letter = input_letter + 32;
    //     printf("Uppercase letter change to lowercase letter: %c.\n", output_letter);
    // } else if (input_letter > 96 && input_letter < 123) {
    //     output_letter = input_letter - 32;
    //     printf("Lowercase letter change to uppercase letter: %c.\n", output_letter);
    // } else {
    //     printf("You're not entered single uppercase or lowercase letter.\n");
    // }

    //運算符練習
    // int a = 3, b = 5, e = 10;
    // double c, d;
    // printf("Please enter two integer numbers.\n");
    // printf("First integer: ");
    // scanf("%d", &a);
    // printf("Second integer: ");
    // scanf("%d", &b);
    // printf("Please enter two floating point numbers.\n");
    // printf("First floating point number: ");
    // scanf("%lf", &c);
    // printf("Second floating point number: ");
    // scanf("%lf", &d);
    // printf("a is: %d, b is: %d, c is: %.3lf, d is: %.3lf.\n", a, b, c, d);
    // printf("a = 3, b = 5, e = 10.\n");
    // printf("Calculate a > b result is: %d.\n", a > b);
    // printf("Calculate a < b result is: %d.\n", a < b);
    // printf("Compare with three different number:\n");
    // printf("Result of e > b > a is: %d.\n", e > b > a);
    // printf("Compare order is from left to right.\ne > b get result: %d.\nThis result continues compare with a: %d > a. And finally get the result: %d.\n", e > b, e > b, e > b > a);

    //邏輯運算
    // int a, b, c;
    // printf("Please enter three integer.\n");
    // printf("First integer: ");
    // scanf("%d", &a);
    // printf("Second integer: ");
    // scanf("%d", &b);
    // printf("Third integer: ");
    // scanf("%d", &c);
    // if(a > b && a > c){
    //     printf("First integer is the largest number.\n");
    // }
    // // if(a > b and a > c){       //and is equal &&, but need to include the <iso646.h>
    // //     printf("First integer is the largest number.\n");
    // // }
    // if(b > a || c > a){
    //     printf("First integer is not the largest number.\n");
    // }
    
    //if, example practice
    // int a, b;
    // srand(time(NULL));
    // b = rand() % 10 + 1;
    // printf("Please guess a integer:");
    // scanf("%d", &a);
    // while (a != b) {
    //     if (a > b){
    //         printf("Your guessed number is too large.\n");
    //     } else {
    //         printf("Your guessed number is too small.\n");
    //     }
    //     printf("Please guess a integer:");
    //     scanf("%d", &a);
    // }
    // printf("Your guessed is right.\nGuessed number is : %d.\na = %d\nb = %d\n", a, a, b);

    // int people, price = 300, total;
    // printf("Please enter the number of customer: ");
    // scanf("%d", &people);
    // total = people * price;
    // if ( total >= 3000) {
    //     total = total * 0.8;
    // }
    // printf("Customer need to pay: %d.\n", total);

    double a, b ,c;
    printf("Please enter the lengths of triangle: ");
    scanf("%lf%lf%lf", &a, &b, &c);
    if ( a + b < c || b + c < a || a + c < b ) {
        printf("These three lengths can't be a triangle.\n");
    } else {
        printf("These three lengths can be a triangle.\n");
        if ( a == b && a == c ) {
            printf("This is a regular triangle.\n");
        }
    }
    
    return 0;
}