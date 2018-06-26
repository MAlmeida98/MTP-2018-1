// Aluno: Mateus Augusto Ferreira Almeida
// Matricula: 11811EEL023


#include < stdio.h >
#include < stdlib.h >

void  gera_numeros ( float * vetor, int tam)
{
	int i;
	float num;

	para (i = 0 ; i <tam; i ++)
		vetor [i] = ( float ) rand () / ( flutuante ) RAND_MAX + 0 . 5f ;
}

float  reduce ( flutuação * pini, float * pfim, float (* funcao) ( float , float ))
{
	retorno (pini == pfim)? 1 : (* funcao) (* pini, reduzir (pini + 1 , pfim, funcao));
}

float  soma ( flutuar a, flutuar b)
{
	return a + b;
}

float  multiplicacao ( float a, float b)
{
	return a * b;
}

int  main ()
{
	srand ( 123456 );
	vetor flutuante [ 100 ];
	int op;

	gera_numeros (vetor, 100 );
	printf ( " 1 - Somatorio \ n 2 - Produtorio \ n " );
	scanf ( " % d " , & op);
	getchar ();

	if (op == 1 )
		printf ( " % f \ n " , reduzir (vetor, vetor + 100 , soma) - 1 );
	else  if (op == 2 )
		printf ( " % f \ n " , reduzir (vetor, vetor + 100 , multiplicação));

	return  0 ;
}
