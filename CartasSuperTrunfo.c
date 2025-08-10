#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários 

int main() {
printf("Desafio Cartas Super Trunfo\n");
printf("Carta1:\n");

char Estado = 'b';
char codigo [20] = "b01";
char nomedacidade [20] = "Salvador";
int populacao = 2568900;
float area = 150.75;
float pib = 6290000000.0f;
int numerodepontosturisticos = 100;

printf("Digite o Estado:"); 
scanf("%c", &Estado);
printf("O Estado é: %c\n", Estado);

printf("Digite o Codigo:");
scanf("%s", codigo);
printf("O Codigo é: %s\n", codigo);

printf("Digite o Nome da Cidade:");
scanf("%s", nomedacidade);
printf("O Nome da Cidade é: %s\n", nomedacidade);


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
