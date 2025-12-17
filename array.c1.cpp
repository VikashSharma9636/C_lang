#include<stdio.h>


int main(){
	
	int arr[5]={1,2,3,4,5};
	
	printf("size of array before: %d\n", sizeof(arr) / sizeof(int));
	
	arr[6];
	
	printf("size of array after: %d\n", sizeof(arr) / sizeof(int));
	
	
	
	
}
