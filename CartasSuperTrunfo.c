#include <stdio.h>

    int main (){
        
         // Declaração das variáveis - CARTA 01
        int populacao, pontosturisticos;
        char estado;
        char codigo[5];
        char cidade[26];
        float area;
        float pib;
        float densidadepopulacional;
        float pibpercapita;
        
        // Entrada das informações fornecidas pelo usuário CARTA 1
        printf("CARTA 1\n");
        printf("Digite o nome do estado: \n");
        scanf("%c", &estado);
        
        printf("Digite o código da carta: \n");
        scanf("%s", codigo);
        
        printf("Digite o nome da cidade: \n");
        scanf("%s", cidade);
        
        printf("Digite a População: \n");
        scanf("%d", &populacao);
        
        printf("Digite o Número de Pontos Turísticos: \n");
        scanf("%d", &pontosturisticos);
        
        printf("Digite a área: \n");
        scanf("%f", &area);
        
        printf("Digite o PIB: \n");
        scanf("%f", &pib);

        // Cálculo da Densidade Populacional e do PIB per Capita CARTA 1
        densidadepopulacional = populacao / area;
        pibpercapita = pib / populacao;

        // Saída das informações fornecidas pelo usuário CARTA 1
        printf(" - A CARTA 1- \n - Estado: %c\n - Código da Carta: %s\n - Nome da cidade: %s\n", estado, codigo, cidade);
        printf(" - População: %d\n - Número de Pontos Turísticos: %d\n - área: %.2f KM²\n - PIB: %.2f Bilhões de Reais\n", populacao, pontosturisticos, area, pib);
        printf(" - Densidade Populacional: %.2f hab/km²\n", densidadepopulacional);
        printf(" - PIB per Capita: %f REAIS\n", pibpercapita);
        
         // Declaração das variáveis - CARTA 02
        int populacao2, pontosturisticos2;
        char estado2;
        char codigo2[5];
        char cidade2[26];
        float area2;
        float pib2;
        float densidadepopulacional2;
        float pibpercapita2;
        
        // Entrada das informações fornecidas pelo usuário CARTA 2
        printf("\n - CARTA 2 - \n");
        printf("Estado: B \n");
            
        printf("Digite o código da carta: \n");
        scanf("%s", codigo2);
            
        printf("Digite o nome da cidade: \n");
        scanf("%s", cidade2);
            
        printf("Digite a População: \n");
        scanf("%d", &populacao2);
            
        printf("Digite o Número de Pontos Turísticos: \n");
        scanf("%d", &pontosturisticos2);
            
        printf("Digite a área: \n");
        scanf("%f", &area2);
            
        printf("Digite o PIB: \n");
        scanf("%f", &pib2);
    
        // Cálculo da Densidade Populacional e do PIB per Capita CARTA 2
        densidadepopulacional2 = populacao2 / area2;
        pibpercapita2 = pib2 / populacao2;
        
        // Saída das informações fornecidas pelo usuário DA CARTA 2
        printf(" --A CARTA 2-- \n - Estado: B%c\n - Código da Carta: %s\n - Nome da cidade: %s\n", estado2, codigo2, cidade2);
        printf(" - População: %d\n - Número de Pontos Turísticos: %d\n - área: %.2f KM²\n - PIB: %.2f Bilhões de Reais\n", populacao2, pontosturisticos2, area2, pib2);
        printf(" - Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
        printf(" - PIB per Capita: %f REAIS\n", pibpercapita2);
            
        return 0;
        }