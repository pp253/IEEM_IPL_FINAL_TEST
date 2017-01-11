//印出c m取n的組合  ex:c3 2 跑出(0):01 (1):02 (2):12 (cmn組n個0~m-1的數)
//在main中給answer n個空間,再呼叫recur(m, n, 0, answer, 0);

int counter = 0;
void recur(int m, int n, int num, int *answer, int ansCount)
{
	int i;
	if (ansCount == n)
	{
		printf("(%d): ", counter++);
		FOR(i, n)
			printf("%d, ", answer[i]);
		printf("\n");
		return;
	}
	else if (num == m)
	{
		return;
	}
	else
	{
		// select num
		answer[ansCount] = num;
		recur(m, n, num + 1, answer, ansCount + 1);
		// does not select num
		recur(m, n, num + 1, answer, ansCount);
		return;
	}
}
