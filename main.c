#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	double number;
	printf(" 정수 하나를 입력하시오 :");
	scanf("%d", &number);
	 
	 if(number > 0 )
	 printf(" 양수입니다.\n");
	 
	 else if(number < 0)
	 printf(" 음수입니다.\n");
	 
	 else
	 printf(" 0 입니다.\n");
	  
	
	return 0;
}
