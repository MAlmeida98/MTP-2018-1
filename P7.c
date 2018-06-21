/* Aluno: Mateus Augusto Ferreira Almeida
Matricula: 11811EEL023 */


#include <stdio.h>
 
int ackermann(int i, int j) {
	if (i == 0)
		return j + 1;
	if ((j == 0)&&(i>0))
		return ackermann(i - 1, 1);
	if ((j>0)&&(i>0))
		return ackermann(i - 1, ackermann(i, j - 1));
}
int main() {
	
	int i,j;
	
	printf("Digite o valor para i: ");
	scanf("%d", &i);
	printf("Digite o valor de j: ");
	scanf("%d", &j);
	printf("%d", ackermann(i, j));
    
  }

 
