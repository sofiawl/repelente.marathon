#include <stdio.h>
#include <string.h>

int main(){
	long int n;

	scanf("%ld\n", &n);
	char s, t;

	long int i = n;
	long int iso = 0, normal = 0;
	while (i > 1){
		scanf("%c", &s);
		if (s == '*')
			iso++;
		i--;
	}

	scanf("%c\n", &s);
	if (s == '*')
		iso++;

	long int j = n;
	while (j > 0){
		scanf("%c", &t);
		if (t == '*')
			normal++;
		j--;
	}

	float dec = ((float)(iso) - (float)(normal))/(float)(iso);
	printf("%.2f\n", dec);

	return 0;
}
