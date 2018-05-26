/* Aluno: Mateus Augusto Ferreira Almeida
Matricula: 11811EEL023 */

#include<stdio.h>

int soma(int*,int*);
int main(){
	float media,s;
	int vet[20];
	int i,j,k;
	int tam=sizeof(vet)/sizeof(int);
	int *pa=vet,*pb=vet+tam-1;
	printf("Quantidade de numeros a digitar [5 a 20]: ");
	scanf("%d ",&k);
	for(j=0;j<20;j++)
		vet[j]=0;
	for(i=0;i<k;i++){
		scanf("%d",&vet[i]);
	}getchar();
	s=soma(pa,pb);
	media=s/k;
	printf("A media: %.2f, a soma: %d",media,soma(pa,pb));
	return 0;
}

int soma(int *pa, int *pb) {
return (*pb) + ((pb == pa) ? 0 : soma(pa, pb-1));
}

