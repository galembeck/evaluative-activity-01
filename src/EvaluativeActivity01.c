#include <stdio.h> // Including/importing the <stdio.h> (Standard Input Output) library
#include <stdlib.h> // Including/importing the <stdlib.h> (Standard System) library

#include <unistd.h> // Including/importing the <unistd.h> library - using "sleep() in code"

#include <locale.h> // Including/importing the <locale.h> (Language/Localization) library

#define length 25 // Defining the maximum length of the vector ("safe_bar") to 25 positions (0 - 24)

void introMessage() { // Creating a "introMessage()" function to show the introduction message
    printf("\n Olá! Eu sou um cofre virtual...");
    printf("\n Eu represento uma simulação digital de um mecanismo de segurança.");

    sleep(1);
    printf("\n\n Acho que para descobrir se eu te pertenço, será necessário acertar a senha/combinação, para que, assim, eu possa abrir\n e entregá-lo seus pertences :)");

    sleep(2);
    printf("\n\n Aqui está o funcionamento: possuo uma barra de 25 posições, começando na posição 10, que pode ser movida até 4 vezes.");
    printf("\n Durante cada movimento, os números entre os novos limites estabelecidos serão contados.");

    printf("\n\n Essa é a barra:");
    printf(" | 1 | 5 | 7 | 8 | 2 | 2 | 7 | 8 | 2 | 5 | (7) | 8 | 2 | 1 | 5 | 2 | 7 | 8 | 2 | 1 | 1 | 2 | 7 | 8 | 2 |");

    printf("\n\n O número 7, na posição 10, marca o início dos movimentos.\n A partir deste ponto, você moverá os limites para revelar a combinação correta.");

    printf("\n\n Agora, com todas as instruções, podemos começar!\n");
}

void safeBarShowcase() { // Creating a "safeBarShowcase()" to show the bar when necessary
    printf("\n | 1 | 5 | 7 | 8 | 2 | 2 | 7 | 8 | 2 | 5 | 7 | 8 | 2 | 1 | 5 | 2 | 7 | 8 | 2 | 1 | 1 | 2 | 7 | 8 | 2 |");
}

