#include <stdio.h> // lib de entrada e saida de dados do C
#include <stdlib.h> // usar isso no windows para nao fechar o programa apos rodar 

// funcao principal 
int main() {
  //printf("Hello, World! \n ");

  /*int n1 = 20;
  int n2 = 10;
  int n3 = 5;

  char time[] = "coringao"; // devo criar sempre um array de character para escrever "string" em C
  float torcida = 35.00;

  printf(" --------------------- ---------------- \n ");
  printf("o valor do numero um é: %d \n----------------- \n", n1), 
  printf("o valor do numero dois é: %d \n----------------- \n", n2),
  printf("o valor do numero tres é: %d \n----------------- \n", n3);
  printf("o nome do meu time é: %s  \n-------------------\n", time);
  printf("e temos mais de %2.f milhoes de torcedores! \n", torcida); // %2.f (2.f - duas casas decimais)
  printf("-------------------------- \n");
  */

// boletim ficticio de um aluno escolar
  printf(" -------- Bem-vindo ao gerenciador de boletins escolares! ---------\n");

  int numero_aluno;
  float nota;
  char situacao;
// esse "&" antes da varial significa -> endereco de memoria
  printf("Informe a situacao final do aluno: \n");
  scanf("%c", &situacao);

  printf("Digite o numero do aluno: \n");
  scanf("%d", &numero_aluno);

  printf("Digite a nota do aluno: \n");
  scanf("%f", &nota);
  printf("-----------");
  

 



  system("pause"); // usar isso no windows para nao fechar o programa apos rodar 
  return 0; // diz que o programa rodou com sucesso
}
