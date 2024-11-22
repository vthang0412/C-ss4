#include <stdio.h>

int main(){
	int number;
	printf("Nhap vao so nguyen:");
	scanf("%d",&number);
	if (number%2==0){
		printf("Day la so chan",number);
	}else{
		printf("Day la so le",number);
	}
	
	
	
	return 0;
}
