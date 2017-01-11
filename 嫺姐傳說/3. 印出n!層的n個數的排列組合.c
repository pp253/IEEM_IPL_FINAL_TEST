//印出n!層的n(=total)個數的排列組合 ex輸入5，跑出01234的120種排列方法
//要在main裡先給flag 跟 answer 配置n個空間, 再FOR(i,n) flag[i] = 0;
void recur(int total, int *flag, int *answer, int ansCount)
{
	int i;
	if (ansCount == total)
	{
		printf("(%d): ", counter++);
		FOR(i, total)
			printf("%d, ", answer[i]);
		printf("\n");
		return;
	}
	FOR(i, total)
	{
		if (flag[i] == 0)
		{
			answer[ansCount] = i;
			flag[i] = 1;
			recur(total, flag, answer, ansCount + 1);
			flag[i] = 0;
		}
	}
}
