//接收一个无符号整型，按照顺序打印它的每一位。
//递归实例（1.限制条件 2.每次递归调用越来越接近这个限制条件）
#include <stdio.h>
void Print(int n)
{
	if (n > 9)
	{
		Print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	int num = 1234;
	Print(num);
	return 0;
}