#include<stdio.h>
#include<math.h>
#include <conio.h>
int main(){
	float a,b,c;
    float denta;

	scanf("%f %f %f",&a,&b,&c);

	denta= pow(b,2)-4*a*c;
	if(denta < 0) 
		printf("Phuong trinh vo nghiem");	
	else{  
		if( denta==0) 
	        printf("phuong trinh co nghiem x0= %.2f",-b/(2*a));
	    else
	        printf("phuong trinh co 2 nghiem x1= %.2f  ;x2= %.2f",(-b+sqrt(denta))/(2*a), (-b-sqrt(denta))/(2*a) )	;
	}
	getch();
	return 0;
}
