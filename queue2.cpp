//queue2.c

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//Quantidade máxima de elementos da fila
#define MAXFILA 6

//Registro da Fila (A struct TFila "se torna um tipo de variável", pois você pode criar 
//várias "váriaveis" com as mesmas caracteristicas)
struct TFila {
	int front;
	int rear;
	int fila[MAXFILA];
} Fila;

//Criando as variáveis fil1 e fil2 do tipo TFila
TFila fil1, fil2; 
//No caso desse exercicio, estou usando apenas a variavel fil1, mas poderia usar a fil2 sem 
//problemas;

//Método de Configurar a fila
void create () {
	fil1.front = 0;
	fil1.rear = -1;
}

//Verificação se a fila está vazia
int isEmpty() {
	return (fil1.rear < fil1.front);
}

//Verificação se a fila está cheia
int isFull() {
	return (fil1.rear == MAXFILA - 1);
}

//Inserindo um elemento na fila
void enqueue(int x) {
	fil1.fila[++fil1.rear] = x;
}

//Retirando um elemento na fila
char dequeue() {
	int i;
	char x = fil1.fila[0];
	for (i = 0; i < fil1.rear; i++) {
		fil1.fila [i] = fil1.fila[i + 1];
	}
	fil1.rear--;
	return x;
}

int main () {
	int opt, val, i;	
	//Iniciando a fila
    create();
	
	while (opt != 4) {
		system( "cls");
		printf ("Operacoes em fila\n\n");
		printf ("1. Enfileirar\n");
		printf ("2. Desenfileirar\n");
		printf ("3. Listar\n");
		printf ("4. Finalizar\n\n");
		printf ("Escolha uma das opcoes: ");
		scanf ("%i", &opt);
			
		switch(opt) {
			//Inserindo um elemento na Fila
            case 1:
				printf ("\nInforme o valor a enfileirar: ");
				scanf (" %c", &val);
				if (isFull()) {
					printf ("\nFila Cheia!");
				} else {
					enqueue(val);
					printf ("\n %c enfileirado", val);
				}
				break;
				
                //Retirando um elemento na Fila	
				case 2:
					if (!isEmpty()) {
						val = dequeue();
						printf ("\n %c desenfileirado.", val);
					} else {
						printf ("\nFila Vazia!!");
					}
					break;
				
                //Listando os elementos da Fila	
				case 3:
					printf ("\n\nItens da fila:\n");
					for (i = fil1.front; i <= fil1.rear; i++) {
						printf ("%i: %c\n", i, fil1.fila[i]);
					}
					break;
			}
			getch();
	}
}
