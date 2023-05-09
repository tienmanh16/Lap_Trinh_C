
#include<stdio.h>
int main() {
	int i,j,n,k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=1;j<n-i;j++){
			printf("  "); 
		} 
		
		for(j=1;j<2*i+2;j++){
		
			printf("* "); 
		} 
		printf("\n"); 
	}
} 
/*1-10
2-9
3-8*/ 

 

