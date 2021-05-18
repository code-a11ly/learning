
// VARIABLE INPUT IN C:
#include <stdio.h>

int main()
{

    /*
    To print something into the console we use the
    scanf open up a parenthesis and put the variable
    name to store the read value inside it we want
    to read inside.
    NOTE THAT:

    "" - we use double quotation marks to specify
         the type of variable that we are inputing

    */

    int numb = 0;

    scanf("%d", &numb);     // always after reading a line the compiler
                            // skips a line
    printf("the inputed number is: %d", numb);

    return 0;
}