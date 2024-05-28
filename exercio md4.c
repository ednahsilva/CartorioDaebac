#include <stdio.h> //Biblioteca de comunicação com usuário
#include <stdlib.h> //Biblioteca de alocação de espaço em memória
#include <locale.h> //Biblioteca de alocação de texto por região


int registro()
{
	printf("você escolheu registro de nomes!\n");
	system("pause");
	
	
}

int consulta()
{
	printf("você escolheu consultar nomes!\n");
	system("pause");
	
}

int deletar()
{
	printf("você escolheu deletar nomes!\n");
	system("pause");
	
}


int main()
{
	
	system("cls");
	
	setelocale(LC_ALL, "portuguese"); //definindo a linguagem
	
	printf("### Cartório da EBAC ###\n\n"); //inicío do menu
	printf("Escolha a opção desejada do menu!\n\n");
	printf("\t1 - Registrar nomes!\n");
	printf("\t2 - Consultar nomes!\n");
	printf("\t3 - Deletar nomes!\n\n");
	printf("opção: "); 	
	
	
	
}


