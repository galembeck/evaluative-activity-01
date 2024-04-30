#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <math.h>

#define maxanswr 6

void Carl_Face_Neutral ()
{
	printf("\t _________________________\n");
	printf("\t|   ___________________   |\n");
	printf("\t|  |                   |  |\n");
	printf("\t|  |    O         O    |  |\n");
	printf("\t|  |         -         |  |\n");
	printf("\t|  |___________________|  |\n");
	printf("\t| _______________________ |\n");
	printf("\t||     |     |     |     ||\n");
	printf("\t||  7  |  8  |  9  |  AC ||\n");
	printf("\t||_____|_____|_____|_____||\n");
	printf("\t||     |     |     |     ||\n");
	printf("\t||  4  |  5  |  6  |  X  ||\n");
	printf("\t||_____|_____|_____|_____||\n");
	printf("\t||     |     |     |     ||\n");
	printf("\t||  1  |  2  |  3  |  /  ||\n");
	printf("\t||_____|_____|_____|_____||\n");
	printf("\t||     |     |     |     ||\n");
	printf("\t||  -  |  0  |  +  |  =  ||\n");
	printf("\t||_____|_____|_____|_____||\n");
	printf("\t|_________________________|\n");
}

void Carl_Face_Happy ()
{
	printf("\t _________________________\n");
	printf("\t|   ___________________   |\n");
	printf("\t|  |                   |  |\n");
	printf("\t|  |    ¬         ¬    |  |\n");
	printf("\t|  |       \\___/       |  |\n");
	printf("\t|  |___________________|  |\n");
	printf("\t| _______________________ |\n");
	printf("\t||     |     |     |     ||\n");
	printf("\t||  7  |  8  |  9  |  AC ||\n");
	printf("\t||_____|_____|_____|_____||\n");
	printf("\t||     |     |     |     ||\n");
	printf("\t||  4  |  5  |  6  |  X  ||\n");
	printf("\t||_____|_____|_____|_____||\n");
	printf("\t||     |     |     |     ||\n");
	printf("\t||  1  |  2  |  3  |  /  ||\n");
	printf("\t||_____|_____|_____|_____||\n");
	printf("\t||     |     |     |     ||\n");
	printf("\t||  -  |  0  |  +  |  =  ||\n");
	printf("\t||_____|_____|_____|_____||\n");
	printf("\t|_________________________|\n");
}

void Carl_Face_Angry ()
{
	printf("\t _________________________\n");
	printf("\t|   ___________________   |\n");
	printf("\t|  |    \\         /    |  |\n");
	printf("\t|  |    -         -    |  |\n");
	printf("\t|  |         _         |  |\n");
	printf("\t|  |___________________|  |\n");
	printf("\t| _______________________ |\n");
	printf("\t||     |     |     |     ||\n");
	printf("\t||  7  |  8  |  9  |  AC ||\n");
	printf("\t||_____|_____|_____|_____||\n");
	printf("\t||     |     |     |     ||\n");
	printf("\t||  4  |  5  |  6  |  X  ||\n");
	printf("\t||_____|_____|_____|_____||\n");
	printf("\t||     |     |     |     ||\n");
	printf("\t||  1  |  2  |  3  |  /  ||\n");
	printf("\t||_____|_____|_____|_____||\n");
	printf("\t||     |     |     |     ||\n");
	printf("\t||  -  |  0  |  +  |  =  ||\n");
	printf("\t||_____|_____|_____|_____||\n");
	printf("\t|_________________________|\n");
}

void Carl_Face_Hmm ()
{
	printf("\t _________________________\n");
	printf("\t|   ___________________   |\n");
	printf("\t|  |   --         /    |  |\n");
	printf("\t|  |    -         -    |  |\n");
	printf("\t|  |         _         |  |\n");
	printf("\t|  |___________________|  |\n");
	printf("\t| _______________________ |\n");
	printf("\t||     |     |     |     ||\n");
	printf("\t||  7  |  8  |  9  |  AC ||\n");
	printf("\t||_____|_____|_____|_____||\n");
	printf("\t||     |     |     |     ||\n");
	printf("\t||  4  |  5  |  6  |  X  ||\n");
	printf("\t||_____|_____|_____|_____||\n");
	printf("\t||     |     |     |     ||\n");
	printf("\t||  1  |  2  |  3  |  /  ||\n");
	printf("\t||_____|_____|_____|_____||\n");
	printf("\t||     |     |     |     ||\n");
	printf("\t||  -  |  0  |  +  |  =  ||\n");
	printf("\t||_____|_____|_____|_____||\n");
	printf("\t|_________________________|\n");
}

