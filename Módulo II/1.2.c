#include <stdio.h>
#include <string.h>

typedef struct produto{
    
    char nome[20];
    double preco;
    int quantidade;
}produto;

typedef struct CatalogoProduto
{
    produto catalogo[100];
    int total_produtos;

}CatalogoProduto;


void criaCatalogo(CatalogoProduto* c){

    c->total_produtos = 0;
}
void adicionaProduto(CatalogoProduto* c){

    if(c->total_produtos >= 100){

        printf("Catalogo cheio! \n");
        return;
    }   

    fgets(c->catalogo[c->total_produtos].nome, 20, stdin);
    scanf("%lf", &c->catalogo[c->total_produtos].preco);
    scanf("%d", &c->catalogo[c->total_produtos].quantidade);
    c->total_produtos++;
}

int verificaEstoque(CatalogoProduto* c, char* nome){

    for(int i = c->total_produtos - 1; i >= 0; i--){

        if(!strcmp(nome, c->catalogo[i].nome)){
            
            if(c->catalogo[i].quantidade > 0){

                return 1;
            }
            else{

                return 0;
            }
        }
    }

    return 0;
}

void imprimeCatalogo(CatalogoProduto* c){

    for(int i = 0; i < c->total_produtos; i++){

        printf("Nome: %s", c->catalogo[i].nome);
        printf("Valor: %.2lf\n", c->catalogo[i].preco);
        printf("Quantidade: %d\n", c->catalogo[i].quantidade);
        printf("\n");
    }
}

int main(){

    CatalogoProduto c;

    criaCatalogo(&c);
    adicionaProduto(&c);

    if(verificaEstoque(&c, "Bufo\n")){

        printf("Tem Bufo!\n");

    }    
    
    imprimeCatalogo(&c);

    return 0;
}