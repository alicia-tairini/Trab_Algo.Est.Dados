// Alicia Tairini            5º serie 

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int main () {

    char caracter[300];   
    int cont, opc;
    opc = 1;
    
    while (opc == 1) {          
        for (cont = 0; cont <= 300; cont++) {
            caracter[cont] = ' ';    
        }
        
        system("CLS");
        printf (" *******************************************\n");
        printf ("| Selecione uma opcao:                      |\n");
        printf ("| 1 - Decifrar uma mensagem                 |\n");
        printf ("| 2 - Sair do Programa                      |\n");
        printf (" *******************************************\n");
        scanf ("%d",&opc);    
        
        system("CLS");
       
           if (opc == 1) {
             system("CLS");
             printf ("Digite a mensagem que deseja decifrar:\n");
            
             fflush(stdin);
             	scanf ("%[^\n]",caracter);
             	printf ("\n");
             	printf ("A mensagem descifrada eh:\n"); 
   		    	printf ("\n");
   				
             //decifrando a mensagem
             for (cont = 0; cont <= 500; cont++) {
               if (caracter[cont] == ' ' || caracter[cont] == ' ') {
                  printf (" ");             
               } else if (caracter[cont] == 'A' || caracter[cont] == 'a') {
                      printf ("B");
                   } else if (caracter[cont] == 'B' || caracter[cont] == 'b') {
                      printf ("C");
                   } else if (caracter[cont] == 'C' || caracter[cont] == 'c') {
                      printf ("D");
                   } else if (caracter[cont] == 'D' || caracter[cont] == 'd') {
                      printf ("E");
                   } else if (caracter[cont] == 'E' || caracter[cont] == 'e') {
                      printf ("F");
                   } else if (caracter[cont] == 'F' || caracter[cont] == 'f') {
                      printf ("G");
                   } else if (caracter[cont] == 'G' || caracter[cont] == 'g') {
                      printf ("H");
                   } else if (caracter[cont] == 'H' || caracter[cont] == 'h') {
                      printf ("I");
                   } else if (caracter[cont] == 'I' || caracter[cont] == 'i') {
                      printf ("J");
                   } else if (caracter[cont] == 'J' || caracter[cont] == 'j') {
                      printf ("K");
                   } else if (caracter[cont] == 'K' || caracter[cont] == 'k') {
                      printf ("L");
                   } else if (caracter[cont] == 'L' || caracter[cont] == 'l') {
                      printf ("M");
                   } else if (caracter[cont] == 'M' || caracter[cont] == 'm') {
                      printf ("N");
                   } else if (caracter[cont] == 'N' || caracter[cont] == 'n') {
                      printf ("O");
                   } else if (caracter[cont] == 'O' || caracter[cont] == 'o') {
                      printf ("P");
                   } else if (caracter[cont] == 'P' || caracter[cont] == 'p') {
                      printf ("Q");
                   } else if (caracter[cont] == 'Q' || caracter[cont] == 'q') {
                      printf ("R");
                   } else if (caracter[cont] == 'R' || caracter[cont] == 'r') {
                      printf ("S");
                   } else if (caracter[cont] == 'S' || caracter[cont] == 's') {
                      printf ("T");
                   } else if (caracter[cont] == 'T' || caracter[cont] == 't') {
                      printf ("U");
                   } else if (caracter[cont] == 'U' || caracter[cont] == 'u') {
                      printf ("V");
                   } else if (caracter[cont] == 'V' || caracter[cont] == 'v') {
                      printf ("W");
                   } else if (caracter[cont] == 'W' || caracter[cont] == 'w') {
                      printf ("X");
                   } else if (caracter[cont] == 'X' || caracter[cont] == 'x') {
                      printf ("Y");
                   } else if (caracter[cont] == 'Y' || caracter[cont] == 'y') {
                      printf ("Z");
                   } else if (caracter[cont] == 'Z' || caracter[cont] == 'z') {
                      printf ("A");
                   }
               }
                   printf ("\n");
                   printf ("Deseja decifrar outra mensagem? [1]-Sim  [2]-Não \n");
                   scanf ("%d",&opc);  
           }
        }
        system("CLS");
        getch();
    }
