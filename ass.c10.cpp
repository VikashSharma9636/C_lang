#include<stdio.h>



int main()
{
	
	int a=214;
	int b=245;
	int c=455;
	int d=214;
	int e=455;
	
	
	if(a!=d || b==c){
		printf("sin");
	}else if(e==c && b==d){
		printf("cos");
	}else if(e==d && d!=a){
		printf("ten");
	}else if(a!=b || c==d){
		printf("cot");
	}else if(a==d || c==e){
		printf("sec");
	}
}
