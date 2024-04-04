#include <stdio.h> // Including/importing the <stdio.h> (Standard Input Output) library
#include <stdlib.h> // Including/importing the <stdlib.h> (Standard System) library

#include <unistd.h> // Including/importing the <unistd.h> library - using "sleep() in code"

#include <locale.h> // Including/importing the <locale.h> (Language/Localization) library

#define length 25 // Defining the maximum length of the vector ("safe_bar") to 25 positions (0 - 24)

void introMessage() {
    printf("\n Ol�! Eu sou um cofre.");
    printf("\n Talvez eu seja seu cofre...");

    sleep(1);
    printf("\n\n Acho que para descobrir se eu te perten�o, voc� precisa acertar minha senha/combina��o, para que, assim, eu possa abrir e entreg�-lo seus pertences :)");

    sleep(2);
    printf("\n\n Funciona assim: eu possuo uma barra de 25 posi��es (iniciando na posi��o 10) que dever� ser movimentada at� 4 vezes.\n Cada vez que um n�mero aparece, � adicionado 1 ao valor de contagem e a contagem geral, por sua vez, ser� a senha.");

    printf("\n\n Essa � a barra:");
    printf(" | 1 | 5 | 7 | 8 | 2 | 2 | 7 | 8 | 2 | 5 | (7) | 8 | 2 | 1 | 5 | 2 | 7 | 8 | 2 | 1 | 1 | 2 | 7 | 8 | 2 |");

    printf("\n\n A posi��o 10 (n�mero 7) indica o in�cio, a partir da qual voc� deslocar� o limite.\n A partir da primeira movimenta��o, ser�o contados todos os n�meros at� a senha/combina��o correta.");

    printf("\n\n Vamos come�ar!\n");
}

void safeBarShowcase() {
    printf("\n | 1 | 5 | 7 | 8 | 2 | 2 | 7 | 8 | 2 | 5 | 7 | 8 | 2 | 1 | 5 | 2 | 7 | 8 | 2 | 1 | 1 | 2 | 7 | 8 | 2 |");
}

void combinationAnalysis() {
    sleep(1);

    printf("\n Analisando combina��o...");

    sleep(1);
    printf("\n\n .");

    sleep(1);
    printf("    .");

    sleep(1);
    printf("    .");

    sleep(1);
}

void successfulOpening() {
    printf("\n Muito bem! Parece que voc� me conhece bem...");
    printf("\n A combina��o que voc� encontrou ao final das movimenta��es satisfaz minha fechadura!");

    sleep(1);
    printf("\n\n J� que, agora, estou aberto, voc� pode pegar seus pertences :)\n");
}

void unsuccessfulOpening() {
    printf("\n Infelizmente suas tentativa de abertura do cofre se esgotaram!");
    printf("\n Me parece que este cofre n�o te pertence, por esse motivo, n�o ser� poss�vel lhe entregar seus pertences :(\n\n");
}

void exit(int status);

