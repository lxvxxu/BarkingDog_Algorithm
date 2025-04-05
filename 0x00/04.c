int func4(int N) {
	int a = 1; // 2의 0제곱

	for (int i = 1; i < N; i++)
	{
		a *= 2; // a * 2
		if (a > N)
			return a / 2;
	}
}
