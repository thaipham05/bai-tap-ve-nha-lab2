#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	  int nho,lon,cao,S;
	   printf("day nho la:");
	    scanf("%d",&nho);
       printf("day lon la:");
        scanf("%d",&lon);
       printf("chieu cao la:");
        scanf("%d",&cao);
       S = (nho+lon)/2*cao;
         printf("S hinh thang la %d",S);
       
	return 0;
}
