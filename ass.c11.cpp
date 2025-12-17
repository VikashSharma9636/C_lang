#include<stdio.h>


int main()
{
	
	int a=24;
	int b=44;
	int c=45;
	int d=24;
	
	
	if(a==b && b==c){
		printf("ram");
	}else if(b==d || c==b){
		printf("shyam");
	}else if(d==a && b!=c){
		printf("pratap");
	}else if(a!=b && a==b){
		printf("power");
	}else if(a==b || b==c){
		printf("energy");
	}else if(a==d && b!=c){
		printf("drama");
	}
}
