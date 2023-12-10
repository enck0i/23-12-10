#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//输入一个三位数和一个两位数，并输出他们相乘的竖式
//int main()
//{
//	int abc,de;
//	int	i = 1;
//	while (scanf("%d", &abc) == 1)
//	{
//		scanf("%d", &de);
//		printf("<%d>\n", i++);
//		printf("..%d\nX..%d\n", abc, de);
//		printf("-----\n");
//		printf(".%d\n", abc * (de % 10));
//		printf("%d.\n", abc * (de / 10));
//		printf("-----\n");
//		printf("%d\n\n", abc * (de % 10) + abc * (de / 10) * 10);
//	}
//	return 0;
//}


int main()
{//书上内容（注意理解第一）

    int count = 0;
    char s[20], buf[99];
    scanf("%s", s);
    for (int abc = 111; abc <= 999; abc++)
    {
        for (int de = 11; de <= 99; de++)
        {
            int x = abc * (de % 10), y = abc * (de / 10), z = abc * de;
            sprintf(buf, "%d%d%d%d%d", abc, de, x, y, z);
            int ok = 1;
            for (int i = 0; i < strlen(buf); i++)
                if (strchr(s, buf[i]) == NULL) ok = 0;
            if (ok)
            {
                printf("<%d>\n", ++count);
                printf("%5d\nX%4d\n-----\n%5d\n%4d\n-----\n%5d\n\n", abc, de, x, y, z);
            }
        }

    }
    printf("The number of solutions = %d\n", count);
    return 0;
}