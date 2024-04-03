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
    printf("  | 1 | 5 | 7 | 8 | 2 | 2 | 7 | 8 | 2 | 5 | (7) | 8 | 2 | 1 | 5 | 2 | 7 | 8 | 2 | 1 | 1 | 2 | 7 | 8 | 2 |");

    sleep(1);
    printf("\n\n A posição 10 (número 7) indica o início, a partir da qual você deslocará o limite.\n A partir da primeira movimentação, serão contados todos os números até a senha/combinação correta.");

    sleep(1);
    printf("\n\n Vamos começar!\n\n");
}

void safeBarShowcase() {
    printf("\n | 1 | 5 | 7 | 8 | 2 | 2 | 7 | 8 | 2 | 5 | 7 | 8 | 2 | 1 | 5 | 2 | 7 | 8 | 2 | 1 | 1 | 2 | 7 | 8 | 2 |");
}

void combinationAnalysis() {
    sleep(1);

    printf("\n Analisando combinação...");

    sleep(1);
    printf("\n\n .");

    sleep(1);
    printf("    .");

    sleep(1);
    printf("    .");

    sleep(1);
}

void successfulOpening() {
    printf("\n Muito bem! Parece que você me conhece bem...");
    printf("\n A combinação que você encontrou ao final das movimentações satisfaz minha fechadura!");

    sleep(1);
    printf("\n\n Já que, agora, estou aberto, você pode pegar seus pertences :)\n\n");
}

void unsuccessfulOpening() {
    printf("\n Infelizmente suas tentativa de abertura do cofre se esgotaram!");
    printf("\n Me parece que este cofre não te pertence, por esse motivo, não será possível lhe entregar seus pertences :(\n\n");
}

void exit(int status);

int main() {
    setlocale(LC_ALL, "portuguese"); // Setting the project language to "portuguese" with the <locale.h> library

    int safe_bar[length] = {1, 5, 7, 8, 2, 2, 7, 8, 2, 5, 7, 8, 2, 1, 5, 2, 7, 8, 2, 1, 1, 2, 7, 8, 2}; // Creating the vector ("safe_bar") and including its values
    int trys = 0, i, movements, initial_position = 10, position_to = 0, password;
    // int movements; // Incluir uma forma de perguntar ao usuário quantos movimentos/deslocamentos ele deseja realizar (no máximo 4)

    introMessage();

    sleep(1);
    system("pause");
    system("cls");

    do {
        do {
            printf("\n Primeiramente, informe quantos movimentos você deseja realizar (no máximo 4 movimentos): ");
            scanf("%d", &movements);

            if(movements <= 0) {
                printf("\n Não é possível abrir o cofre sem realizar nenhum movimento!\n");
            } else if(movements > 4) {
                printf("\n É impossível realizar mais que 4 movimentos! Insira um número válido...\n");
            }
        } while((movements <= 0) || (movements > 4));

        printf("\n Ótimo! Agora com o número de movimentos a serem realizadas definido, podemos continuar para a abertura do cofre.\n\n");

        sleep(1);
        system("pause");
        system("cls");

        sleep(1);

        safeBarShowcase();
        printf("\n\n Tudo pronto! Agora será necessário informar as posições desejadas para o deslocamento do limite.\n");

        sleep(1);

        for(i = 0; i < movements; i++) {
            printf("\n Informe o limite para o \"%dº\" deslocamento: ", i+1);
            scanf("%d", &position_to);

            if(position_to < 0) {
                printf("\n O valor do limite informado foi negativo e, por esse motivo, a abertura do cofre foi finalizada.\n");
                exit(0);
            }
        }

        printf("\n Posição inicial: %d", initial_position);
        printf("\n Posição limite: %d\n\n", position_to);

        printf("\n Senha teste: ");
        scanf("%d", &password);

        if(password == 510376) {
            combinationAnalysis();

            system("cls");

            successfulOpening();

            exit(0);
            // break;
        } else {
            trys++;

            combinationAnalysis();

            printf("\n Hmmm... me parece que a senha inserida após os deslizamentos está incorreta!");
            printf("\n Ainda lhe restam %d tentativa(s) até o fechamento completo do cofre.\n\n", 3-trys);

            sleep(3);
            system("pause");
            system("cls");
        }
    } while(trys < 3);

    unsuccessfulOpening();

    sleep(1);

    system("pause");
    return 0;
}
