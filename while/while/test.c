#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>






//while循环中的
//break是用于永久的终止循环
//continue 跳过本次循环后面的代码，直接去判断部分，进行下一次循环的判断

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (5 == i)
//			continue;
//
//		printf("%d ", i);
//	}
//	return 0;
//}



//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		
//		if (5 == i)
//			continue;
//		i++;
//
//		printf("%d ", i);
//	}
//	return 0;
//}



//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//
//		if (5 == i)
//			break;
//		i++;
//
//		printf("%d ", i);
//	}
//	return 0;
//}







//int main()
//{
//	//int ch = getchar();
//	//printf("%c\n", ch);
//	//putchar(ch);
//
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//
//	return 0;
//}



//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//
//	printf("请确认密码(Y/N):>");
//	int ret = getchar();
//
//	if ('Y' == ret)
//		printf("Yes\n");
//	else
//		printf("No\n");
//
//	return 0;
//}




int main()
{
	char ch = '\0';

	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch > '9')
			continue;

		putchar(ch);
	}
	//只打印数字字符

	return 0;
}