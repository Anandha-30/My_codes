#include<stdio.h>
int main(){
	int i;
	int num[10];
	for(i=1;i<=10;i++){
		num[i-1]=i*2;
	}
	for(int i=0;i<10;i++){
		printf("%d\n",num[i]);
	}
	return 0;
}