void Carl_Face_Meh ()
{
	printf("\t _________________________\n");
	printf("\t|   ___________________   |\n");
	printf("\t|  |                   |  |\n");
	printf("\t|  |    -         -    |  |\n");
	printf("\t|  |         _         |  |\n");
	printf("\t|  |___________________|  |\n");
	printf("\t| _______________________ |\n");
	printf("\t||     |     |     |     ||\n");
	printf("\t||  7  |  8  |  9  |  AC ||\n");
	printf("\t||_____|_____|_____|_____||\n");
	printf("\t||     |     |     |     ||\n");
	printf("\t||  4  |  5  |  6  |  X  ||\n");
	printf("\t||_____|_____|_____|_____||\n");
	printf("\t||     |     |     |     ||\n");
	printf("\t||  1  |  2  |  3  |  /  ||\n");
	printf("\t||_____|_____|_____|_____||\n");
	printf("\t||     |     |     |     ||\n");
	printf("\t||  -  |  0  |  +  |  =  ||\n");
	printf("\t||_____|_____|_____|_____||\n");
	printf("\t|_________________________|\n");
}

void Carl_Face_Ugh ()
{
	printf("\t _________________________\n");
	printf("\t|   ___________________   |\n");
	printf("\t|  |                   |  |\n");
	printf("\t|  |    ¬         ¬    |  |\n");
	printf("\t|  |         _         |  |\n");
	printf("\t|  |___________________|  |\n");
	printf("\t| _______________________ |\n");
	printf("\t||     |     |     |     ||\n");
	printf("\t||  7  |  8  |  9  |  AC ||\n");
	printf("\t||_____|_____|_____|_____||\n");
	printf("\t||     |     |     |     ||\n");
	printf("\t||  4  |  5  |  6  |  X  ||\n");
	printf("\t||_____|_____|_____|_____||\n");
	printf("\t||     |     |     |     ||\n");
	printf("\t||  1  |  2  |  3  |  /  ||\n");
	printf("\t||_____|_____|_____|_____||\n");
	printf("\t||     |     |     |     ||\n");
	printf("\t||  -  |  0  |  +  |  =  ||\n");
	printf("\t||_____|_____|_____|_____||\n");
	printf("\t|_________________________|\n");
}

void Carl_Face_Off ()
{
	printf("\t _________________________\n");
	printf("\t|   ___________________   |\n");
	printf("\t|  |                   |  |\n");
	printf("\t|  |                   |  |\n");
	printf("\t|  |                   |  |\n");
	printf("\t|  |___________________|  |\n");
	printf("\t| _______________________ |\n");
	printf("\t||     |     |     |     ||\n");
	printf("\t||  7  |  8  |  9  |  AC ||\n");
	printf("\t||_____|_____|_____|_____||\n");
	printf("\t||     |     |     |     ||\n");
	printf("\t||  4  |  5  |  6  |  X  ||\n");
	printf("\t||_____|_____|_____|_____||\n");
	printf("\t||     |     |     |     ||\n");
	printf("\t||  1  |  2  |  3  |  /  ||\n");
	printf("\t||_____|_____|_____|_____||\n");
	printf("\t||     |     |     |     ||\n");
	printf("\t||  -  |  0  |  +  |  =  ||\n");
	printf("\t||_____|_____|_____|_____||\n");
	printf("\t|_________________________|\n");
}

void Intro_Message ()
{
	Carl_Face_Off();
	
	fflush(stdout);
	sleep(2);
	printf("\e[1;1H\e[2J");
	
	Carl_Face_Neutral();
	
	fflush(stdout);
	sleep(2);
	printf("\n\n\tHello there, fellow human! My name is Carl and I am a Calculator designed to solve Math Problems.");
	
	fflush(stdin);
	getchar();
	printf("\e[1;1H\e[2J");
	
	Carl_Face_Hmm ();
	printf("\n\n\tWould you like my assistance with a problem?");
	
	fflush(stdin);
	getchar();
}

void End_Code ()
{
	printf("\e[1;1H\e[2J");
	
	Carl_Face_Hmm();
	
	fflush(stdout);
	sleep(2);
	printf("\n\n\tOkay then!");
	
	fflush(stdout);
	sleep(2);
	printf("\e[1;1H\e[2J");
	
	Carl_Face_Meh();
	printf("\n\n\tGuess I\'ll see you next time...");
	
	fflush(stdout);
	sleep(2);
	printf("\e[1;1H\e[2J");
	
	Carl_Face_Off();
	
	exit(0);
}

