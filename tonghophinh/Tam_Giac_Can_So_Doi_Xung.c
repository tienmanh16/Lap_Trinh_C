#include <stdio.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
    	for(i=0;i<n;i++){
	
	
		for(j=n-i;j>1;j--){
			printf("  "); 
			break; 
		} 
	}
	printf("1"); 
	
	printf("\n"); 
	for(i=0;i<n;i++){
	
	
		for(j=n-i;j>1;j--){
			printf("  "); 
		} 
		
		for(j=i+1;j<2*i+2;j++){
		
			printf("%d ",j); 
		
		} 
		for(j=2*i;j>i;j--){
			printf("%d ",j); 
		}
		printf("\n"); 
	}
} 
 
/*i=0--1-2=i+2 
i=1--2-4=i+3 
i=2--3-6=i+4 */
