#include <stdio.h>
#include <stdlib.h>

/*Uma função é um conjunto de instruções armazenadas na memória.
Assim, podemos acessar uma função pode meio de um ponteiro que "aponte" para onde a função está na memória.*/

//EXEMPLO
float soma(int a, int b){
    return a+b;
}
int main()
{
    int x, y,z;
    //O ponteiro recebe endereco da funcao recebendo dois inteiros
    int (*p) (int,int);
    printf("INFORME DOIS NUMEROS: ");
    scanf("%d %d", &x, &y);

    p=soma;
    z=p(x,y);
    printf("Soma = %d", z);

    return 0;
}
