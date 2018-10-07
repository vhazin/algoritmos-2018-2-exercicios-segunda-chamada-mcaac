//Exercício Árvore Binária

#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    struct no *esq;
    struct no *dir;
    int valor;
}no;

void inserir(no **raiz, int info){
    if(*raiz == NULL){
        no *aux=(no *)malloc(sizeof(no));
        aux->valor = info;
        aux->dir = NULL;
        aux->esq = NULL;
        *raiz= aux;
        return;
    }
    if(info<(*raiz)->valor){
        inserir(&(*raiz)->esq,info);
        return;
    }
    if(info>(*raiz)->valor){
        inserir(&(*raiz)->dir,info);
        return;
    }
}

void pos_ordem(no *raiz){
    if(raiz!=NULL){
        pos_ordem(raiz->esq);
        pos_ordem(raiz->dir);
        printf(" %d",raiz->valor);

    }
}
void pre_ordem(no *raiz){
    if(raiz!=NULL){
        printf(" %d",raiz->valor);
        pre_ordem(raiz->esq);
        pre_ordem(raiz->dir);
        
    }
}
void in_ordem(no *raiz){
    if(raiz!=NULL){
        in_ordem(raiz->esq);
        printf(" %d",raiz->valor);
        in_ordem(raiz->dir);

    }
}

int x=0, z=0, j, i, n,info;
int main(){
    
    scanf("%d",&j);
    
    while(z<j){
        i=0;
        x=0;
        scanf("%d",&i);
        no *raiz=NULL;
        while(x<i){
            scanf("%d",&info);
            inserir(&raiz,info);
            x++;
        }
        printf("Case %d:",(z+1));
        printf("\nPre.:");
        pre_ordem(raiz);
        printf("\nIn..:");
        in_ordem(raiz);
        printf("\nPost:");
        pos_ordem(raiz);
        printf("\n");
        printf("\n");
    z++;
    }
    

}
