#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>

#include <locale.h>

#define length 25

void introMessage() {
    printf("\n Olá! Eu sou um cofre virtual...");
    printf("\n Eu represento uma simulação digital de um mecanismo de segurança.");

    sleep(1);
    printf("\n\n Acho que para descobrir se eu te pertenço, será necessário acertar a senha/combinação, para que, assim, eu possa abrir\n e entregá-lo seus pertences :)");

    sleep(2);
    printf("\n\n Aqui está o funcionamento: possuo uma barra de 25 posições, começando na posição 10, que pode ser movida até 4 vezes.");
    printf("\n Durante cada movimento, os números entre os novos limites estabelecidos serão contados.");

    printf("\n\n O número 7, na posição 10, marca o início dos movimentos.\n A partir deste ponto, você moverá os limites para revelar a combinação correta.");

    printf("\n\n Agora, com todas as instruções, podemos começar!\n\n");
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
    printf("\n Muito bem! Parece que você me conhece bem e conseguiu abrir o cofre com sucesso...");
    printf("\n A combinação que você descobriu/encontrou ao final dos deslizamentos é a chave correta para me desbloquear!");

    sleep(1);
    printf("\n\n Agora que me encontro aberto, você pode acessar seus pertences com segurança :)\n");
    printf("\n Por favor, lembre-se de fechar o cofre corretamente após a utilização para garantir sua segurança.");
    printf("\n\n Obrigado por utilizar meu serviço!\n");
}

void unsuccessfulOpening() {
    printf("\n Que pena! Suas tentativas de abertura do cofre se esgotaram :(");
    printf("\n Parece que você não conseguiu encontrar a combinação correta para me abrir...");

    printf("\n\n Infelizmente, não poderei lhe entregar seus pertences neste momento.");

    printf("\n\n Agradeço suas tentativas e lamento por qualquer incoveniente causado. Tenha um ótimo dia.\n");
}

int main() {
    setlocale(LC_ALL, "portuguese");

    int safe_bar[length] = {1, 5, 7, 8, 2, 2, 7, 8, 2, 5, 7, 8, 2, 1, 5, 2, 7, 8, 2, 1, 1, 2, 7, 8, 2};
    int trys = 0, k, i, movements, return_option, closure_option, initial_position, position_to;
    int C1, C2, C5, C7, C8;

    introMessage();

    sleep(1);
    system("pause");
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

        printf("\n Tudo pronto! Agora, com a informação do número de deslizamentos para o processo de abertura, podemos prosseguir.");
        printf("\n Nessa etapa, será necessário informar as posições desejadas para o deslocamento do limite.\n");

        int flag = 1;

        for(k = 0; (k < movements && flag); k++) {
            printf("\n º Informe o limite (posição) para o \"%dº\" deslocamento: ", k+1);
            scanf("%d", &position_to);

            if((position_to < 0) || (position_to > 24)) {
                printf("\n Um número negativo ou superior ao comprimento da barra foi informado e, consequentemente, o deslocamento foi encerrado!\n");

                sleep(3);

                system("cls");

                printf("\n Ainda é possível retornar ao painel inicial de abertura do cofre...");
                printf("\n\n Para isso, abaixo há 2 opções disponíveis, dentre as quais você deve selecionar entre a 1º ou a 2º opção.");
                printf("\n º Digite \"1\" caso você queira retornar ao painel de deslizamentos.");
                printf("\n º Digite \"2\" caso você queira encerrar o processo de abertura do cofre.");

                printf("\n\n Opção: ");
                scanf("%d", &return_option);

                switch(return_option) {
                    case 1:
                        printf("\n Como a 1º opção foi escolhida, você será, a seguir, redirecionado ao painel de deslizamentos.");

                        sleep(1);
                        printf("\n\n 3,");

                        sleep(1);
                        printf("    2,");

                        sleep(1);

                        printf("    1");
                        sleep(1);

                        system("cls");

                        flag = 0;

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
                initial_position = position_to;
            }
        }

        if(flag) {
            sleep(1);

            printf("\n Perfeito! Agora, ao término dos movimentos estipulados anteriormente, já temos a combinação formada.");

            sleep(3);
            system("cls");

            // C1 = 5 | C2 = 11 | C5 = 3 | C7 = 7 | C8 = 6

            if((C1 == 5) && (C2 == 11) && (C5 == 3) && (C7 == 7) && (C8 == 6)) {
                combinationAnalysis();

                system("cls");

                successfulOpening();

                printf("\n --------------------------------------/--------------------------------------\n\n");
                sleep(1);
                system("pause");
                system("cls");

                sleep(1);

                printf("\n --------------------------------------/--------------------------------------\n");

                printf("\n Agora, com o cofre aberto, é possível fechá-lo novamente ou encerrar o processo de abertura.");
                printf("\n Abaixo há 2 opções disponíveis, dentre as quais você deve selecionar entre a 1º ou a 2º opção.");
                printf("\n º Digite \"1\" caso você queira fechar o cofre e retornar ao painel inicial.");
                printf("\n º Digite \"2\" caso você queira fechar o cofre e encerrar o processo de abertura definitivamente.");

                printf("\n\n Opção: ");
                scanf("%d", &closure_option);

                printf("\n --------------------------------------/--------------------------------------\n");

                switch(closure_option) {
                    case 1:
                        printf("\n Fechando o cofre e redirecionando-lhe ao painel inicial de abertura do cofre...");

                        sleep(1);
                        printf("\n\n 3,");

                        sleep(1);
                        printf("    2,");

                        sleep(1);
                        printf("    1");

                        sleep(1);
                        system("cls");

                        trys = 0;

                        sleep(1);
                        introMessage();

                        sleep(1);
                        system("pause");
                        system("cls");

                        break;

                    case 2:
                        printf("\n Encerrando o processo de abertura do cofre de maneira definitiva...");

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
            } else {
                trys++;

                combinationAnalysis();

                printf("\n\n Sua combinação final foi: | %d | %d | %d | %d | %d |\n\n", C1, C2, C5, C7, C8);

                sleep(1);

                printf("\n\n Hmmm... me parece que a senha inserida ao término dos deslizamentos está incorreta!");
                printf("\n Ainda lhe restam %d tentativa(s) até o fechamento completo do cofre.\n\n", 3-trys);

                sleep(1);
                system("pause");
                system("cls");
            }
        }
    } while(trys < 3);

    unsuccessfulOpening();

    sleep(1);

    return 0;
}
