#include <stdio.h>
#include <stdlib.h>


typedef struct arvore {
char info;
struct arvore *esq;
struct arvore *dir;
} Arvore;

Arvore* cria_arv_vazia (void) {
return NULL;
}

Arvore* constroi_arv (char c, Arvore *e, Arvore *d) {
Arvore *no = (Arvore*)malloc(sizeof(Arvore));
no->info = c;
no->esq = e;
no->dir = d;
return no;
}

Arvore* imprimipreordem (Arvore *a){

    if (a!=NULL){
    printf("%c",a->info);
    printf("%c",imprimipreordem(a->esq));
    printf("%c",imprimipreordem(a->dir));

    }
}

Arvore* imprimiinordem (Arvore *a){

    if (a!=NULL){
    printf("%c",imprimiinordem(a->esq));
    printf("%c",a->info);
    printf("%c",imprimipreordem(a->dir));

    }
}

Arvore* imprimiposordem (Arvore *a){

    if (a!=NULL){
    printf("%c",imprimipreordem(a->esq));
    printf("%c",imprimipreordem(a->dir));
    printf("%c",a->info);


    }
}


int main()
{
    Arvore *a = constroi_arv ('a',
 constroi_arv('b',
cria_arv_vazia(),
constroi_arv('d',cria_arv_vazia(),cria_arv_vazia())
),
constroi_arv('c',
constroi_arv('e',cria_arv_vazia(),cria_arv_vazia()),
constroi_arv('f',cria_arv_vazia(),cria_arv_vazia())
));



imprimipreordem(a);
printf("\n");
imprimiinordem(a);
printf("\n");
imprimiposordem(a);


return 0;

}
