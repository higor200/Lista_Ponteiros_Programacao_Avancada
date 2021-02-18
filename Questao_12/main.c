#include <stdio.h>
#include <stdlib.h>

/*Uma fun��o � um conjunto de instru��es armazenadas na mem�ria.
Assim, podemos acessar uma fun��o pode meio de um ponteiro que "aponte" para onde a fun��o est� na mem�ria.*/

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
