#include <stdio.h>
    int main(){

        // Declarando as Variaveis

        char Estado1[50];
        char Código1[50];
        char Cidade1[50];
        int População1;
        float Área1;
        float PIB1;
        int Pontos_turisticos1;

        int Estado2;
        char Código2[50];
        char Cidade2[50];
        int População2;
        float Área2;
        float PIB2;
        int Pontos_turisticos2;

        //Primeira Carta

        printf("Digite seu Estado: \n");
        scanf("%s", &Estado1);


        printf("Digite o Código da carta: \n");
        scanf("%s", &Código1);


        printf("Digite o Nome da cidade: \n");
        scanf("%s", &Cidade1);


        printf("Digite a População do estado: \n");
        scanf("%d", &População1);
        

        printf("Digite a Área em km² do estado: \n");
        scanf("%f", &Área1);


        printf("Digite o PIB do estado: \n");
        scanf("%f", &PIB1);


        printf("Digite a quantidade de pontos turisticos: \n");
        scanf("%d", &Pontos_turisticos1);


        printf("Estado: %s \n", Estado1);

        printf("Código De Carta: %s \n", Código1);

        printf("Nome da Cidade: %s \n", Cidade1);

        printf("População: %d \n", População1);

        printf("Área em km²: %f \n", Área1);

        printf("PIB: %f \n", PIB1);

        printf("Quantidade de pontos turisticos: %d \n", Pontos_turisticos1);









    }