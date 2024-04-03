#include <stdio.h> // Including/importing the <stdio.h> (Standard Input Output) library
#include <stdlib.h> // Including/importing the <stdlib.h> (Standard System) library

#include <unistd.h> // Including/importing the <unistd.h> library - using "sleep() in code"

#include <locale.h> // Including/importing the <locale.h> (Language/Localization) library

#define length 25 // Defining the maximum length of the vector ("safe_bar") to 25 positions (0 - 24)

void introMessage() {
    printf("\n Olá! Eu sou um cofre.");
    printf("\n Talvez eu seja seu cofre...");

    sleep(1);
    printf("\n\n Acho que para descobrir se eu te pertenço, você precisa acertar minha senha/combinação, para que, assim, eu possa abrir e entregá-lo seus petences :)");

    sleep(1);
    printf("\n\n Funciona assim, eu possuo uma barra de 25 posições (iniciando na posição 10) que deverá ser movimentada até 4 vezes.\n Cada vez que um número aparece, é adicionado 1 ao valor de contagem e a contagem geral, por sua vez, será a senha.");

    sleep(1);
    printf("\n\n Essa é a barra:");
    printf("| 1 | 5 | 7 | 8 | 2 | 2 | 7 | 8 | 2 | 5 | (7) | 8 | 2 | 1 | 5 | 2 | 7 | 8 | 2 | 1 | 1 | 2 | 7 | 8 | 2 |");

    sleep(1);
    printf("\n\n A posição 10 (número 7) indica o início, a partir da qual você deslocará o limite.\n A partir da primeira movimentação, serão contados todos os números até a senha/combinação correta.");

    sleep(1);
    printf("\n\n Vamos começar!\n\n");
}

int main() {
    setlocale(LC_ALL, "portuguese"); // Setting the project language to "portuguese" with the <locale.h> library

    int safe_bar[length] = {1, 5, 7, 8, 2, 2, 7, 8, 2, 5, 7, 8, 2, 1, 5, 2, 7, 8 2, 1, 1, 2, 7, 8, 2}; // Creating the vector ("safe_bar") and including its values

    int movements = 0, position_to;
    // int movements; // Incluir uma forma de perguntar ao usuário quantos movimentos/deslocamentos ele deseja realizar (no máximo 4)

    introMessage();

    sleep(3);
    system("pause");
    system("cls");


    /*
    do {
        printf("\n\n Primeiramente, informe quantos movimentos você deseja realizar (no máximo 4 movimentações): ");
        scanf("%d", &movements);

        if(movements <= 0) {
            printf("\n Não é possível abrir o cofre sem realizar nenhuma movimentação!");
        } else if(movements > 4) {
            printf("\n É impossível realizar mais que 4 movimentações! Insira um número válido...");
        }
    } while((movements <= 0) || (movements > 4));

    printf("\n Ótimo! Agora com o número de movimentações a serem realizadas definido, podemos continuar para a \"parte prática\".");

    sleep(2);
    system("cls");
    */

    sleep(2);

    printf("\n Tudo pronto! Agora será necessário informar as posições desejadas para o deslocamento do limite.");

    sleep(1);

    for(movements = 0; movements < 4; movements++) {
        printf("\n\n Informe o limite para o \"%dº\" deslocamento: ", movements+1);
        scanf("%d", &position_to);
    }

    system("pause");
    return 0;
}