void Carl_Processing ()
{
	printf("\e[1;1H\e[2J");
	
	Carl_Face_Off();
	
	printf("\n\n\tProcessing...");
	
	fflush(stdout);
	sleep(2);
	
	printf("\e[1;1H\e[2J");
}

void End_Process ()
{
	/*=======Substitute for "system("pause")"=========*/
	printf("\n\n\tPressione Enter para continuar (...)");
	fflush(stdin); // Cleans the input buffer;
	getchar(); // Waits for the user to press Enter;
	printf("\e[1;1H\e[2J"); //Cleans screen;
	/*================================================*/
}

void First_Question (char answr[maxanswr])
{
	printf("\e[1;1H\e[2J");
	
	Carl_Face_Happy();
	printf("\n\n\tPlease, type something I can understand as an answer.");
	printf("\n\n\tYour answer: ");
	fflush(stdin);
	fgets(answr, 6, stdin);
	printf("\e[1;1H\e[2J");
}

void What_To_Do (int *whattodo1)
{
	printf("\e[1;1H\e[2J");
	Carl_Face_Happy();
	printf("\n\n\tAlright! Please, choose one of these options (Simple Operations):\n\n\tOption 1: Sum;\n\tOption 2: Difference;\n\tOption 3: Multiply;\n\tOption 4: Divide;\n\tOption 5: Power;\n\tOption 6: Root;\n\tOption 7: Factorial Numbers;\n\tOption 8: Percentage\n\tOption 9: Page 2;\n\tOption 10: End Run;\n\n\tYour Answer: ");
	scanf("%d", whattodo1);
}

void What_To_Do_Two (int *whattodo2)
{
	printf("\e[1;1H\e[2J");
	Carl_Face_Happy();
	printf("\n\n\tAlright! Please, choose one of these options (Complex Operations):\n\n\tOption 1: Equations;\n\tOption 2: Functions;\n\tOption 3: Vectors;\n\tOption 4: Matrixes;\n\tOption 5: Trigonometry;\n\tOption 6: Complex Numbers;\n\tOption 7: Calculus;\n\tOption 8: Figure Areas;\n\tOption 9: Go back;\n\tOption 10: End Run;\n\n\tYour Answer: ");
	scanf("%d", whattodo2);
}

void What_To_Do_Sum (int *whattodosum)
{
	printf("\e[1;1H\e[2J");
	Carl_Face_Happy();
	printf("\n\n\tAlright! Please, choose one of these options:\n\n\tOption 1: Integers Or Floats Sum;\n\tOption 2: Fractions\' Sum;\n\tOption 3: Powers\' Sum;\n\tOption 4: Roots\' Sum;\n\tOption 5: Factorials\' Sum;\n\tOption 6: Go back;\n\n\tYour Answer: ");
	scanf("%d", whattodosum);
}

void What_To_Do_Difference (int *whattododifference)
{
	printf("\e[1;1H\e[2J");
	Carl_Face_Happy();
	printf("\n\n\tAlright! Please, choose one of these options:\n\n\tOption 1: Integers Or Floats Difference;\n\tOption 2: Fractions\' Difference;\n\tOption 3: Powers\' Difference;\n\tOption 4: Roots\' Difference;\n\tOption 5: Factorials\' Difference;\n\tOption 6: Go back;\n\n\tYour Answer: ");
	scanf("%d", whattododifference);
}

void What_To_Do_Multiply (int *whattodomultiply)
{
	printf("\e[1;1H\e[2J");
	Carl_Face_Happy();
	printf("\n\n\tAlright! Please, choose one of these options:\n\n\tOption 1: Multiply Integers Or Floats;\n\tOption 2: Multiply Fractions;\n\tOption 3: Multiply Powers;\n\tOption 4: Multiply Roots;\n\tOption 5: Multiply Factorials;\n\tOption 6: Go back;\n\n\tYour Answer: ");
	scanf("%d", whattodomultiply);
}

void What_To_Do_Divide (int *whattododivide)
{
	printf("\e[1;1H\e[2J");
	Carl_Face_Happy();
	printf("\n\n\tAlright! Please, choose one of these options:\n\n\tOption 1: Divide Integers Or Floats;\n\tOption 2: Divide Fractions;\n\tOption 3: Divide Powers;\n\tOption 4: Divide Roots;\n\tOption 5: Divide Factorials;\n\tOption 6: Go back;\n\n\tYour Answer: ");
	scanf("%d", whattododivide);
}

