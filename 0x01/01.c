#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void func1(int input) {
	int sum = 0;
	for (int i = 1; i <= input; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}

	printf("%d 이하 자연수 중 3의 배수와 5의 배수를 모두 합한 값은\n%d입니다.", input, sum);
}


int main() {
	// 문제 01
	// N 이하 자연수 중 3의 배수 or 5의 배수를 모두 합한 값
	int a;

	printf("숫자를 입력해주세요.\n입력 : ");
	scanf("%d", &a);
	func1(a);

	return 0;
}
