#include <stdio.h>
// recebendo um ponteiro, permite alterar seu valor na origem
void soma_um(int *n){
	//int *a -> estamos criando um ponteiro
	//* pode significar o conteudo do ponteiro
	*n = *n + 1;
}

// recebendo uma variavel ao inves de ponteiro acaba criando uma copia na memoria
int *soma_um_sem_ponteiro(int n){
	n += 48;
	printf("i %d %p\n", n, &n);
	return &n;
}

int main(){
	int i = 0;
	// o & significa o endereco na memoria de uma variavel. pode ser passada como ponteiro
	printf("i %d %p\n", i, &i);
	soma_um(&i);
	printf("i %d %p\n", i, &i);
	printf("n %p\n", soma_um_sem_ponteiro(i));
	printf("i %d %p\n", i, &i);
}