void What_To_Do_Power (int *whattodopower)
{
	printf("\e[1;1H\e[2J");
	Carl_Face_Happy();
	printf("\n\n\tAlright! Please, choose one of these options:\n\n\tOption 1: Power Integers Or Floats;\n\tOption 2: Power Fractions;\n\tOption 3: Power Powers;\n\tOption 4: Power Roots;\n\tOption 5: Power Factorials;\n\tOption 6: Go back;\n\n\tYour Answer: ");
	scanf("%d", whattodopower);
}

void What_To_Do_Root (int *whattodoroot)
{
	printf("\e[1;1H\e[2J");
	Carl_Face_Happy();
	printf("\n\n\tAlright! Please, choose one of these options:\n\n\tOption 1: Root Integers Or Floats;\n\tOption 2: Root Fractions;\n\tOption 3: Root Powers;\n\tOption 4: Root Roots;\n\tOption 5: Root Factorials;\n\tOption 6: Go back;\n\n\tYour Answer: ");
	scanf("%d", whattodoroot);
}

void What_To_Do_Factorial (int *whattodofactorial)
{
	printf("\e[1;1H\e[2J");
	Carl_Face_Happy();
	printf("\n\n\tAlright! Please, choose one of these options:\n\n\tOption 1: Factorial Integers Or Floats;\n\tOption 2: Factorial Fractions;\n\tOption 3: Factorial Powers;\n\tOption 4: Factorial Roots;\n\tOption 5: Factorial Factorials;\n\tOption 6: Go back;\n\n\tYour Answer: ");
	scanf("%d", whattodofactorial);
}

void What_To_Do_Percentage (int *whattodopercentage)
{
	printf("\e[1;1H\e[2J");
	Carl_Face_Happy();
	printf("\n\n\tAlright! Please, choose one of these options:\n\n\tOption 1: Percentage Sum;\n\tOption 2: Percentage Difference;\n\tOption 3: Multiply Percentage;\n\tOption 4: Divide Percentage;\n\tOption 5: Percentage Power;\n\tOption 6: Percentage Root;\n\tOption 7: Percentage Factorial;\n\tOption 8: How much is X Percentage of a Y number?;\n\tOption 9: How much Percentage is X of Y;\n\tOption 10: Go back;\n\n\tYour Answer: ");
	scanf("%d", whattodopercentage);
}

void What_To_Do_Equations (int *whattodoequations)
{
	printf("\e[1;1H\e[2J");
	Carl_Face_Happy();
	printf("\n\n\tAlright! Please, choose one of these options:\n\n\tOption 1: First Degree Equations;\n\tOption 2: Second Degree Equations;\n\tOption 3: Polynomials;\n\tOption 4: Go back;\n\n\tYour Answer: ");
	scanf("%d", whattodoequations);
}

void What_To_Do_First_Degree (int *whattodoFirstDegree)
{
	printf("\e[1;1H\e[2J");
	Carl_Face_Happy();
	printf("\n\n\tAlright! Please, choose one of these options:\n\n\tOption 1: First Degree Equation;\n\tOption 2: First Degree Linear System;\n\tOption 3: Go back;\n\n\tYour Answer: ");
	scanf("%d", whattodoFirstDegree);
}

void What_To_Do_Second_Degree (int *whattodoSecondDegree)
{
	printf("\e[1;1H\e[2J");
	Carl_Face_Happy();
	printf("\n\n\tAlright! Please, choose one of these options:\n\n\tOption 1: Second Degree Equation;\n\tOption 2: Second Degree Linear System;\n\tOption 3: Go back;\n\n\tYour Answer: ");
	scanf("%d", whattodoSecondDegree);
}

void What_To_Do_Functions (int *whattodoFunctions)
{
	printf("\e[1;1H\e[2J");
	Carl_Face_Happy();
	printf("\n\n\tAlright! Please, choose one of these options:\n\n\tOption 1: First Degree Functions;\n\tOption 2: Second Degree Functions;\n\tOption 3: Go back;\n\n\tYour Answer: ");
	scanf("%d", whattodoFunctions);
}

