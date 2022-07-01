#include<stdio.h>
#include<string.h>
int main(){
	char str1[10]="BIM FIRST";
	printf("Before conversion:%s",str1);
	printf("\nAfter conversion: %s",strlwr(str1));
	return 0;
}
