#include <stdio.h>
#include <stdlib.h>

int main()
{


    printf("CHAR (BYTE): %i\r\n", sizeof(char));
    printf("INT (BYTE): %i\r\n", sizeof(int));
    printf("FLOAT (BYTE): %i\r\n", sizeof(float));
    printf("DOUBLE (BYTE): %i\r\n", sizeof(double));
    printf("\n");
    char x[4];
    printf("%d", x);
    printf("\n%d", x+1);
    printf("\n%d", x+2);
    printf("\n%d", x+3);

    /*PARA CHAR X[4];
    x+1: 4092
    x+2: 4093
    x+3: 4094
    */
    printf("\n");
    int x2[4];
    printf("\n%d", x2);
    printf("\n%d", (x2+1));
    printf("\n%d", (x2+2));
    printf("\n%d", (x2+3));


    /*PARA int X[4];
    x+1: 4100
    x+2: 4108
    x+3: 4116
    */

    printf("\n");
    float x3[4];
    printf("\n%d", x3);
    printf("\n%d", (x3+1));
    printf("\n%d", (x3+2));
    printf("\n%d", (x3+3));

    /*PARA float X[4];
    x+1: 4096
    x+2: 4100
    x+3: 4104
    */

    printf("\n");
    double x4[4];
    printf("\n%d", x4);
    printf("\n%d", (x4+1));
    printf("\n%d", (x4+2));
    printf("\n%d", (x4+3));


    /*PARA double X[4];
    x+1: 4100
    x+2: 4108
    x+3: 4116
    */
    return 0;
}