void What_To_Do_First_Degree_F (int *whattodoFDF)
{
	printf("\e[1;1H\e[2J");
	Carl_Face_Happy();
	printf("\n\n\tAlright! Please, choose one of these options:\n\n\tOption 1: Related Function;\n\tOption 2: Composite Function;\n\tOption 3: Go back;\n\n\tYour Answer: ");
	scanf("%d", whattodoFDF);
}

void What_To_Do_Second_Degree_F (int *whattodoSDF)
{
	printf("\e[1;1H\e[2J");
	Carl_Face_Happy();
	printf("\n\n\tAlright! Please, choose one of these options:\n\n\tOption 1: Related Second Degree Function;\n\tOption 2: Composite Second Degree Function;\n\tOption 3: Go back;\n\n\tYour Answer: ");
	scanf("%d", whattodoSDF);
}

void Integers_Or_Floats_Sum (float A, float B, float Sum)
{
	printf("\e[1;1H\e[2J");
	Carl_Face_Hmm();
	
	printf("\n\n\tAlright, please inform me your first number: ");
	scanf("%f", &A);
	
	printf("\n\n\tNow, inform me the second number: ");
	scanf("%f", &B);
	
	Sum = A + B;
	
	Carl_Processing();
	
	Carl_Face_Happy();
	
	printf("\n\n\tThe => Sum <= between %.3f and %.3f is %.3f", A, B, Sum);
}

void Integers_Or_Floats_Difference (float A, float B, float Difference)
{
	printf("\e[1;1H\e[2J");
	Carl_Face_Hmm();
	
	printf("\n\n\tAlright, please inform me your first number: ");
	scanf("%f", &A);
	
	printf("\n\n\tNow, inform me the second number: ");
	scanf("%f", &B);
	
	Difference = A - B;
	
	Carl_Processing();
	
	Carl_Face_Happy();
	
	printf("\n\n\tThe => Difference <= between %.3f and %.3f is %.3f", A, B, Difference);
}

void Multiply_Integers_Or_Floats (float A, float B, float Multiplication)
{
	printf("\e[1;1H\e[2J");
	Carl_Face_Hmm();
	
	printf("\n\n\tAlright, please inform me your first number: ");
	scanf("%f", &A);
	
	printf("\n\n\tNow, inform me the second number: ");
	scanf("%f", &B);
	
	Multiplication = A * B;
	
	Carl_Processing();
	
	Carl_Face_Happy();
	
	printf("\n\n\tThe => Multiplication <= between %.3f and %.3f is %.3f", A, B, Multiplication);
}

void Divide_Integers_Or_Floats (float A, float B, float Division)
{
	printf("\e[1;1H\e[2J");
	Carl_Face_Hmm();
	
	printf("\n\n\tAlright, please inform me your first number: ");
	scanf("%f", &A);
	
	printf("\n\n\tNow, inform me the second number: ");
	scanf("%f", &B);
	
	Division = A / B;
	
	Carl_Processing();
	
	Carl_Face_Happy();
	
	printf("\n\n\tThe => Division <= between %.3f and %.3f is %.3f", A, B, Division);
}

void Power_Integers_Or_Floats (float A, float B, float Result)
{
	printf("\e[1;1H\e[2J");
	Carl_Face_Hmm();
	
	printf("\n\n\tAlright, please inform me your number: ");
	scanf("%f", &A);
	
	printf("\n\n\tNow, please inform me the power: ");
	scanf("%f", &B);
	
	if (((A >= 0 && B >= 0) && (!(A == 0 && B < 0))))
	{
		Result = powf(A, B);
		
		Carl_Processing();
		
		Carl_Face_Happy();
		
		printf("\n\n\t%.3f to the Power of %.3f is %.3f", A, B, Result);
	}
	else if (((A <= 0 && B <= 0) && (!(A == 0 && B < 0))))
	{
		Result = powf(A, B);
		
		Carl_Processing();
		
		Carl_Face_Happy();
		
		printf("\n\n\t%.3f to the Power of %.3f is %.3f", A, B, Result);
	}
	else if (A == 0 && B < 0)
	{
		Carl_Processing();
		
		Carl_Face_Hmm();
		
		printf("\n\n\tI\'m sorry, but 0 to the power of %.3f is undefined.", B);
	}
}

