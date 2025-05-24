#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	long int num;
	long int bin = 0;
	int mul = 1;

	scanf("%ld", &num);

	int n = floor(log2(num)) + 1;

	char *vet = malloc (sizeof (char) * n);

	int i = n-1;
	while(num > 0){
		bin = num % 2;
		vet[i] = bin;
		num = num/2;
		i--;
	}	
	
	for (int i = 0; i < n; i++)
		printf ("%d", vet[i]);

	printf ("\n");

	return 0;
}
