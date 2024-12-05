#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_CAMPO 5
#define MAX_BARCO 4  // Número de barcos no total (4 para os dois jogadores)
#define BARCO1 1 // Nome do barco 1
#define BARCO2 2 // Nome do barco 2
#define BARCO3 3 // Nome do barco 3
#define BARCO4 4  // Nome do barco 4


//Função que posiciona os barcos de acordo com a pocição X e Y do campo
void posicionarBarcos(int nome_barco, int campo[TAMANHO_CAMPO][TAMANHO_CAMPO]){
    int x, y; //Variáveis que derteminaram a pocição do barco em relação ao campo
    // Verifica e solicita até que a posição seja válida
    while (1) { // Loop infinito para garantir repetição até inserir uma posição válida
    printf("Selecione a posicao X do barco: ");
    scanf("%d", &x);
    printf("Selecione a posicao Y do barco: ");
    scanf("%d", &y);

    // Verifica se a posição está dentro dos limites do campo
    if (x >= 0 && x <= TAMANHO_CAMPO && y >= 0 && y <= TAMANHO_CAMPO) {
        campo[x][y] = nome_barco; // Insere o barco no campo
        printf("Barco %d posicionado em (%d , %d).\n", nome_barco, x, y);
        printf("=================================================================\n");
        break; // Sai do loop quando a posição for válida
    } else {
        system("cls");
        printf("Posicao invalida! Tente novamente.\n");
    }
}

}

int main() {
    char jogador1[30], jogador2[30];  // Vetores para armazenar os nomes dos jogadores
    int campo_a[TAMANHO_CAMPO][TAMANHO_CAMPO];
    int campo_b[TAMANHO_CAMPO][TAMANHO_CAMPO];


    // Leitura dos nomes dos jogadores
    printf("Digite o nome do Jogador 1: ");
    scanf("%s", jogador1);  // Lê o nome do jogador 1

    printf("Digite o nome do Jogador 2: ");
    scanf("%s", jogador2);  // Lê o nome do jogador 2

    // Exibe os nomes informados
    printf("Jogador 1: %s\n", jogador1);
    printf("Jogador 2: %s\n", jogador2);

    // Criando os barcos para os dois jogadores (usando #define)
    int barcos[MAX_BARCO] = {BARCO1, BARCO2, BARCO3, BARCO4};  // Barcos compartilhados entre os jogadores

 
    printf("=================================================================\n");

    printf("Jogador %s posicione o barco com valor de 1 ponto:\n", jogador1);
    posicionarBarcos(BARCO1, campo_a);

    printf("Jogador %s posicione o barco com valor de 2 pontos:\n", jogador1);
    posicionarBarcos(BARCO2, campo_a);

    printf("Jogador %s posicione o barco com valor de 3 pontos:\n", jogador1);
    posicionarBarcos(BARCO3, campo_a);

    printf("Jogador %s posicione o barco com valor de 4 pontos:\n", jogador1);
    posicionarBarcos(BARCO4, campo_a);

    system("cls");
    printf("Vez do Jogador %s:\n", jogador2);

    printf("Jogador %s posicione o barco com valor de 1 ponto:\n", jogador2);
    posicionarBarcos(BARCO1, campo_b);

    printf("Jogador %s posicione o barco com valor de 2 pontos:\n", jogador2);
    posicionarBarcos(BARCO2, campo_b);

    printf("Jogador %s posicione o barco com valor de 3 pontos:\n", jogador2);
    posicionarBarcos(BARCO3, campo_b);

    printf("Jogador %s posicione o barco com valor de 4 pontos:\n", jogador2);
    posicionarBarcos(BARCO4, campo_b);

    
}