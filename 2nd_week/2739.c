int main() {
	int N;
	scanf("%d",&N);
	for (int i = 1; i <= 9; i++) {
		int mul = N * i;

		printf("%d * %d = %d\n", N, i, mul);
	}

	return 0;
}
