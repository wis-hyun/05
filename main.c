#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	printf("���� �ϳ��� �Է��Ͻÿ� :");
	scanf("%d", &x);
	
	if(x>0){
		printf("����Դϴ�.");
	}
	else if(x<0){
		printf("�����Դϴ�.");
	}
	else{
		printf("0�Դϴ�.");
	}
	return 0;
}
