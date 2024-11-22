#include <stdio.h>

int main(){
	int number1,number2,number3;
	printf("Nhap vao so thu nhat:");
	scanf("%d",&number1);
	printf("Nhap vao so thu hai:");
	scanf("%d",&number2);
	printf("Nhap vao so thu ba:");
	scanf("%d",&number3);
	if( (number3<number1 && number3>number2) || (number3>number1 && number3<number2)){
		printf ("So %d nam giua so %d va %d",number3,number1,number2);
	}else{
		printf ("So %d khong nam giua so %d va %d",number3,number1,number2);
		}
	return 0;
}
