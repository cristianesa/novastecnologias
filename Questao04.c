#include <stdio.h>

int main() {
    
  printf("Calculo de maior e menor nota da turma\n");
  printf("Digite o numero de alunos: ");
  scanf("%d", &n);
  
   
  while (contador <  n) {
    printf("Digite uma nota (0 a 100): "); 
    scanf("%d", nota);
    contador = contador + 1;
    if (notamaior < nota)
      notamaior = nota;
    if (notamenor > nota)
      notamenor = nota;
  }
  
  printf("A maior nota obtida: %d\n", notamaior);
  printf("A menor nota obtida: %d\n", notamenor);
  
  return 0;	
}
