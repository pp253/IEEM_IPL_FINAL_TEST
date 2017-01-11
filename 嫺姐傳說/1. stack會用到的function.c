//stack會用到的function

void push(int a) //把數放進stack(從底開始)
{
	if (pointer == SIZE)
		printf("stack is full.\n");
	else
		stack[pointer++] = a;
}



int pop(void)  //取最上層的數
{
	if (pointer == 0)
		printf("stack is empty.\n");
	else
		return stack[--pointer];
}



void printStack(void) //印出stack有哪些數(從最上層開始印)
{
	int i;
	printf("stack contains: ");
	for (i = pointer - 1; i >= 0; i--)
		printf("%d,", stack[i]);
	printf("\n");
}
