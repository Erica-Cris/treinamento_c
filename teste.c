#include <stdio.h>
int main(void){

char nome[6], telefone[20];
int idade;

printf("Olá, digite seu nome: \n");
scanf("%s", nome);
printf("Digite sua idade: \n");
scanf("%d", &idade);
printf("Digite seu telefone: \n");
scanf("%s", telefone);
printf("Sua idade: %d\nO seu nome é: %s\nSeu telefone: %s\n ", &idade, nome, telefone);

}