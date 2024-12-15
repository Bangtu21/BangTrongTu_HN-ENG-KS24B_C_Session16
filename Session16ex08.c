#include<stdio.h>
#include<string.h>
void str(char *inputString, char *reveserString){
	int length=strlen(inputString);
	int j=0;
	for(int i=length-1; i>=0; i--){
		reveserString[j]=inputString[i];
		j++;
	}
}
int main(){
	char inputString[100];
	char reveserString[100];	
	printf("Ban hay nhap vao mot chuoi: ");
	fgets(inputString, sizeof(inputString), stdin);	
	str(inputString, reveserString);
	printf("Chuoi ban dau: %s", inputString);
	printf("Chuoi da dao nguoc: %s", reveserString);
}


