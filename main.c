#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x,y;
	printf("���� �ϳ��� �Է��Ͻÿ� :");
	scanf_s("%d", &x);
	y = -x;

	if (x > 0) {
		printf("������ %d�Դϴ�.", x);
	}
	else {
		printf("������ %d�Դϴ�.", y);
	}
	return 0;	
	
	
}
