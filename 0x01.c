#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int func1(int N) {
	int sum = 0;
	for (int i = 1; i <= N; i++)
	{
		if (i % 3 == 0)
			sum += i;
		else if (i % 5 == 0)	// 3의 배수이면서 5의 배수인 경우 위 if문에서 처리되었으므로, 'else' if문은 건너뛰는가?
			sum += i;
	}
	return sum;
}

int main() {
	printf("func1(16) = %d\n", func1(16));
	printf("func1(34567) = %d\n", func1(34567));
	printf("func1(27639) = %d\n", func1(27639));
	return 0;
}
