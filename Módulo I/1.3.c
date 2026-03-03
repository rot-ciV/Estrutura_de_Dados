#include <stdio.h>
#include <string.h>

struct Aluno{

    char *nome;
    int matricula;
    float nota;
};

/**
 * @brief Imprime as informações do aluno com maior e menor nota.
 * @param aluno Ponteiro para o vetor de alunos (struct Aluno*).
 */
void ImprimeAlunos(struct Aluno* aluno){

    int maior = 0, menor = 0;

    for(int i = 1; i < 3; i++){

        if(aluno[maior].nota < aluno[i].nota){

            maior = i;

        }else if(aluno[menor].nota > aluno[i].nota){

            menor = i;
        }
    }

    printf("Informações do aluno com maior nota:\n");
    printf("Nome: %s\n", aluno[maior].nome);
    printf("Nota: %.2f\n", aluno[maior].nota);
    printf("Matrícula: %d\n", aluno[maior].matricula);

    printf("\nInformações do aluno com menor nota:\n");
    printf("Nome: %s\n", aluno[menor].nome);
    printf("Nota: %.2f\n", aluno[menor].nota);
    printf("Matrícula: %d\n", aluno[menor].matricula);
}

int main(){

    struct Aluno aluno[3];

    aluno[0].nome = "EnzoGames\0";
    aluno[0].nota = 5.5;
    aluno[0].matricula = 7007;

    aluno[1].nome = "CiroGomez\0";
    aluno[1].nota = 8.2;
    aluno[1].matricula = 7010;

    aluno[2].nome = "Bolsonara";
    aluno[2].nota = 3;
    aluno[2].matricula = 1722;


    ImprimeAlunos(aluno);

    return 0;
}