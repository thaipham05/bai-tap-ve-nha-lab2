#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 int toan,ly,hoa;
	  printf("nhap diem toan:");
	   scanf("%d",&toan);
      printf("nhap diem ly:");
       scanf("%d",&ly);
      printf("nhap diem hoa:");
       scanf("%d",&hoa);
      printf("tong 3 mon la %d",toan+ly+hoa);
      printf("trung binh 3 mon la %d",(toan+ly+hoa)/3);
	return 0;
}
