#include<stdio.h>
void newElement(int *arr, int giaTri, int viTri){
	arr[viTri]=giaTri;
}
int main(){
	int arr[]={1,2,3,4,5,6,7,8,9};
	int length=sizeof(arr)/sizeof(int);
	printf("Mang ban dau:\n");
	for(int i=0; i<length; i++){
		printf("[%d]", arr[i]);
	}
	printf("\n");
	newElement(arr, 10, 4);
	printf("Mang sau khi them phan tu:\n");
	for(int i=0; i<length; i++){
		printf("[%d]", arr[i]);
	}
}
