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
}