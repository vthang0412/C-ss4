#include <stdio.h>

int main(){
	int number;
	printf("Nhap vao so can tim la so am hay duong:");
	scanf("%d",&number);
	if(number>0){
		printf("Day la so duong",number);
	}else{
		printf("Day la so am",number);
	}
	
	
	
	return 0;
}
