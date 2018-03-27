#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct compra {
        int id;
        char Produto[200];
        char unid_Medida[2];
        float preco;
        int estoque;        
} produt;

int main() {
    produt produtos[12];
    int cont, cod, quant, opc, opcMax;
    float precoAux, precoFinal;
      
    opcMax = 2;

    //Cadastro 01
    produtos[0].id = 1;
    strcpy(produtos[0].Produto, "Desifetante 1.5L");
    strcpy(produtos[0].unid_Medida, "l");
    produtos[0].preco = 8.48;
    produtos[0].estoque = 20;
    
    //Cadastro 02
    produtos[1].id = 2;
    strcpy(produtos[1].Produto, "Bobom Garoto 8g");
    strcpy(produtos[1].unid_Medida, "g");
    produtos[1].preco = 0.80;
    produtos[1].estoque = 30;
    
    //Cadastro 03
    produtos[2].id = 3;
    strcpy(produtos[2].Produto, "Agua Mineral 250ml");
    strcpy(produtos[2].unid_Medida, "ml");
    produtos[2].preco = 3.00;
    produtos[2].estoque = 10;
    
    //Cadastro 04
    produtos[3].id = 4;
    strcpy(produtos[3].Produto, "COCA COLA 500ml");
    strcpy(produtos[3].unid_Medida, "ml");
    produtos[3].preco = 5.00;
    produtos[3].estoque = 30;
    
    //Cadastro 05
    produtos[4].id = 5;
    strcpy(produtos[4].Produto, "CERVEJA - PROIBIDA 1L");
    strcpy(produtos[4].unid_Medida, "l");
    produtos[4].preco = 7.90;
    produtos[4].estoque = 20;
    
    //Cadastro 06
    produtos[5].id = 6;
    strcpy(produtos[5].Produto, "Cafe 350g");
    strcpy(produtos[5].unid_Medida, "g");
    produtos[5].preco = 7,49;
    produtos[5].estoque = 50;
    
    //Cadastro 07
    produtos[6].id = 7;
    strcpy(produtos[6].Produto, "Mistura para Bolo 500g");
    strcpy(produtos[6].unid_Medida, "g");
    produtos[6].preco = 7.99;
    produtos[6].estoque = 10;
    
    //Cadastro 08
    produtos[7].id = 8;
    strcpy(produtos[7].Produto, "Feijao Preto 5kg");
    strcpy(produtos[7].unid_Medida, "kg");
    produtos[7].preco = 9.50;
    produtos[7].estoque = 10;
    
    //Cadastro 09
    produtos[8].id = 9;
    strcpy(produtos[8].Produto, "Farinha de mandioca 1kg");
    strcpy(produtos[8].unid_Medida, "kg");
    produtos[8].preco = 5.08;
    produtos[8].estoque = 20;
    
    //Cadastro 10
    produtos[9].id = 10;
    strcpy(produtos[9].Produto, "Maionese 500g");
    strcpy(produtos[9].unid_Medida, "g");
    produtos[9].preco = 5.52;
    produtos[9].estoque = 20;
    
    //Cadastro 11
    produtos[10].id = 11;
    strcpy(produtos[10].Produto, "Margarina 500g");
    strcpy(produtos[10].unid_Medida, "g");
    produtos[10].preco = 3.30;
    produtos[10].estoque = 20;
    
    //Cadastro 12
    produtos[11].id = 12;
    strcpy(produtos[11].Produto, "Requeijao cremoso 250g");
    strcpy(produtos[11].unid_Medida, "g");
    produtos[11].preco = 7.30;
    produtos[11].estoque = 30;
    
    
    //Menu 
     while (opcMax == 2) {
            precoAux = 0;
            opc = 1;
            precoFinal = 0;
            
            while (opc == 1) {        
                system("cls");
                printf ("***************************************\n");
                printf ("|         PRODUTOS DISPONIVEUS         |\n");
                printf ("***************************************\n");
                
                for (cont = 0; cont <= 11; cont++) {
                    printf ("Codigo: %i    Produto: %s \n", produtos[cont].id, produtos[cont].Produto);    
                }
        
                printf ("\n\nDigite o codigo do produto que deseja compraf:\n ");
                scanf ("%i", &cod);
                printf ("O produto eh: %s \n", produtos[cod-1].Produto);
                
                printf ("\n\nDigite a quantidade que deseja comprar:\n ");
                scanf ("%i", &quant);
        
                if (quant > produtos[cod-1].estoque) {
                   printf ("\n\nNÃO ha no estoque!!\n\n");
                        
                } else {
                  printf ("\n\nO valor de uma unidade do produto eh: R$ %.2f \n", produtos[cod-1].preco);
                  precoAux = produtos[cod-1].preco * quant;
                  printf ("\n\nO valor final do produto eh: R$ %.2f \n", precoAux);
                  
                  produtos[cod-1].estoque = produtos[cod-1].estoque - quant;
                  precoFinal = precoFinal + precoAux;       
                }         
                                       
                printf ("\n\nDeseja adicionar mais produtos? [1] Sim  [2] Nao \n");
                scanf ("%i", &opc);
            }
            
            printf ("\n\nO Valor total da compra eh: R$ %.2f\n", precoFinal);
            
            printf ("\n\nDeseja finalizar sair do programa? [1] Sim [2] Nao\n");
            scanf ("%i", &opcMax);
        }
            getch();   
}

