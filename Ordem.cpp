#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int quantidadeNos = 0;

typedef struct _no{
        int chave;
        int cont;
        
        struct _no *esq, *dir, *pai;
        }no;

no* auxPai = NULL;

void vaziaArvore(no *raiz){
    if (raiz == NULL){
             printf("   A arvore esta vazia\n\n");
             }
             else {
                  printf("   A arvore nao esta vazia\n\n");
                  }
    }
        
void insere (int x, no **p){
      
      if (*p==NULL){
                    *p=(no *)malloc(sizeof(no));
                    (*p)->chave=x;
                    (*p)->dir=NULL;
                    (*p)->esq=NULL;
                    (*p)->pai = auxPai;
                    (*p)->cont=0;
                    (*p)->cont++;
      }
      else{
            if (x<(*p)->chave){
                if((*p)->esq == NULL)
                    auxPai = *p;
                insere(x, &(*p)->esq);
            }
            if(x>(*p)->chave){
                if((*p)->dir == NULL)
                    auxPai = *p;               
                insere(x, &(*p)->dir);
            }
            if(x == (*p)->chave){
                (*p)->cont++;
                return;
            }
      }
}

void imprime(no *p, int nivel){
     int i;
     if(p == NULL)
        return;
     imprime(p->dir, nivel+1);
     for(i=0;i<nivel;i++)
        printf("      ");
     printf("%6d\n\n",p->chave);
     imprime(p->esq,nivel+1);
     
}

void preordem (no *arvore){
     if(arvore != NULL){
          printf("%d\n",arvore->chave);
          preordem(arvore->esq);
          preordem(arvore->dir);
     }
}

void emordem(no *arvore){
     if(arvore != NULL){
           emordem(arvore->esq);
           printf("%d\n",arvore->chave);
           emordem(arvore->dir);
     }
}

void posordem(no *arvore){
     if(arvore != NULL){
                 posordem(arvore->esq);
                 posordem(arvore->dir);
                 printf("%d\n",arvore->chave);
     }
}                  
 int menu(){
           int op;
           printf("\n>>>>>>>>>>MENU<<<<<<<<<<\n\n");
           printf("1 - Inserir valor\n");
           printf("2 - Imprimir pre ordem\n");
           printf("3 - Imprimir en-ordem\n");
           printf("4 - Imprimir pos ordem\n");        
           printf("5 - Sair\n\n>>>>>>>>>>MENU<<<<<<<<<<\n\n\n");
           printf("Digite sua opcao: ");
           scanf("%d", &op);
           return op;
           }
int main(){
    int n,a,b;
    no *raiz, *aux;
    raiz = NULL;
    int opcao;
    
    while(opcao!=5){
    system("cls");
    opcao = menu();
    switch(opcao){
                  
                  case 1:
                       system("cls");
                       printf("\n>>>>>>>>>>>>><<<<<<<<<<<<<\n\n");
                       printf("Digite -1 para terminar\n");
                       printf("\n>>>>>>>>>>>>><<<<<<<<<<<<<\n\n");
                       do{
                            printf("Digite um numero: ");
                            scanf("%d", &n);
                            if(n!= -1){
                            insere(n, &raiz);                             
                            }
                       }while (n!=-1);
                       system("cls");
                       printf("|--------------------------|\n");
                       printf("|    ( ARVORE BINARIA )    | \n");
                       printf("|--------------------------|\n");
                       imprime(raiz,0);
                       printf ("Digite ENTER para retornar ao menu.");
                       getch();
                       break;
                  case 2:
                       system("cls");
                       printf("\n>>>>>>>>>>>>><<<<<<<<<<<<<\n\n");
                       printf("------> Pre-Ordem <------\n");
                       printf("\n>>>>>>>>>>>>><<<<<<<<<<<<<\n\n");
                       preordem(raiz);
                       getch();
                       break;
                  case 3:
                       system("cls");
                       printf("\n>>>>>>>>>>>>><<<<<<<<<<<<<\n\n");
                       printf("------> Em-Ordem <------\n");
                       printf("\n>>>>>>>>>>>>><<<<<<<<<<<<<\n\n");
                       emordem(raiz);
                       getch();
                       break;
                  case 4:
                       system("cls");
                       printf("\n>>>>>>>>>>>>><<<<<<<<<<<<<\n\n");
                       printf("------> Pos-Ordem <------\n");
                       printf("\n>>>>>>>>>>>>><<<<<<<<<<<<<\n\n");
                       posordem(raiz);
                       getch();
                       break;
                  case 5:                       
                       exit(0);
                       break;
                  
                  default :
                       system("cls");
                       printf("opcao nao existe! tente novamente");
                       getch();
                       break;   
                  } 
                    }

    system("PAUSE");
    return 0;

}
