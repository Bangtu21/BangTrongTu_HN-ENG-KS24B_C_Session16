#include<stdio.h>
int main(){
	int a=100;
	int *ptra=&a;
	printf("Cach 1:\n");
	printf("a la %d\n", *ptra);
	printf("Dia chi a la %d\n\n", ptra);
	printf("Cach 2:\n");
	printf("a la %d\n", a);
	printf("Dia chi a la %d\n", &a);
}
