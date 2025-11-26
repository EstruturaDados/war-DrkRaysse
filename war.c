#include <stdio.h>
#include <string.h>

struct Territorio {
     char nome [30];
     char cor[10];
     int tropas;
};

int main() {
    //declarando um vetor de struct para guardar 5 territorios 
    struct Territorio territorios [5];
    int i;

    printf("=== CADASTRO DE TERRITORIOS=== \n\n");

    //entrada dos dados
    //loop para preencher os dados
    for (i=0; i<5; i++) {
        printf("cadastrando o territorio %d de 5:\n", i + 1);

        //leitura do nome
        printf("Digite o nome do territorio: ");

        // função para limpar buffer e ler nomes compostos
        scanf(" %[^\n]", territorios [i].nome);

        //leitura da cor
        printf("Digite a cor do exercito: ");
               scanf(" %[^\n]", territorios[i].cor);

        //leitura de tropas
        printf("Digite o numero de tropas: ");
               scanf("%d", &territorios[i].tropas);


               printf("----------------------------------------\n");
    }

    //exibindo os dados

       printf("\n=== Relatorio de territorios cadastrados===\n");

       //loop para vetor

       for (i=0; i<5; i++) {
        printf("Territorio %d:\n", i + 1);
        printf("nome: %s\n", territorios[i].nome);
        printf("cor do exercito: %s\n", territorios[i].cor);
        printf("numero de tropas: %d\n", territorios[i].tropas);
               printf("------------------------------------------\n");
}

return 0;

}

