#include <stdio.h> //Biblioteca de comunica��o com usu�rio
#include <stdlib.h> //Biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //Biblioteca de aloca��o de texto por regi�o


int registro()
{
	printf("voc� escolheu registro de nomes!\n");
	system("pause");
	
	
}

int consulta()
{
	printf("voc� escolheu consultar nomes!\n");
	system("pause");
	
}

int deletar()
{
	printf("voc� escolheu deletar nomes!\n");
	system("pause");
	
}


int main()
{
	
	system("cls");
	
	setelocale(LC_ALL, "portuguese"); //definindo a linguagem
	
	printf("### Cart�rio da EBAC ###\n\n"); //inic�o do menu
	printf("Escolha a op��o desejada do menu!\n\n");
	printf("\t1 - Registrar nomes!\n");
	printf("\t2 - Consultar nomes!\n");
	printf("\t3 - Deletar nomes!\n\n");
	printf("op��o: "); 	
	
	
	
}


