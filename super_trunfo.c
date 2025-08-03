#include <stdio.h>
    int main(){

        // Declarando as Variaveis

        char Estado1[50];
        char Codigo1[50];
        char Cidade1[50];
        int Populacao1;
        float area1;
        float PIB1;
        int Pontos_turisticos1;

        char* Estado2[50];
        char Codigo2 [50];
        char Cidade2[50];
        int Populacao2;
        float area2;
        float PIB2;
        int Pontos_turisticos2;

        //Primeira Carta

        printf("Digite seu Estado: \n");
        scanf("%s", Estado1);


        printf("Digite o Código da carta: \n");
        scanf("%s", Codigo1);


        printf("Digite o Nome da cidade: \n");
        scanf("%s", Cidade1);


        printf("Digite a População do estado: \n");
        scanf("%d", &Populacao1);
        

        printf("Digite a Área em km² do estado: \n");
        scanf("%f", &area1);


        printf("Digite o PIB do estado: \n");
        scanf("%f", &PIB1);


        printf("Digite a quantidade de pontos turisticos: \n");
        scanf("%d", &Pontos_turisticos1);


        printf("Estado: %s \n", Estado1);

        printf("Código De Carta: %s \n", Codigo1);

        printf("Nome da Cidade: %s \n", Cidade1);

        printf("População: %d \n", Populacao1);

        printf("Área em km²: %.2f \n", area1);

        printf("PIB: %.2f \n", PIB1);

        printf("Quantidade de pontos turisticos: %d \n", Pontos_turisticos1);


        //Segunda Carta


        printf("Digite seu Estado: \n");
        scanf("%s", Estado2);


        printf("Digite o Código da carta: \n");
        scanf("%s", Codigo2);


        printf("Digite o Nome da cidade: \n");
        scanf("%s", Cidade2);


        printf("Digite a População do estado: \n");
        scanf("%d", &Populacao2);
        

        printf("Digite a Área em km² do estado: \n");
        scanf("%f", &area2);


        printf("Digite o PIB do estado: \n");
        scanf("%f", &PIB2);


        printf("Digite a quantidade de pontos turisticos: \n");
        scanf("%d", &Pontos_turisticos2);


        printf("Estado: %s \n", Estado2);

        printf("Código De Carta: %s \n", Codigo2);

        printf("Nome da Cidade: %s \n", Cidade2);

        printf("População: %d \n", Populacao2);

        printf("Área em km²: %.2f \n", area2);

        printf("PIB: %.2f \n", PIB2);

        printf("Quantidade de pontos turisticos: %d \n", Pontos_turisticos2);
        
    }