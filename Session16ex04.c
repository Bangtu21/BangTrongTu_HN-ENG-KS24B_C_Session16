#include<stdio.h>
void in(int *arr, int *length){
	for(int i=0; i<length; i++){
		printf("[%d]=%d\n", i, *(arr+i));
	}
}
int main(){
	int arr[]={1,2,3,4,5,6,7,8,9};
	int length=sizeof(arr)/sizeof(int);
	in(arr, length);
}
