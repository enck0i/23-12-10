#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//����һ����λ����һ����λ���������������˵���ʽ
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


//int main()
//{//�������ݣ�ע������һ��
//
//    int count = 0;
//    char s[20], buf[99];
//    scanf("%s", s);
//    for (int abc = 111; abc <= 999; abc++)
//    {
//        for (int de = 11; de <= 99; de++)
//        {
//            int x = abc * (de % 10), y = abc * (de / 10), z = abc * de;
//            sprintf(buf, "%d%d%d%d%d", abc, de, x, y, z);
//            int ok = 1;
//            for (int i = 0; i < strlen(buf); i++)
//                if (strchr(s, buf[i]) == NULL) ok = 0;
//            if (ok)
//            {
//                printf("<%d>\n", ++count);
//                printf("%5d\nX%4d\n-----\n%5d\n%4d\n-----\n%5d\n\n", abc, de, x, y, z);
//            }
//        }
//
//    }
//    printf("The number of solutions = %d\n", count);
//    return 0;
//}


#include<assert.h>
//int main()
//{//���Ժ�������Ҫ����assert.hͷ�ļ�
// //���Ծ�׼����
//	int a = 5, b = 0;
//	assert(a != 5);
//	while (scanf("%d", &b))
//	{
//		a = 5;
//	}
//	
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a))
//	{
//		assert(a != 5);
//		printf("there nothing\n");
//	}
//	return 0;
//}

//int SameOf_a_b(int a, const int b)
//{//const��ʾ����
//	a = b;
//	printf("%d", a);
//	printf("%d", b);
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	SameOf_a_b(a, b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pi = &a;
//	printf("%x\n", pi);
//	printf("%d\n", *pi);
//	return 0;
//}

int main()
{
	const int a = 10;
	int* p = &a;
	*p = 20;//��ʱ����ͨ��*p�����ı���a��ֵ
	printf("a = %d\n", *p);

	const int b = 10;
	const int* p1 = &b;
	//*pi = 20;
	//����int*��const���ξͿ��Է�ֹb�������ı�
	printf("b = %d\n", *p1);

	const int c = 10;
	const int* p2 = &c;
	//�����const����*p2������p2�����Ա��ı�
	int* p3 = &c;
	*p3 = 20;
	printf("c = %d\n", *p3);
	printf("%d\n", p3);
	p3 = 100;
	printf("%d\n", p3);

	const int d = 10;
	int* const p4 = &d;
	//���const������p4������*p4
	printf("p4 = %d\n", *p4);
	*p4 = 20;
	printf("p4 = %d\n", *p4);
	//p4 = 100;
	printf("%d\n", p4);
	return 0;
}