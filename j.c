#include <stdio.h>
#include <stdlib.h>

long int percorre(long int *filtros, long int i, long int k, long int n){
	long int fase = filtros[i];

	i = (i + 1) % n;
	fase += k;
	while (fase <= filtros[i]){
		fase += k;
		i = (i + 1) % n;
	}

	return i;
}

int main(){
	long int n, k;
	scanf("%ld %ld", &n, &k);

	long int *filtros = malloc(n * sizeof(long int));
	for(long int i = 0; i < n; i++)
		scanf("%ld", &filtros[i]);

	long int *B = malloc(n * sizeof(long int));

	for(long int i = 0; i < n; i++){
		B[i] = percorre(filtros, i, k, n) + 1;
		printf("%ld ", B[i]);
	}
	printf("\n");

	free(filtros);
	free(B);
	return 0;
}
