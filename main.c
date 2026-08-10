/*


    Curso: ENGENHARIA DE COMPUTAÇÃO
    1º período
    Nome do aluno(a): Alteir Lincoln Souza Gonçalves da Silva

    Prof. Ernani Cláudio Borges
    data: 10/08/2026

==============================================================
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>
#include <math.h>
#include <conio.h>

#define tam1 5
#define tam2 5

//==============================================================
//============ LOCAL PARA DECLARAR PROTÓTIPOS ==================
//==============================================================






//==============================================================
//============ LOCAL CRIAR OS MODULOS DE FUNCOES ===============
//==============================================================

//==============================================================

//==============================================================

//==============================================================

//==============================================================

//==============================================================

//==============================================================
//============    CODIGO PRINCIPAL   ===========================
//==============================================================
int main()
{
    //criar vars
    char vl_a[200], vl_b[200], vl_c[200];

    //inicializar vars
    strcpy(vl_a, "");
    strcpy(vl_b, "");
    strcpy(vl_c, "");

    //Receber os dados
    printf("Digite o primeiro conteudo: ");
    fflush(stdin);
    gets(vl_a);

    printf("Digite o segundo conteudo: ");
    fflush(stdin);
    gets(vl_b);

    strcpy(vl_c, vl_a);

    strcpy(vl_a, vl_b);

    strcpy(vl_b, vl_c);

    printf("O conteudo na primeira variavel e %s \n e o conteudo da segundo variavel %s", vl_a, vl_b);



    printf("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");
    return 0;
}
