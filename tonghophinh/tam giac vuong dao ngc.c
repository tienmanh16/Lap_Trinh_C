#include<stdio.h>
int main() {
	int j,i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=n;j>0;j--){
			printf("*"); 
		} 
		printf("/n"); 
	} 
} 
