#include<stdio.h>
void bubble(int *arr, int length){
	for(int i=0; i<length-1; i++){
		for(int j=i+1; j<length; j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
int main(){
	int arr[]={6,5,7,4,8,3,9,2,1};
	int length=sizeof(arr)/sizeof(int);
	printf("Mang ban dau:\n");
	for(int i=0; i<length; i++){
		printf("[%d]", arr[i]);
	}
	printf("\n");
	bubble(arr, length);
	printf("Mang sap xep bang bubble:\n");
	for(int i=0; i<length; i++){
		printf("[%d]", arr[i]);
	}
}
