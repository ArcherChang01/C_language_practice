#include <stdio.h>

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
    char ch_01 = 'A';
    printf("%c\n", ch_01);
    char ch_02 = 'A' + 1;
    printf("%c\n", ch_02);
    char ch_03 = 'A' + '1';
    printf("%c\n", ch_03);
    char ch_04 = 65;
    printf("%c\n", ch_04);
    char ch_05 = 'A';
    printf("%d\n", ch_05);

    char input_letter, output_letter;
    printf("Please enter a uppercase letter: \n");
    scanf("%c", &input_letter);
    if (input_letter > 64 && input_letter < 91) {
        output_letter = input_letter + 32;
        printf("Uppercase letter change to lowercase letter: %c.\n", output_letter);
    } else if (input_letter > 96 && input_letter < 123) {
        output_letter = input_letter - 32;
        printf("Lowercase letter change to uppercase letter: %c.\n", output_letter);
    } else {
        printf("You're not entered single uppercase or lowercase letter.\n");
    }

    return 0;
}