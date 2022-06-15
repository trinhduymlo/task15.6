#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int cardid,pin,test;
	char ch;
	
	printf("\n Nhap Cardid:");
	scanf("%d",&cardid);
	
	printf("\n Nhap ma Pin:");
	scanf("%d", &pin);
	
	if(cardid==1234 && pin==1234){
		
		do{
			printf("\n Chon noi dung");
			printf("\n 1: Chuyen tien");
			printf("\n 2: Chuyen khoan");
			printf("\n 3: Xem so du");
			printf("\n 4: Ket thuc \n");
			scanf("%d",&test);
			
			switch(test){
				case 1:
					printf("\n Rut tien:");
					break;
				case 2:
					printf("\n Chuyen khoan: ");
					break;
				case 3:
					printf("\n Xem so du:");
					break;
				case 4:
					printf("\n Ket thuc:");
					break;
			}
		
		printf("\n Ban co muon tiep tuc hay khong Y/N:");
		fflush(stdin);
		scanf("%c",&ch);			
		} while (ch=='Y'|| ch=='y');
	} 
	else printf("Invalid");
	return 0;
}
