#include <stdio.h>

int main(){
    int pontos, populacao;
    char codigo, cidade ,estado;
    float area, pib;

    printf("Digiteo estado: \n");
    scanf("%s", &estado);

    printf("Digite o código: \n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Digite o numero da população: \n");
    scanf("%d", &populacao);

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%2f", &pib);

    printf("Digite o numero de pontos turísticos: \n");
    scanf("%d", &pontos);

    printf("Nome do estado: %s - Código: %s - Cidade: %S - População: %d", estado, codigo, cidade, populacao);
    printf("Área: %f - PIB: %2f - Número de pontos turísticos: %d", area, pib, pontos);

return 0;

}