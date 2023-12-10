#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//输入一个三位数和一个两位数，并输出他们相乘的竖式
int main()
{
	int abc,de;
	int	i = 1;
	while (scanf("%d", &abc) == 1)
	{
		scanf("%d", &de);
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