void Root_Integers_Or_Floats (float A, float B, float Result)
{
	printf("\e[1;1H\e[2J");
	Carl_Face_Hmm();
	
	printf("\n\n\tAlright, please inform me your number: ");
	scanf("%f", &A);
	
	printf("\n\n\tNow, please inform me the root's base: ");
	scanf("%f", &B);
	
	if ((fmod(B, 2.0) != 0.0) && (A < 0.0) && (B > 0)) // B is Odd and A < 0 - Possible
	{
		A = fabsf(A);
		
		Result = powf(A, (1 / B));
		
		Carl_Processing();
		
		Carl_Face_Happy();
		
		printf("\n\n\t- %.3f to the Root of %.3f is - %.3f", A, B, Result);
	}
	else if ((fmod(B, 2.0) == 0.0) && (A < 0.0) && (B > 0)) // B is Even and A < 0 - Impossible
	{
		Carl_Processing();
		
		Carl_Face_Hmm();
		
		printf("\n\n\tI\'m sorry, but Roots with an even base and negative number are not possible.");
	}
	else if ((A > 0.0 && B > 0) || (A == 0.0 && B > 0)) // A > 0 - Possible
	{
		Result = powf(A, (1 / B));
		
		Carl_Processing();
		
		Carl_Face_Happy();
		
		printf("\n\n\t%.3f to the Root of %.3f is %.3f", A, B, Result);
	}
	else if (B == 0.0) // B = 0 - Impossible
	{
		Carl_Processing();
		
		Carl_Face_Hmm();
		
		printf("\n\n\tI\'m sorry, but Roots with 0 as a base are not possible.");
	}
	else if (B < 0.0) // B < 0 - Impossible
	{
		Carl_Processing();
		
		Carl_Face_Hmm();
		
		printf("\n\n\tI\'m sorry, but Roots with a negative base are not possible.");
	}
}

