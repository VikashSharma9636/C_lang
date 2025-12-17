#include<stdio.h>


int main()
{
	
	int a=1;
	int b=4;
	int c=8;
	int d=10;
	int e=1;
	int f=4;
	
	if(a==d && a!=e){
		printf("pari");
	}else if(e==a && b!=c){
		printf("raja");
	}else if(d==c || e!=f){
		printf("harsh");
	}else if(f==b && d!=e){
		printf("ranu");
	}else if(a!=c || b==f){
		printf("annu");
	}
}
