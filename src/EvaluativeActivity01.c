#include <stdio.h> // Including/importing the <stdio.h> (Standard Input Output) library
#include <stdlib.h> // Including/importing the <stdlib.h> (Standard System) library

#include <unistd.h> // Including/importing the <unistd.h> library - using "sleep() in code"

#include <locale.h> // Including/importing the <locale.h> (Language/Localization) library

#define length 25 // Defining the maximum length of the vector ("safe_bar") to 25 positions (0 - 24)

void introMessage() 
    { 
        // Creating a "introMessage()" function to show the introduction message
        
        printf("\n Olá! Eu sou um cofre virtual...");
        printf("\n Eu represento uma simulação digital de um mecanismo de segurança.");
        fflush(stdout);
        sleep(1);
        
        printf("\n\n Acho que para descobrir se eu te pertenço, será necessário acertar a senha/combinação, para que eu possa abrir e te entregar seus pertences :)");
        fflush(stdout);
        sleep(1);
        
        fflush(stdout);
        sleep(2);
        printf("\n\n Aqui está o funcionamento:");
        fflush(stdout);
        sleep(2);
        printf("\n\n\t Possuo uma barra de 25 posições, começando na posição 10, que pode ser movida até 4 vezes.");
        
        printf("\n\t Durante cada movimento, os números entre os novos limites estabelecidos serão contados.");
        
        fflush(stdout);
        sleep(2);
        printf("\n\n Agora, com todas as instruções, podemos começar!");
    }

void combinationAnalysis() 
    { 
        // Creating a "combinationAnalysis()" function to show a loading message
        
        fflush(stdout);
        sleep(1);
    
        printf("\n Analisando combinação...");
    
        fflush(stdout);
        sleep(1);
        printf("\n\n .");
    
        fflush(stdout);
        sleep(1);
        printf("    .");
    
        fflush(stdout);
        sleep(1);
        printf("    .");
    
        fflush(stdout);
        sleep(1);
    }

void successfulOpening() 
    { 
        // Creating a "successfulOpening()" function to show a success message when the safe is open
        
        printf("\n Muito bem! Parece que você me conhece bem e conseguiu abrir o cofre com sucesso...");
        printf("\n A combinação que você descobriu/encontrou ao final dos deslizamentos é a chave correta para me desbloquear!");
    
        fflush(stdout);
        sleep(1);
        printf("\n\n Agora que me encontro aberto, você pode acessar seus pertences com segurança :)");
        printf("\n\n Por favor, lembre-se de fechar o cofre corretamente após a utilização para garantir sua segurança.");
        printf("\n\n Obrigado por utilizar meu serviço!");
    }

void unsuccessfulOpening() 
    { 
        // Creating a "unccessfulOpening()" function to show a unsuccess message when the safe keep closed
        
        printf("\n Que pena! Suas tentativas de abertura do cofre se esgotaram :(");
        printf("\n Parece que você não conseguiu encontrar a combinação correta para me abrir...");
    
        printf("\n\n Infelizmente, não poderei lhe entregar seus pertences neste momento.");
    
        printf("\n\n Agradeço suas tentativas e lamento por qualquer incoveniente causado. Tenha um ótimo dia.");
    }

