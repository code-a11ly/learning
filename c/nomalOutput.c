// VARIABLE OUTPUT IN C:
#include <stdio.h>

int main()
{

    /*
    In C you need to specify which type of variable
    you are printing out to the console

    %c - to print out a character
    %d - to print out a interger number
    %f - to print out a floating point number

    */

    int number = 10;
    float fraction = 1.1;
    char character = 'b';

    printf("%c \n", character);
    printf("%d \n", number);
    printf("%f \n", fraction);

    /*
    An important thing to remember is that the
    variable or better saying the value inside
    the variable will be printed in the same place
    that the %something

    */

    // so for example:
    printf("%c is %d years old \n", character, number);
    printf("%c is %d years old \n", number, character);    // note that we have to put
                                                        // the variables in the right
                                                        // order if not there will be an
                                                        // error as you can see

    printf("%d + 1 = %d \n", number, number + 1);     // we can do a math expression like that
                                                      // without modifying the variable as well

    return 0;
}
