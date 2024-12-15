#include<stdio.h>
int timPhanTu(int *arr, int search, int length){
	for(int i=0; i<length; i++){
		if(arr[i]==search){
			return i;
		}
	}
	return 1;
}
int main(){
	int arr[]={1,2,3,4,5,6,7,8,9};
	int length=sizeof(arr)/sizeof(int);
	int search=5;
	int viTri=timPhanTu(arr, search, length);
	if(viTri!=1){
		printf("phan tu %d co vi tri %d", search, viTri);
	}else{
		printf("Khong tim thay");
	}
}