int main()
{
	/*-----------------*/
	char answr[maxanswr];
	/*-----------------*/
	
	/*-----------------------------------------------------------------------------------------------------------------------------------------------------------*/
	int whattodo1, whattodo2, flagwhattodo1 = 0, flagwhattodo2 = 0, generalflag = 0, generalflag2 = 0, generalflag3 = 0;
	/*-----------------------------------------------------------------------------------------------------------------------------------------------------------*/
	
	/*------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
	float A, B, Result;
	/*------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
	
	Intro_Message();
	
	do
	{
	//======================================================================================================================================================================
		First_Question(answr);
	//======================================================================================================================================================================
	} while ((strcmp(answr, "Yes\n") != 0) && (strcmp(answr, "yes\n") != 0) && (strcmp(answr, "No\n") != 0) && (strcmp(answr, "no\n") != 0) && (strcmp(answr, "Y\n") != 0) && (strcmp(answr, "N\n") != 0) && (strcmp(answr, "y\n") != 0) && (strcmp(answr, "n\n") != 0)); // Conditions for answers;
	
	if ((strcmp(answr, "Yes\n") == 0) || (strcmp(answr, "yes\n") == 0) || (strcmp(answr, "Y\n") == 0) || (strcmp(answr, "y\n") == 0))
	{
	//======================================================================================================================================================================
		do
		{
			What_To_Do(&whattodo1);
			
			switch(whattodo1)
			{
				case 1: // Sum
					
					generalflag = 0;
					
					do
					{
						What_To_Do_Sum(&whattodo1);
						
						switch(whattodo1)
						{
							case 1: // Integers Sum
								
								Integers_Or_Floats_Sum(A, B, Result);
								
								End_Process();
								
								break;
							
							case 2: // Fractions Sum
								
								// Factions_Sum ();
								
								break;
							
							case 3: // Powers Sum
								
								// Powers_Sum ();
								
								break;
							
							case 4: // Roots Sum
								
								// Roots_Sum ();
								
								break;
							
							case 5: // Factorials Sum
								
								// Factorials_Sum ();
								
								break;
							
							case 6: // Go back
								
								generalflag++;
								
								break;
						}
						
					} while (generalflag != 1);
					
					break;
				
				case 2: // Difference
					
					generalflag = 0;
					
					do
					{
						What_To_Do_Difference(&whattodo1);
						
						switch(whattodo1)
						{
							case 1: // Integers Difference
								
								Integers_Or_Floats_Difference(A, B, Result);
								
								End_Process();
								
								break;
							
							case 2: // Fractions Difference
								
								// Fractions_Difference ();
								
								break;
							
							case 3: // Powers Difference
								
								// Powers_Difference ();
								
								break;
							
							case 4: // Roots Difference
								
								// Roots_Difference ();
								
								break;
							
							case 5: // Factorials Difference
								
								// Factorials_Difference ();
								
								break;
							
							case 6: // Go back
								
								generalflag++;
								
								break;
						}
						
					} while (generalflag != 1);
					
					break;
				
				case 3: // Multiply
					
					generalflag = 0;
					
					do
					{
						What_To_Do_Multiply(&whattodo1);
						
						switch(whattodo1)
						{
							case 1: // Multiply 2 Numbers
								
								Multiply_Integers_Or_Floats(A, B, Result);
								
								End_Process();
								
								break;
							
							case 2: // Multiply Fractions
								
								// Multiply_Fractions ();
								
								break;
							
							case 3: // Multiply Powers
								
								// Multiply_Powers ();
								
								break;
							
							case 4: // Multiply Roots
								
								// Multiply_Roots ();
								
								break;
							
							case 5: // Multiply Factorials
								
								// Multiply_Factorials ();
								
								break;
							
							case 6: // Go back
								
								generalflag++;
								
								break;
						}
						
					} while (generalflag != 1);
					
					break;
				
				case 4: // Divide
					
					generalflag = 0;
					
					do
					{
						What_To_Do_Divide (&whattodo1);
						
						switch(whattodo1)
						{
							case 1: // Divide Numbers
								
								Divide_Integers_Or_Floats(A, B, Result);
								
								End_Process();
								
								break;
							
							case 2: // Divide Fractions
								
								// Divide_Factions ();
								
								break;
							
							case 3: // Divide Powers
								
								// Divide_Powers ();
								
								break;
							
							case 4: // Divide Roots
								
								// Divide_Roots ();
								
								break;
							
							case 5: // Divide Factorials
								
								// Divide_Factorials ();
								
								break;
							
							case 6: // Go back
								
								generalflag++;
								
								break;
						}
						
					} while (generalflag != 1);
					
					break;
				
				case 5: // Power
					
					generalflag = 0;
					
					do
					{
						What_To_Do_Power (&whattodo1);
						
						switch(whattodo1)
						{
							case 1: // Number X to the Power of Y
								
								Power_Integers_Or_Floats(A, B, Result);
								
								End_Process();
								
								break;
							
							case 2: // Power Fractions
								
								// Power_Fractions ();
								
								break;
							
							case 3: // Power Powers
								
								// Power_Powers ();
								
								break;
							
							case 4: // Power Roots
								
								// Power_Roots ();
								
								break;
							
							case 5: // Power Factorials
								
								// Power_Factorials ();
								
								break;
							
							case 6: // Go back
								
								generalflag++;
								
								break;
						}
						
					} while (generalflag != 1);

					break;
				
				case 6: // Root
					
					generalflag = 0;
					
					do
					{
						What_To_Do_Root (&whattodo1);
						
						switch(whattodo1)
						{
							case 1: // Number X Z Root
								
								Root_Integers_Or_Floats(A, B, Result);
								
								End_Process();
								
								break;
							
							case 2: // Root Fraction
								
								// Root_Fractions ();
								
								break;
							
							case 3: // Root Powers
								
								// Root_Powers ();
								
								break;
							
							case 4: // Root Roots
								
								// Root_Roots ();
								
								break;
							
							case 5: // Root Factorials
								
								// Root_Factorials ();
								
								break;
							
							case 6: // Go back
								
								generalflag++;
								
								break;
						}
						
					} while (generalflag != 1);
					
					break;
				
				case 7: // Factorial Numbers
					
					generalflag = 0;
					
					do
					{
						What_To_Do_Factorial (&whattodo1);
						
						switch(whattodo1)
						{
							case 1: // Factorial Number
								
								// Factorial_Integers_Or_Floats ();
								
								break;
							
							case 2: // Factorial Fraction
								
								// Factorial_Fractions ();
								
								break;
							
							case 3: // Factorial Powers
								
								// Factorial_Powers ();
								
								break;
							
							case 4: // Factorial Roots
								
								// Factorial_Roots ();
								
								break;
							
							case 5: // Factorial Factorials
								
								// Factorial_Factorials ();
								
								break;
							
							case 6: // Go back
								
								generalflag++;
								
								break;
						}
						
					} while (generalflag != 1);

					break;
				
				case 8: // Percentage
					
					generalflag = 0;
					
					do
					{
						What_To_Do_Percentage(&whattodo1);
						
						switch(whattodo1)
						{
							case 1: // Percentage Sum
								
								// Percentage_Sum ();
								
								break;
							
							case 2: // Percentage Difference
								
								// Percentage_Difference ();
								
								break;
							
							case 3: // Multiply Percentage
								
								// Percentage_Multiply ();
								
								break;
							
							case 4: // Divide Percentage
								
								// Percentage_Divide ();
								
								break;
							
							case 5: // Percentage Power
								
								// Percentage_Power ();
								
								break;
							
							case 6: // Percentage Root
								
								// Percentage_Root ();
								
								break;
							
							case 7: // Percentage Factorial
								
								// Percentage_Root ();
								
								break;
							
							case 8: // How much is X Percentage of a Y number?
								
								// How_Much_Is_X_Percentage_Of_A_Y_Number ();
								
								break;
							
							case 9: // How much Percentage is X of Y
								
								// How_Much_Percentage_Is_X_Of_Y ();
								
								break;
							
							case 10: // Go back
								
								generalflag++;
								
								break;
						}
						
					} while (generalflag != 1);
					
					break;
				
				case 9: // Page 2
					
					do
					{
						What_To_Do_Two(&whattodo2);
						
						flagwhattodo2 = 0;
						
						switch(whattodo2)
						{
							case 1: // Equations
								
								generalflag2 = 0;
								
								do
								{
									What_To_Do_Equations(&whattodo2);
									
									switch(whattodo2)
									{
										case 1: // First Degree
											
											generalflag3 = 0;
											
											do
											{
												What_To_Do_First_Degree(&whattodo2);
												
												switch(whattodo2)
												{
													case 1: // FD Equation
														
														
														
														break;
													
													case 2: //FD Linear System
														
														
														
														break;
													
													case 3: // Go back
														
														generalflag3++;
														
														break;
												}
												
											} while (generalflag3 != 1);
											
											break;
										
										case 2: // Second Degree
											
											generalflag3 = 0;
											
											do
											{
												What_To_Do_Second_Degree(&whattodo2);
												
												switch(whattodo2)
												{
													case 1: // SD Equation
														
														
														
														break;
													
													case 2: //SD Linear System
														
														
														
														break;
													
													case 3: // Go back
														
														generalflag3++;
														
														break;
												}
												
											} while (generalflag3 != 1);
											
											break;
										
										case 3: // Polynomials
											
											// I have no idea HOW THE FUCK AM I SUPPOSED TO DO THIS SHIT >:(
											
											break;
										
										case 4: // Go back
											
											generalflag2++;
											
											break;
									}
									
								} while (generalflag2 != 1);
								
								break;
							
							case 2: // Functions
								
								generalflag2 = 0;
								
								do
								{
									What_To_Do_Functions(&whattodo2);
									
									switch(whattodo2)
									{
										case 1: // FD Functions
											
											generalflag3 = 0;
											
											do
											{
												What_To_Do_First_Degree_F(&whattodo2);
												
												switch(whattodo2)
												{
													case 1: // Related Function
														
														
														
														break;
													
													case 2: // Composite Function
														
														
														
														break;
													
													case 3: // Go back
														
														generalflag3++;
														
														break;
												}
												
											} while (generalflag3 != 1);
											
											break;
										
										case 2: // SD Functions
											
											generalflag3 = 0;
											
											do
											{
												What_To_Do_Second_Degree_F(&whattodo2);
												
												switch(whattodo2)
												{
													case 1: // Related Second Degree Function
														
														
														
														break;
													
													case 2: // Composite Second Degree Function
														
														
														
														break;
													
													case 3: // Go back
														
														generalflag3++;
														
														break;
												}
												
											} while (generalflag3 != 1);
											
											break;
										
										case 3: // Go back
											
											generalflag2++;
											
											break;
									}
									
								} while (generalflag2 != 1);
								
								break;
							
							case 3: // Vectors
								
								
								
								break;
							
							case 4: // Matrixes
								
								
								
								break;

							case 5: // Trigonometry
								
								
								
								break;
							
							case 6: // Complex Numbers
								
								
								
								break;
							
							case 7: // Figure Areas
								
								
								
								break;
							
							case 8: // Calculus
								
								
								
								break;
							
							case 9: // Go back
								
								flagwhattodo2++;
								
								break;
							
							case 10: // End Run
								
								End_Code();
								
								break;
						}
						
					} while (flagwhattodo2 != 1);
					
					break;
				
				case 10: // End Run
					
					End_Code();
					
					break;
			}
			
		} while (flagwhattodo1 != 1);
	//======================================================================================================================================================================
	}
	else
	{
	//======================================================================================================================================================================
		End_Code();
	//======================================================================================================================================================================
	}
}