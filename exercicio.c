#include <stdio.h>
int main(void){

    int bois_atuais = 10;
    int perda_boi = 4;
    int ganho_boi = 3;
    int bois_desejados;
    int ano = 0;

    printf("Digite a quantidade de bois desejados: \n");
    scanf("%d", &bois_desejados);

    while(bois_atuais<bois_desejados){
        bois_atuais= bois_atuais - perda_boi + ganho_boi;
        ano ++; 
    }

    printf("Levará %d anos para conseguir %d bois.", ano, bois_desejados);
    
    return 0;

}