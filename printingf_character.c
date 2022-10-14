#include <stdio.h>

main()
{
    char c1;
    char c2;
    char c3;
    char c4;

    c1='A';
    c2='a';
    c3='3.142';
    c4=15000;


    printf("Convert the value of c1 to character: %c.\n", c1);
    printf("Convert the value of c2 to integer: %d.\n", c2);
    printf("Convert the value of c3 to float: %f.\n", c3);
    printf("Convert the value of c4 to mantissa: %e.\n", c4);
    return 0;
}
