//Este é um programa de cadastro de usuários em um e-commerce
//ALUNOS:
//FÁBIO HENRIQUE DOS SANTOS BUECKER
//EDUARDO BRITO DUQUE DO NASCIMENTO
//FELIPE GEOCZE PORCARO RAMOS
#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include <locale.h>

//linha 18 variavel tipo inteinro - int
//linha 119 a 131 possui operações aritimeticas e comandos de atribuição - soma = a + b
//linha 133 a 114 possui operações logicas - if(nota>=4)
//linha 32 possui comando de entrada - scanf("%s",nome);
//linha 31 possui comando de saida - printf("digite seu nome: ");
//linha 113 a 123  possui estrutura condicional composta - if e else
//linha 27 a 31 possui estrutura de repetição - do e while
int main()

{
setlocale(LC_ALL, "");



char sexo[2], nome[30], sobrenome[20], email[50], pais,estado;
int idade,celular,cep,senha,rg,robo,a,b,soma,nota,sair,cpf;

// Nas linhas 25 e 26 estamos definindo as variaveis utilizadas em nosso programa

do{
    printf("digite seu nome: ");
    scanf("%s",nome);
    setbuf(stdin,NULL);
}while (strlen(nome) < 3);
//entre as linhas 30 e 34 há um sistema de repetição pra preencher a variável ´´nome´´

do{
    printf("digite seu Sobrenome: ");
    scanf("%s",&nome);
    setbuf(stdin,NULL);
}while (strlen(nome) < 3);
//entre as linhas 37 e 41 há um sistema de repetição pra preencher a variável ´´nome´´

do{
    printf("digite seu E-mail: ");
    scanf("%s",&email);
    setbuf(stdin,NULL);
}while (strlen(email) < 3);
//entre as linhas 44 e 48 há um sistema de repetição pra preencher a variável ´´email´´

do{
    printf("digite o seu celular incluindo dd: ");
    scanf("%d",&celular);
    setbuf(stdin,NULL);
}while (celular = 0);
//entre as linhas 51 e 55 há um sistema de repetição pra preencher a variável ´´celular´´

do{
    printf("digite sua idade: ");
    scanf("%d",&idade);
    setbuf(stdin,NULL);
}while (idade =0);
//entre as linhas 51 e 55 há um sistema de repetição pra preencher a variável ´´idade´´

do{
    printf("digite qual o seu sexo: ");
    scanf("%s",&sexo);
    setbuf(stdin,NULL);

}while (strlen,(sexo) <3);
//entre as linhas 65 e 70 há um sistema de repetição pra preencher a variável ´´sexo´´

do{
    printf("digite qual o seu pais: ");
    scanf("%s",&pais);
    setbuf(stdin,NULL);

}while (strlen,(pais) =0);
//entre as linhas 73 e 78 há um sistema de repetição pra preencher a variável ´´pais´´

do{
    printf("digite qual a sigla do seu estado: ");
    scanf("%s",&estado);
    setbuf(stdin,NULL);

}while (strlen,(estado) =0);
//entre as linhas 81 e 86 há um sistema de repetição pra preencher a variável ´´estado´´

do{
    printf("digite uma senha de apenas numeros: ");
    scanf("%d",&senha);
    setbuf(stdin,NULL);
}while (senha =0);
//entre as linhas 89 e 93 há um sistema de repetição pra preencher a variável ´´senha´´

do{
    printf("digite seu cep: ");
    scanf("%d",&cep);
    setbuf(stdin,NULL);
}while (cep =0);
//entre as linhas 96 e 100 há um sistema de repetição pra preencher a variável ´´cep´´

do{
    printf("digite seu RG: ");
    scanf("%d",&rg);
    setbuf(stdin,NULL);
}while (rg =0);
//entre as linhas 103 e 107 há um sistema de repetição pra preencher a variável ´´rg´´

do
{
    printf("digite seu CPF: ");
    scanf("%d",&cpf);
    setbuf(stdin,NULL);
}while (cpf =0);
//entre as linhas 110 e 115 há um sistema de repetição pra preencher a variável ´´cpf´´


    printf("\n agora realize um processo de soma de numeros para confirmar que não é um robo\n");

    printf("Digite um numero inteiro: ");
    scanf("%d", &a);

    printf("Digite um numero inteiro: ");
    scanf("%d", &b);
    soma = a + b;
    printf("O valor da soma = %d\n", soma);
    printf("-------------voce não é um robo-------------\n");

    printf("para finalisar de uma nota para nosso serviço de 0 a 5:");
    scanf("%d", &nota);

if(nota>=4)
{
    printf("\n obrigado pela excelente nota \n");
}
else
{
    printf("\n obrigado pela havaliação buscaremos formas de melhorar para almentar sua avaliação \n");
}


printf("");



printf("\n------------obrigado pelo cadastro ------------");
return 0;
}
