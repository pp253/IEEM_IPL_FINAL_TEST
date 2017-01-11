//按大小排列利用qsort
//在主程式qsort(a, 6, sizeof(a[0]), cmpInt);   //(a陣列,裡面6個數,我也不知道應該是陣列大小吧,照打就對了)
int cmpInt(const void *a, const void *b)
{
	int aValue = *(int*)a;
	int bValue = *(int*)b;
	if (aValue<bValue)
		return 1;
	else if (aValue == bValue)
		return 0;
	else
		return -1;
}
