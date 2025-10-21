#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float main() {
	float a,b,c,d;
	printf("Lutfen yatirim getirisini giriniz:");
	scanf("%f",&a);
	
	printf("Lutfen risksiz faiz oranini giriniz:");
	scanf("%f",&b);
	
	printf("Lutfen standart sapmayi giriniz:");
	scanf("%f",&c);
	
    	a /= 100.0;
    	b /= 100.0;
    	c /= 100.0;
    	
	if (c==0){
	   printf(" HATA!standart sapma sifirdan kucuk veya esit olamaz");
	   return 1;
    }
    d=(a -b)/c;
	printf("Sharpe orani: %2f0\n",d);
	if(d >= 3.0) {
		printf("Mukemmel deger\n");
	} else if (d >= 2.0){
	    printf("cok iyi deger\n");
    } else if (d >= 1){
    	printf("iyi deger\n");
	} else if (d >= 0){
		printf("zayif deger\n");
	} else {
		printf("kotu deger\n");
	}
	return 0;
}
