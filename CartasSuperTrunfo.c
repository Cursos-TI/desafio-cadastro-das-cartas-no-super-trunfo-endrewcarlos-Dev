#include <stdio.h>

    int main (){
        
         // Declaração das variáveis - CARTA 01
        int pontosturisticos;
        int resultado, resultado2;
        unsigned long int populacao;
        char estado;
        char codigo[5];
        char cidade[26];
        float area;
        float pib;
        float densidadepopulacional;
        float pibpercapita;
        float Super_Poder;

        
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
        pibpercapita =  pib / populacao;
        Super_Poder = (1/densidadepopulacional) + pib + pibpercapita + pontosturisticos + populacao + area;
        
        
        // Saída das informações fornecidas pelo usuário CARTA 1
        printf(" - A CARTA 1- \n - Estado: %c\n - Código da Carta: %s\n - Nome da cidade: %s\n", estado, codigo, cidade);
        printf(" - População: %.2d\n - Número de Pontos Turísticos: %d\n - área: %.2f KM²\n - PIB: %.2f Bilhões de Reais\n", populacao, pontosturisticos, area, pib);
        printf(" - Densidade Populacional: %.2f hab/km²\n", densidadepopulacional);
        printf(" - PIB per Capita: %f REAIS\n", pibpercapita);
        
        // Declaração das variáveis - CARTA 02
        int pontosturisticos2, populacao2;
        char estado2;
        char codigo2[5];
        char cidade2[26];
        float area2;
        float pib2;
        float densidadepopulacional2;
        float pibpercapita2;
        float Super_Poder2;
        
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
    
        // Cálculo do Super Poder, Densidade Populacional e do PIB per Capita CARTA 2
        densidadepopulacional2 = populacao2 / area2;
        pibpercapita2 = pib2 / populacao2;
        Super_Poder2 =  (1/densidadepopulacional2) + pib2 + pibpercapita2 + pontosturisticos2 + populacao2 + area2;
        
        
        // Saída das informações fornecidas pelo usuário DA CARTA 2
        printf(" --A CARTA 2-- \n - Estado: B%c\n - Código da Carta: %s\n - Nome da cidade: %s\n", estado2, codigo2, cidade2);
        printf(" - População: %.2d\n - Número de Pontos Turísticos: %d\n - área: %.2f KM²\n - PIB: %.2f Bilhões de Reais\n", populacao2, pontosturisticos2, area2, pib2);
        printf(" - Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
        printf(" - PIB per Capita: %f REAIS\n", pibpercapita2);
            
        // Cálculo de quem é o maior ou menor entre a Carta1 e Carta2
        resultado = pib > pib2;
        resultado2 = Super_Poder > Super_Poder2;
        resultado = pibpercapita > pibpercapita2;
        resultado2 = pontosturisticos > pontosturisticos2;
        resultado = populacao > populacao2;
        resultado2 = area > area2;
        resultado = densidadepopulacional < densidadepopulacional2;

        //O Resultado da Comparação das Cartas1 e Carta2
        printf(" o pib da Carta1 venceu o pib da Carta2? %d\n",pib > pib2);
        printf(" o pib per capita da Carta1 venceu o pib per capita da Carta2? %d\n",pibpercapita > pibpercapita2);
        printf(" os pontos turisticos da Carta1 venceu os pontos turisticos da Carta2? %d\n",pontosturisticos > pontosturisticos2);
        printf(" a população da Carta1 venceu a população da Carta2? %d\n",populacao > populacao2);
        printf(" a área da Carta1 venceu a área da Carta2? %d\n",area > area2);  
        printf(" densidade populacional da carta1 venceu densidade populacional da carta2? %d\n",densidadepopulacional > densidadepopulacional2);      
        printf(" o super poder da Carta1 venceu o super poder da Carta2? %d\n",Super_Poder > Super_Poder2);
        
        return 0;
        }