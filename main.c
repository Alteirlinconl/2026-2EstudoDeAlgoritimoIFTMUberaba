/*


    Curso: ENGENHARIA DE COMPUTAÇÃO
    1º período
    Nome do aluno(a): Alteir Lincoln Souza Gonçalves da Silva

    Prof. Ernani Cláudio Borges
    data: 08/08/2026

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
    char nome[100], sexo[10], profissao[50], rua[50], bairro[50], cidade[50], sg[5], cep[15];
    int idade;
    float altura;

    //inicializar vars
    printf("\n========Inicio do programa=========");

    printf("\nDigite seu nome: ");
    fflush(stdin);
    gets(nome);

    printf("\nDigite  sua idade: ");
    fflush(stdin);
    scanf("%d", &idade);
    getchar();

    printf("Digite seu sexo : [M] Masculino [F] Feminino ");
    fflush(stdin);
    gets(sexo);

    printf("\nDigite sua altura: ");
    fflush(stdin);
    scanf("%f", &altura);
    getchar();

    printf("\nDigite sua profissao: ");
    fflush(stdin);
    gets(profissao);

    printf("\nDigite o nome da sua rua: ");
    fflush(stdin);
    gets(rua);

    printf("\nDigite o nome do seu bairro: ");
    fflush(stdin);
    gets(bairro);

    printf("\nDigite o nome da sua cidade: ");
    fflush(stdin);
    gets(cidade);

    printf("\nDigite a sigla do seu estado: ");
    fflush(stdin);
    gets(sg);

    printf("\nDigite o CEP do seu estado: ");
    fflush(stdin);
    gets(cep);

    printf("\n\n====================================\n");
    printf("\n %s, Voce tem %d anos, sexo %s",nome,idade,sexo);
    printf("\n com altura de %.2f", altura);
    printf("\n Sua profissao eh %s", profissao);
    printf("\n Mora na Rua: %s", rua);
    printf("\n Bairro %s", bairro);
    printf("\n CEP: %s, %s, (%s)", cep, cidade, sg);
    printf("\n=======================================\n");

    printf("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");
    return 0;
}
