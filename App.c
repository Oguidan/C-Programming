#include <stdio.h>
#include <stdlib.h>

int main() {
    // PRINTING
    printf("Hello\n");
    printf("World");
    printf("!\n");

    // VARIABLES
    /*
    Names are case-sensitive and may begin with:
        letters, _
    After may include
        letters, numbers, _
    Convention says
        Start with a lowercase word, then additional words are capilise
        ex. myFirstVariable
    */

   char testGrade = 'A'; // single 8-bit character.
   char name[] = "Mike"; // array of characters (string)

   // you can make them unsigned by adding "unsigned" prefix
   short age0 = 10; // atleast 16-bit signed integer
   int ag1 = 20; // atleast 16-bit signed interger (not smaller than a short)
   long age2 = 30; // atleast 32-bit signed integer
   long long age3 = 40; // atleast 64-bits signed integer

   float gpa0 = 2.5; // single precision floating point
   double gpa1 = 3.5; // double-precision floating point
   long double gpa2 = 3.5; // extended-precision floating point

   int isTall; //0 if false, non zero if true
   const int IS_TALL;
   isTall = 1;

   testGrade = 'F';

   printf("%s, your grade is %c \n", name, testGrade);
   /*
   %c character
   %d integer number (base 10)
   %e exponential floating-point number
   %f floating-point number
   %i integer (base 10)
   %o octal number (base 8)
   %s a string of characters
   %u unsigned decimal (integer) number
   %x number in hexadecimal (base 16)
   %% print a percent sign
   \% print a percent sign
   */

  // CASTING
  printf("%d \n", (int)3.14);
  printf("%f \n", (double)3 / 2);

  // POINTERS
  int num = 10;
  printf("%p \n", &num);

  int *pNum = &num;
  printf("%p \n", pNum);
  printf("%d \n", *pNum);

  // NUMBERS

  printf("%d \n", 2 * 3); // Basic Arithmetic: +, -, /, *
  printf("%d \n", 10 % 3); // Modulus Op. : return the remainder of 10/3
  printf("%d \n", (1 + 2) * 3); // order of operationss
  printf("%d \n", 10 / 3); //int's and double

  int num1 = 10;
  num1 += 100; // +=, -=, /=, *=
  printf("%d \n", num1);

  num1++;
  printf("%d \n", num1);

  // USER INPUT
  // char name1[10];
  // printf("Enter your name: ");
  // fgets(name1, 10, stdin);
  // printf("Hello %s! \n", name1);
  //
  // int age;
  // printf("Enter your age: ");
  // scanf("%d", &age);
  // printf("You are %d \n", age);

  // char grade;
  // printf("Enter your grade: ");
  // scanf("%c", &grade);
  // 3printf("You got an %c on the test \n", grade);

  // double gpa;
  // printf("Enter your gpa: ");
  // scanf("%lf", &gpa);
  // printf("Your gpa is %f- \n", gpa);

  // ARRAYS
   int luckyNumbers[6];
// int luckyNumbers[6] = {4, 8, 15, 16, 23, 42};
//          indexes:  0  1  2   3   4   5
luckyNumbers[0] = 90;
printf("%d \n", luckyNumbers[0]);
printf("%d \n", luckyNumbers[1]);

  return 0;
}