int main() {
    setlocale(LC_ALL, "portuguese"); // Setting the project language to "portuguese" with the <locale.h> library

    int safe_bar[length] = {1, 5, 7, 8, 2, 2, 7, 8, 2, 5, 7, 8, 2, 1, 5, 2, 7, 8, 2, 1, 1, 2, 7, 8, 2}; // Creating the vector ("safe_bar") and including its values (1, 2, 5, 7, 8)
    int trys = 0, k, i, movements, initial_position = 10, position_to;
    int C1 = 0, C2 = 0, C5 = 0, C7 = 0, C8 = 0;
    // int initial_position = 10, position_to = 0, password;
    // int movements; // Incluir uma forma de perguntar ao usu�rio quantos movimentos/deslocamentos ele deseja realizar (no m�ximo 4)

    introMessage();

    sleep(1);
    printf("\n Pressione qualquer tecla para continuar (...)");
    getchar();
    system("cls");

    do {
        C1 = 0;
        C2 = 0;
        C5 = 0;
        C7 = 0;
        C8 = 0;

        do {
            sleep(1);

            // printf("\n Primeiramente, informe quantos movimentos voc� deseja realizar (no m�ximo 4 movimentos): ");
            printf("\n Primeiramente, preciso saber quantos deslizamentos/movimentos voc� deseja realizar.");
            printf("\n Para isso, me informe, a seguir, a quantidade de deslizamentos desejada por voc� para a processo de abertura.");
            printf("\n\n � Obs: � importante ressaltar que podem ser realizados, ao todo, no m�ximo 4 deslizamentos.");

            sleep(1);
            printf("\n\n Informe a quantidade de deslizamentos a serem realizados: ");
            scanf("%d", &movements);

            if(movements <= 0) {
                printf("\n N�o � poss�vel abrir o cofre sem realizar nenhum movimento!\n");
            } else if(movements > 4) {
                printf("\n � imposs�vel realizar mais que 4 movimentos! Insira um n�mero v�lido...\n");
            }
        } while((movements <= 0) || (movements > 4));

        printf("\n �timo! Agora com o n�mero de movimentos a serem realizadas definido, podemos continuar para a abertura do cofre.\n\n");

        sleep(3);
        system("pause");
        system("cls");

        sleep(1);

        safeBarShowcase();

        printf("\n\n Tudo pronto! Agora, com a informa��o do n�mero de deslizamentos para o processo de abertura, podemos prosseguir.");
        printf("\n Nessa etapa, ser� necess�rio informar as posi��es desejadas para o deslocamento do limite.\n");

        /*
        for(i = 0; i < movements; i++) {
            printf("\n Informe o limite para o \"%d�\" deslocamento: ", i+1);
            scanf("%d", &position_to);

            if(position_to < 0) {
                printf("\n O valor do limite informado foi negativo e, por esse motivo, a abertura do cofre foi finalizada.\n");
                exit(0);
            }
        }

        printf("\n Posi��o inicial: %d", initial_position);
        printf("\n Posi��o limite: %d\n\n", position_to);

        printf("\n Senha teste: ");
        scanf("%d", &password);
        */

        for(k = 0; k < movements; k++) {
            printf("\n � Informe o limite para o \"%d�\" deslocamento: ", k+1);
            scanf("%d", &position_to);

            if(position_to < 0) {
                printf("\n Um n�mero negativo foi informado e, consequentemente, o deslocamento foi encerrado!\n");

                exit(0);
            }

            if(position_to > initial_position) {
                for(i = initial_position; i <= position_to; i++) {
                    // initial_position = position_to + 1;

                    // printf("\n safe_bar[%d] = %d", i, safe_bar[i]);

                    if(safe_bar[i] == 1) {
                        C1++;
                    } else if(safe_bar[i] == 2) {
                        C2++;
                    } else if(safe_bar[i] == 5) {
                        C5++;
                    } else if(safe_bar[i] == 7) {
                        C7++;
                    } else if(safe_bar[i] == 8) {
                        C8++;
                    }
                }

                initial_position = position_to + 1;
            } else {
                for(i = initial_position; i >= position_to; i--) {
                    // initial_position = position_to + 1;

                    // printf("\n safe_bar[%d] = %d", i, safe_bar[i]);

                    if(safe_bar[i] == 1) {
                        C1++;
                    } else if(safe_bar[i] == 2) {
                        C2++;
                    } else if(safe_bar[i] == 5) {
                        C5++;
                    } else if(safe_bar[i] == 7) {
                        C7++;
                    } else if(safe_bar[i] == 8) {
                        C8++;
                    }
                }

                initial_position = position_to + 1;
            }
        }

        sleep(1);
        printf("\n Perfeito! Agora, ao t�rmino de todos os movimentos estipulados anteriormente, j� temos a combina��o formada.");

        sleep(3);
        system("cls");

        printf("\n Sua combina��o final foi: | %d | %d | %d | %d | %d |\n\n", C1, C2, C5, C7, C8);

        // C1 = 5 | C2 = 12 | C5 = 3 | C7 = 7 | C8 = 6

        // if(password == 512376) {
        if((C1 == 5) && (C2 == 12) && (C5 == 3) && (C7 == 7) && (C8 == 6)) {
            combinationAnalysis();

            system("cls");

            successfulOpening();

            exit(0);
        } else {
            trys++;

            combinationAnalysis();

            printf("\n\n Hmmm... me parece que a senha inserida ap�s os deslizamentos est� incorreta!");
            printf("\n Ainda lhe restam %d tentativa(s) at� o fechamento completo do cofre.\n\n", 3-trys);

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
