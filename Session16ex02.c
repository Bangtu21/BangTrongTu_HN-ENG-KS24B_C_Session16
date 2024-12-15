#include<stdio.h>
void swap(int *a, int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int a=10;
	int b=20;
	printf("Truoc khi doi:\n");
	printf("a=%d, b=%d", a, b);
	swap(&a, &b);
	printf("\nSau khi doi:\n");
	printf("a=%d, b=%d", a, b);
}