void combinationAnalysis() { // Creating a "combinationAnalysis()" function to show a loading message
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

void successfulOpening() { // Creating a "successfulOpening()" function to show a success message when the safe is open
    printf("\n Muito bem! Parece que você me conhece bem e conseguiu abrir o cofre com sucesso...");
    printf("\n A combinação que você descobriu/encontrou ao final dos deslizamentos é a chave correta para me desbloquear!");

    sleep(1);
    printf("\n\n Agora que me encontro aberto, você pode acessar seus pertences com segurança :)\n");
    printf("\n Por favor, lembre-se de fechar o cofre corretamente após a utilização para garantir sua segurança.");
    printf("\n\n Obrigado por utilizar meu serviço! Tenha um ótimo dia.\n\n");
}

void unsuccessfulOpening() { // Creating a "unccessfulOpening()" function to show a unsuccess message when the safe keep closed
    printf("\n Que pena! Suas tentativa de abertura do cofre se esgotaram :(");
    printf("\n Parece que você não conseguiu encontrar a combinação correta para me abrir...");

    printf("\n\n Infelizmente, não poderei lhe entregar seus pertences neste momento.");

    printf("\n\n Agradeço suas tentativas e lamentamo por qualquer incoveniente causado. Tenha um ótimo dia.\n");
}

int main() { // Creating the "main" structure of the code/project
    setlocale(LC_ALL, "portuguese"); // Setting the project language to "portuguese" with the <locale.h> library

    int safe_bar[length] = {1, 5, 7, 8, 2, 2, 7, 8, 2, 5, 7, 8, 2, 1, 5, 2, 7, 8, 2, 1, 1, 2, 7, 8, 2}; // Creating the vector ("safe_bar") and including its values (1, 2, 5, 7, 8)
    int trys = 0, k, i, movements, return_option, initial_position = 10, position_to; // Creating new variables to be used during the development of the code/project
    int C1, C2, C5, C7, C8; // Creating five variables that are going to be used as counters
    // int initial_position = 10, position_to = 0, password;
    // int movements; // Incluir uma forma de perguntar ao usuário quantos movimentos/deslocamentos ele deseja realizar (no máximo 4)

    introMessage(); // Calling function "introMessage()" to show the introduction message in the beginning

    sleep(1);
    printf("\n Pressione qualquer tecla para continuar (...)");
    getchar();
    system("cls");

    do {
        C1 = 0;
        C2 = 0;
        C5 = 0;
        C7 = 1;
        C8 = 0;

        initial_position = 10;

        sleep(1);

        printf("\n Primeiramente, preciso saber quantos deslizamentos/movimentos você deseja realizar.");
        printf("\n Para isso, me informe, a seguir, a quantidade de deslizamentos desejada por você para o processo de abertura.");
        printf("\n\n Observação: você deve realizar pelo menos 1 deslizamento e, no máximo, 4 deslizamentos totais.\n");

        sleep(1);

        do {
            printf("\n º Informe a quantidade de deslizamentos a serem realizados: ");
            scanf("%d", &movements);

            if(movements <= 0) {
                printf("\n Não é possível abrir o cofre sem realizar nenhum movimento!\n");
            } else if(movements > 4) {
                printf("\n Não é possível realizar mais que 4 movimentos! Insira um número válido...\n");
            }
        } while((movements <= 0) || (movements > 4));

        printf("\n Ótimo! Agora com o número de movimentos a serem realizadas definido, podemos continuar para a abertura do cofre.\n\n");

        sleep(2);
        system("pause");
        system("cls");

        sleep(1);

        safeBarShowcase();

        printf("\n\n Tudo pronto! Agora, com a informação do número de deslizamentos para o processo de abertura, podemos prosseguir.");
        printf("\n Nessa etapa, será necessário informar as posições desejadas para o deslocamento do limite.\n");

        /*
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
        */

        for(k = 0; k < movements; k++) {
            printf("\n º Informe o limite (posição) para o \"%dº\" deslocamento: ", k+1);
            scanf("%d", &position_to);

            if(position_to < 0) {
                printf("\n Um número negativo foi informado e, consequentemente, o deslocamento foi encerrado!\n");

                sleep(1);

                exit(0);

                // TODO: Adicionar um "switch" para possibilitar que o usuário retorne ao menu principal ou encerre o processo de abertura ao informar um número negativo.

                /*
                sleep(3);

                system("cls");

                printf("\n Ainda é possível retornar ao painel inicial de abertura do cofre...");
                printf("\n\n Para isso, abaixo há 2 opções disponíveis, dentre as quais você deve selecionar entre a 1º ou a 2º opção.");
                printf("\n º Digite \"1\" caso você queira retornar ao painel inicial.");
                printf("\n º Digite \"2\" caso você queira encerrar o processo de abertura do cofre.");

                printf("\n\n Opção: ");
                scanf("%d", &return_option);

                switch(return_option) {
                    case 1:
                        printf("\n Como a 1º opção foi escolhida, você será, a seguir, redirecionado ao painel inicial de abertura do cofre.");

                        sleep(1);
                        printf("\n\n 3,");

                        sleep(1);
                        printf("    2,");

                        sleep(1);

                        printf("    1");
                        sleep(1);

                        system("cls");
                        break;

                    case 2:
                        printf("\n Como a 2º opção foi escolhida, o processo de abertura do cofre será encerrado!");

                        sleep(1);
                        printf("\n\n 3,");

                        sleep(1);
                        printf("    2,");

                        sleep(1);
                        printf("    1\n");

                        sleep(1);

                        exit(0);
                    default:
                        printf("\n Nenhuma opção válida encontrada! Selecione entre as opções listadas acima.");
                }
                break;
                */
            }

            if (position_to > initial_position) {
                for (i = initial_position + 1; i <= position_to; i++) {
                    if (safe_bar[i] == 1) {
                        C1++;
                    } else if (safe_bar[i] == 2) {
                        C2++;
                    } else if (safe_bar[i] == 5) {
                        C5++;
                    } else if (safe_bar[i] == 7) {
                        C7++;
                    } else if (safe_bar[i] == 8) {
                        C8++;
                    }
                }
                // printf("\nC1: %d, C2: %d, C5: %d, C7: %d, C8: %d", C1, C2, C5, C7, C8);
                initial_position = position_to;
            } else {
                for (i = initial_position - 1; i >= position_to; i--) {
                    if (safe_bar[i] == 1) {
                        C1++;
                    } else if (safe_bar[i] == 2) {
                        C2++;
                    } else if (safe_bar[i] == 5) {
                        C5++;
                    } else if (safe_bar[i] == 7) {
                        C7++;
                    } else if (safe_bar[i] == 8) {
                        C8++;
                    }
                }
                // printf("\nC1: %d, C2: %d, C5: %d, C7: %d, C8: %d", C1, C2, C5, C7, C8);
                initial_position = position_to;
            }
        }

        sleep(1);

        printf("\n Perfeito! Agora, ao término dos movimentos estipulados anteriormente, já temos a combinação formada.");

        sleep(3);
        system("cls");

        printf("\n Sua combinação final foi: | %d | %d | %d | %d | %d |\n\n", C1, C2, C5, C7, C8);

        // C1 = 5 | C2 = 11 | C5 = 3 | C7 = 7 | C8 = 6

        // if(password == 512376) {
        if((C1 == 5) && (C2 == 11) && (C5 == 3) && (C7 == 7) && (C8 == 6)) {
            combinationAnalysis();

            system("cls");

            successfulOpening();

            sleep(2);
            system("pause");

            sleep(1);
            exit(0);
        } else {
            trys++;

            combinationAnalysis();

            printf("\n\n Hmmm... me parece que a senha inserida ao término dos deslizamentos está incorreta!");
            printf("\n Ainda lhe restam %d tentativa(s) até o fechamento completo do cofre.\n\n", 3-trys);

            sleep(1);
            system("pause");
            system("cls");
        }
    } while(trys < 3);

    unsuccessfulOpening();

    sleep(1);

    // system("pause");
    return 0;
}
