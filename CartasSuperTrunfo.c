#include <stdio.h>

int main() {
    char Cidade[50];
    double Populacao;
    double Area;     
    double Pib; 
    int PontosTuristicos;

    printf("Digite a Cidade:\n");
    scanf(" %[^\n]s", Cidade); 

    printf("Digite a população (em milhões):\n");
    scanf("%lf", &Populacao);  

    printf("Digite a área (em km²):\n");
    scanf("%lf", &Area);  

    printf("Digite o PIB (em trilhões de USD):\n");
    scanf("%lf", &Pib);  
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &PontosTuristicos);

    
    printf("\n--- Informações da Cidade ---\n");
    printf("Cidade: %s\n", Cidade);
    printf("População: %.2f milhões\n", Populacao);
    printf("Área: %.2f km²\n", Area);
    printf("PIB: %.2f trilhões de USD\n", Pib);
    printf("Pontos Turísticos: %d\n", PontosTuristicos);
    
    return 0;
}