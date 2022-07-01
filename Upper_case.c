#include<stdio.h>
#include<string.h>
int main(){
	char str1[10]="bim FirST";
	printf("Before conversion:%s",str1);
	printf("\nAfter conversion: %s",strupr(str1));
	return 0;
}
