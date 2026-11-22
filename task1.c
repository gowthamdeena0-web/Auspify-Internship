//Simple Calculator Program
#include<stdio.h>
void add(int,int);
void sub(int,int);
void mul(int ,int);
void div(int ,int);
int main(){
	int op,a,b;
label:printf("Calculator Menu Options\n");
	printf("1)Addition 2)Subraction 3)Multiplication 4)Division 5)Exit \n");
	printf("Enter the option:\n");
	scanf("%d",&op);
	switch(op){
		case 1: 
			printf("Enter two numbers:\n");
			scanf("%d %d",&a,&b);
			add(a,b);
			goto label;
		case 2: 
			printf("Enter two numbers:\n");
			scanf("%d %d",&a,&b);
			sub(a,b);
			goto label;
		case 3: 
			printf("Enter two numbers:\n");
			scanf("%d %d",&a,&b);
			mul(a,b);
			goto label;
		case 4: 
			printf("Enter two numbers:\n");
			scanf("%d %d",&a,&b);
			div(a,b);
			goto label;
		case 5:printf("Exiting.......\n");break;
		default:
		printf("Please Enter a valid option..........\n");
	}
}
void add(int a,int b){
	int c;
	c=a+b;
	printf("Addition Result is:%d\n",c);
}
void sub(int a,int b){
	int res;
	res=a-b;
	printf("Subraction Result is:%d\n",res);
}
void mul(int a,int b){
	int res1;
	res1=a*b;
	printf("Multiplication Result is:%d\n",res1);
}
void div(int a, int b){
	int res2;
	res2=a/b;
	printf("Division Result is:%d\n",res2);
}

