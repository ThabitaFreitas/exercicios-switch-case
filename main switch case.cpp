#include <iostream>


int numero;
int main(int argc, char** argv)
 {
	printf ("sistemas\n\n");
	printf ("1- windows\n");
	printf ("2- Linux\n");
	printf ("escolha a opcao desejada: \n");
	scanf("%d", &numero);
	switch (numero)
	{
		case 1:
			system ("cls");
			printf ("iniciando o windows...\n");
			break;
			
		case 2:
			system ("cls");
			printf ("iniciando o Linux...\n");
			break;
			
		default:
		printf ("opcao invalida \n");	
				
	}
	system ("pause");
	return 0;
}
