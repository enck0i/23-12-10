#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//输入一个三位数和一个两位数，并输出他们相乘的竖式
int main()
{
	int abc;
	int de;
	int	i = 1;
	scanf("%d", &abc);
	while (scanf("%d", &de) == 1)
	{
		printf("<%d>\n", i++);
		printf("..%d\nX..%d\n", abc, de);
		printf("-----\n");
		printf(".%d\n", abc * (de % 10));
		printf("%d.\n", abc * (de / 10));
		printf("-----\n");
		printf("%d\n\n", abc * (de % 10) + abc * (de / 10) * 10);

	}
	return 0;
}