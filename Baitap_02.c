#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
     int num1,num2;
      printf("num1=");
       scanf("%d",&num1);
      printf("num2=");
       scanf("%d",&num2);
      printf("Tong 2 so la %d",num1+num2);
      printf("Hieu 2 so la %d",num1-num2);
      printf("Tich 2 so la %d",num1*num2);
      printf("Thuong 2 so la %d",num1/num2);
       getch();
	return 0;
}
