#include<stdio.h>


int main(){
	
	
	int a=45;
	int b=66;
	int c=56;
	
	
	if(a==b && b!=c){
		printf("true");
	}else if(a!=b && b==c){
		printf("false");
	}else if(a!=b || b==c){
		printf("right");
	}else{
		printf("rong");
	}
}
