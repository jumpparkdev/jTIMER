#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <stdio.h>
//#include <stdlib.h>
#include <Windows.h>

int main()
{
	int input = 0;
	int i = 0;
	printf("jTIMER\n");
	printf("==*==*==*==*==*==*==*==*==*==*==*==\n");
	printf("Enter Time in Seconds: ");
	scanf("%d", &input);
	printf("%d SECONDS - TIMER START!\n", input);
	Sleep(1000);
	system("cls");
	for (i = 1; i <= &input; i++) {
		printf("%d SECONDS LEFT", input - i);
		Sleep(1000);
		system("cls");
		if (i >= input) break;
	}
	printf("%d SECOND IS OVER!!!", input);
	printf("\a");
	
	return 0;
}