int main() 
    { 
        // Creating the "main" structure of the code/project
        
        setlocale(LC_ALL, "portuguese"); // Setting the project language to "portuguese" with the <locale.h> library
    
        int safe_bar[length] = {1, 5, 7, 8, 2, 2, 7, 8, 2, 5, 7, 8, 2, 1, 5, 2, 7, 8, 2, 1, 1, 2, 7, 8, 2}; // Creating the vector ("safe_bar") and including its values (1, 2, 5, 7, 8)
        int trys = 0, k, i, movements, return_option, closure_option, initial_position, position_to; // Creating new variables to be used during the development of the code/project
        int C1, C2, C5, C7, C8; // Creating five variables that are going to be used as counters
    
        introMessage(); // Calling function "introMessage()" to show the introduction message in the beginning
    
        fflush(stdout);
        sleep(1);
        printf("\n\n Pressione qualquer tecla para continuar (...)");
        fflush(stdin);
        getchar();
        printf("\e[1;1H\e[2J");
    
        do 
        {
//==========================================================================================================================================================================
            
            C1 = 0;
            C2 = 0;
            C5 = 0;
            C7 = 1;
            C8 = 0;
    
            initial_position = 10;
    
            printf("\n Primeiramente, preciso saber quantos deslizamentos/movimentos você deseja realizar.");
            printf("\n Para isso, me informe, a seguir, a quantidade de deslizamentos desejada por você para o processo de abertura.");
            printf("\n\n Observação: você deve realizar pelo menos 1 deslizamento e, no máximo, 4 deslizamentos totais.");
            fflush(stdout);
            sleep(2);
        
            do 
            {
//==========================================================================================================================================================================
                printf("\n\n º Informe a quantidade de deslizamentos a serem realizados: ");
                scanf("%d", &movements);
        
                    if(movements <= 0) 
                    {
                        printf("\n Não é possível abrir o cofre sem realizar nenhum movimento!\n");
                    } 
                    else if(movements > 4) 
                    {
                        printf("\n Não é possível realizar mais que 4 movimentos! Insira um número válido...\n");
                    }
//==========================================================================================================================================================================
            } while((movements <= 0) || (movements > 4));
    
            printf("\n Ótimo! Agora com o número de movimentos a serem realizadas definido, podemos continuar para a abertura do cofre.");
    
            fflush(stdout);
            sleep(2);
            printf("\n\n Pressione qualquer tecla para continuar (...)");
            fflush(stdin);
            getchar();
            printf("\e[1;1H\e[2J");
    
            fflush(stdout);
            sleep(1);
    
            printf("\n\n Tudo pronto! Agora, com a informação do número de deslizamentos para o processo de abertura, podemos prosseguir.");
            printf("\n Nessa etapa, será necessário informar as posições desejadas para o deslocamento do limite.");
    
            for(k = 0; k < movements; k++) 
                {
//==========================================================================================================================================================================
                    printf("\n\n º Informe o limite (posição) para o \"%dº\" deslocamento: ", k+1);
                    scanf("%d", &position_to);
        
                    if(position_to < 0)
                        {
                    //======================================================================================================================================================
                            printf("\n Um número negativo foi informado e, consequentemente, o deslocamento foi encerrado!");
            
                            fflush(stdout);
                            sleep(1);
            
                            exit(0);
                    //======================================================================================================================================================
                        }
    
                if (position_to > initial_position) 
                    {
                //==========================================================================================================================================================
                        for (i = initial_position + 1; i <= position_to; i++) 
                            {
                                if (safe_bar[i] == 1) 
                                    {
                                        C1++;
                                    } 
                                else if (safe_bar[i] == 2) 
                                    {
                                        C2++;
                                    } 
                                else if (safe_bar[i] == 5) 
                                    {
                                        C5++;
                                    } 
                                else if (safe_bar[i] == 7) 
                                    {
                                        C7++;
                                    } 
                                else if (safe_bar[i] == 8)
                                    {
                                        C8++;
                                    }
                            }
                        
                    // printf("\nC1: %d, C2: %d, C5: %d, C7: %d, C8: %d", C1, C2, C5, C7, C8);
                    initial_position = position_to;
                //==========================================================================================================================================================
                    }
                    
                else
                    {
                //==========================================================================================================================================================
                    for (i = initial_position - 1; i >= position_to; i--) 
                        {
                            if (safe_bar[i] == 1) 
                            {
                                C1++;
                            }
                            else if (safe_bar[i] == 2) 
                            {
                                C2++;
                            }
                            else if (safe_bar[i] == 5) 
                            {
                                C5++;
                            } 
                            else if (safe_bar[i] == 7) 
                            {
                                C7++;
                            }
                            else if (safe_bar[i] == 8) 
                            {
                                C8++;
                            }
                        }
                        
                    // printf("\nC1: %d, C2: %d, C5: %d, C7: %d, C8: %d", C1, C2, C5, C7, C8);
                    initial_position = position_to;
                //==========================================================================================================================================================
                    }

//==========================================================================================================================================================================
            }
    
            fflush(stdout);
            sleep(1);
    
            printf("\n Perfeito! Agora, ao término dos movimentos estipulados anteriormente, já temos a combinação formada.");
    
            fflush(stdout);
            sleep(3);
            printf("\e[1;1H\e[2J");
    
            // C1 = 5 | C2 = 11 | C5 = 3 | C7 = 7 | C8 = 6
    
            // if(password == 512376) {
            if((C1 == 5) && (C2 == 11) && (C5 == 3) && (C7 == 7) && (C8 == 6))
            {
//==========================================================================================================================================================================
                combinationAnalysis();
    
                printf("\e[1;1H\e[2J");
    
                successfulOpening();
    
                printf("\n --------------------------------------/--------------------------------------");
                fflush(stdout);
                sleep(1);
                printf("\n\n Pressione qualquer tecla para continuar (...)");
                fflush(stdin);
                getchar();
                printf("\e[1;1H\e[2J");
    
                fflush(stdout);
                sleep(1);
    
                printf("\n --------------------------------------/--------------------------------------\n");
    
                printf("\n Agora, com o cofre aberto, é possível fechá-lo novamente ou encerrar o processo de abertura.");
                printf("\n Abaixo há 2 opções disponíveis, dentre as quais você deve selecionar entre a 1º ou a 2º opção.");
                printf("\n º Digite \"1\" caso você queira fechar o cofre e retornar ao painel inicial.");
                printf("\n º Digite \"2\" caso você queira fechar o cofre e encerrar o processo de abertura definitivamente.");
    
                printf("\n\n Opção: ");
                scanf("%d", &closure_option);
    
                printf("\n --------------------------------------/--------------------------------------\n");
    
                switch(closure_option) 
                    {
                        case 1:
                            printf("\n Fechando o cofre e redirecionando-lhe ao painel inicial de abertura do cofre...");
        
                            fflush(stdout);
                            sleep(1);
                            printf("\n\n 3,");
        
                            fflush(stdout);
                            sleep(1);
                            printf("    2,");
        
                            fflush(stdout);
                            sleep(1);
                            printf("    1");
        
                            fflush(stdout);
                            sleep(1);
                            printf("\e[1;1H\e[2J");
        
                            trys = 0;
        
                            fflush(stdout);
                            sleep(1);
                            introMessage();
        
                            fflush(stdout);
                            sleep(1);
                            printf("\n\n Pressione qualquer tecla para continuar (...)");
                            fflush(stdin);
                            getchar();
                            printf("\e[1;1H\e[2J");
        
                            break;
        
                        case 2:
                            printf("\n Encerrando o processo de abertura do cofre de maneira definitiva...");
        
                            fflush(stdout);
                            sleep(1);
                            printf("\n\n 3,");
        
                            fflush(stdout);
                            sleep(1);
                            printf("    2,");
        
                            fflush(stdout);
                            sleep(1);
                            printf("    1\n");
                            
                            fflush(stdout);
                            sleep(1);
        
                            exit(0);
                        default:
                            printf("\n Nenhuma opção válida encontrada! Selecione entre as opções listadas acima.");
                    }

//==========================================================================================================================================================================
            } 
            else
            {
//==========================================================================================================================================================================
                trys++;
    
                combinationAnalysis();
                
                printf("\n Sua combinação final foi: | %d | %d | %d | %d | %d |\n\n", C1, C2, C5, C7, C8);
                printf("\n\n Hmmm... me parece que a senha inserida ao término dos deslizamentos está incorreta!");
                printf("\n Ainda lhe restam %d tentativa(s) até o fechamento completo do cofre.", 3-trys);
                
                fflush(stdout);
                sleep(1);
                printf("\n\n Pressione qualquer tecla para continuar (...)");
                fflush(stdin);
                getchar();
                
                printf("\e[1;1H\e[2J");
//==========================================================================================================================================================================
            }
        
//==========================================================================================================================================================================
        } while(trys < 3);
    
        unsuccessfulOpening();
        
        fflush(stdout);
        sleep(1);
        
        return 0;
}
