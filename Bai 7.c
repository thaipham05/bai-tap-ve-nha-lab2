#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	  int dai,rong,canh,r,C,S;
	   printf("chieu dai la:");
	    scanf("%d",&dai);
       printf("chieu rong la:");
        scanf("%d",&rong);
       printf("canh la:");
        scanf("%d",&canh);
       printf("ban kinh la:");
        scanf("%d",&r);
       printf("C hinh chu nhat la %d",(dai+rong)*2);
       printf("S hinh chu nhat la %d",dai*rong);
       printf("C hinh vuong la %d",canh*4);
       printf("S hinh vuong la %d",canh*canh);
       printf("C hinh tron la %d",r*2*3.14);
       printf("S hinh tron la %d",r*r*3.14);
	   
	return 0;
}
