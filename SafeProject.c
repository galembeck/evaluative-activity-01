#include <stdio.h> // Including/importing the <stdio.h> (Standard Input Output) library
#include <stdlib.h> // Including/importing the <stdlib.h> (Standard System) library

#include <unistd.h> // Including/importing the <unistd.h> library - using "sleep() in code"

#include <locale.h> // Including/importing the <locale.h> (Language/Localization) library

#define length 25 // Defining the maximum length of the vector ("safe_bar") to 25 positions (0 - 24)

void introMessage() {
    printf("\n Ol�! Eu sou um cofre.");
    printf("\n Talvez eu seja seu cofre...");

    sleep(1);
    printf("\n\n Acho que para descobrir se eu te perten�o, voc� precisa acertar minha senha/combina��o, para que, assim, eu possa abrir e entreg�-lo seus petences :)");

    sleep(1);
    printf("\n\n Funciona assim, eu possuo uma barra de 25 posi��es (iniciando na posi��o 10) que dever� ser movimentada at� 4 vezes.\n Cada vez que um n�mero aparece, � adicionado 1 ao valor de contagem e a contagem geral, por sua vez, ser� a senha.");

    sleep(1);
    printf("\n\n Essa � a barra:");
    printf("| 1 | 5 | 7 | 8 | 2 | 2 | 7 | 8 | 2 | 5 | (7) | 8 | 2 | 1 | 5 | 2 | 7 | 8 | 2 | 1 | 1 | 2 | 7 | 8 | 2 |");

    sleep(1);
    printf("\n\n A posi��o 10 (n�mero 7) indica o in�cio, a partir da qual voc� deslocar� o limite.\n A partir da primeira movimenta��o, ser�o contados todos os n�meros at� a senha/combina��o correta.");

    sleep(1);
    printf("\n\n Vamos come�ar!\n\n");
}

int main() {
    setlocale(LC_ALL, "portuguese"); // Setting the project language to "portuguese" with the <locale.h> library

    int safe_bar[length] = {1, 5, 7, 8, 2, 2, 7, 8, 2, 5, 7, 8, 2, 1, 5, 2, 7, 8 2, 1, 1, 2, 7, 8, 2}; // Creating the vector ("safe_bar") and including its values

    int movements = 0, position_to;
    // int movements; // Incluir uma forma de perguntar ao usu�rio quantos movimentos/deslocamentos ele deseja realizar (no m�ximo 4)

    introMessage();

    sleep(3);
    system("pause");
    system("cls");


    /*
    do {
        printf("\n\n Primeiramente, informe quantos movimentos voc� deseja realizar (no m�ximo 4 movimenta��es): ");
        scanf("%d", &movements);

        if(movements <= 0) {
            printf("\n N�o � poss�vel abrir o cofre sem realizar nenhuma movimenta��o!");
        } else if(movements > 4) {
            printf("\n � imposs�vel realizar mais que 4 movimenta��es! Insira um n�mero v�lido...");
        }
    } while((movements <= 0) || (movements > 4));

    printf("\n �timo! Agora com o n�mero de movimenta��es a serem realizadas definido, podemos continuar para a \"parte pr�tica\".");

    sleep(2);
    system("cls");
    */

    sleep(2);

    printf("\n Tudo pronto! Agora ser� necess�rio informar as posi��es desejadas para o deslocamento do limite.");

    sleep(1);

    for(movements = 0; movements < 4; movements++) {
        printf("\n\n Informe o limite para o \"%d�\" deslocamento: ", movements+1);
        scanf("%d", &position_to);
    }

    system("pause");
    return 0;
}
