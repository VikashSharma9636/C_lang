#include<stdio.h>

int main(){
	
	int arr[5] = { 5 ,10 ,15 ,20 ,25};
	
	arr[2]=50;
	
	printf("elements:");
	
	for(int i=0;i<=5;++i){
		
		printf("%d",arr[i]);
	}
}
