#include <stdio.h>

int main(){
	int dientieuthu, kWh1, kWh2;
	float tiendien; 
	 printf("so dien dau thang: ");
	 scanf("%d", &kWh1);
	 printf("so dien cuoi thang: ");
	 scanf("%d", &kWh2);
	dientieuthu= kWh2 - kWh1; 
	if(0 < dientieuthu && dientieuthu <50 ){
		tiendien= dientieuthu * 10000; 
		printf("tien dien tieu thu trong thang cua ho gia dinh la: %.2f VND\n", tiendien); 
	}else if (50 <= dientieuthu && dientieuthu <100){
		tiendien= dientieuthu * 15000; 
		printf("tien dien tieu thu trong thang cua ho gia dinh la: %.2f VND\n", tiendien); 
	}else if (100 <= dientieuthu && dientieuthu <150){
		tiendien= dientieuthu * 20000; 
		printf("tien dien tieu thu trong thang cua ho gia dinh la: %.2f VND\n", tiendien); 
	}else if (150 <= dientieuthu && dientieuthu <200){
		tiendien= dientieuthu * 25000; 
		printf("tien dien tieu thu trong thang cua ho gia dinh la: %.2f VND\n", tiendien); 
	}else if (200< dientieuthu){
    	tiendien= dientieuthu * 30000; 
    	printf("tien dien tieu thu trong thang cua ho gia dinh la: %.2f VND\n", tiendien); 
	}else if (0>= dientieuthu){
		printf("kWh2 phai lon hon kWh1"); 
	} 
	
	return 0;
	 
}

