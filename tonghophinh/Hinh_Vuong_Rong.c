#include<stdio.h>
int main() {
int h=10; 
printf("\nPattern (e)\n");
for (int i = 1; i<=h;i++) {
for (int j=1 ;j<=h;j++)
if (i==1 || i==h)
printf("# ");
else
if (j==1 || j==h)
printf("# ");
else
printf("  ");
printf("\n");
}
}
