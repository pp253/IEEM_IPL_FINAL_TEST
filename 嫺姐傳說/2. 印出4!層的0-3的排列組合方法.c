//印出4!層的0~3的排列組合方法 (0):0123  利用4層for和 if相等就continue
FOR(i, 4)
{
	FOR(j, 4)
	{
		if (i == j) continue;
		FOR(k, 4)
		{
			if (i == k || j == k) continue;
			FOR(l, 4)
			{
				if (i == l || j == l || k == l) continue;
				printf("(%d): %d %d %d %d\n", counter++, i, j, k, l);
			}
		}
	}
}
