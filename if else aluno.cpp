#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float nota1,nota2,media;
	printf ("digite sua primeira nota: ");
	scanf ("%f", &nota1);
	printf ("digite sua segunda nota: ");
	scanf ("%f", &nota2);
	media = (nota1+nota2)/2;
	printf ("media: %.1f\n", media);
	if(media<6)
	{
		printf ("\naluno REPROVADO\n");
	}
	else
	{
		printf ("\nAluno APROVADO\n");
	}

	
	return 0;
}

