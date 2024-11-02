//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int gcd(int a,int b)
//{
//
//	return b == 0 ? a : gcd(b, a % b);
//}
//
//int lcm(int a, int b)
//{
//	return a * b / gcd(a, b);
//}
//int main()
//{
//	int a,b,c;
//	scanf("%d %d %d", &a, &b,&c);
//	if (c == 1)
//	{
//		printf("%d\n", gcd(a, b));
//	}
//	else
//		printf("%d\n", lcm(a, b));
//
//	return 0;
//
//}

//#include <stdio.h>  
//
//// 假设您已经有了这个gcd函数的实现，如果没有，请添加下面的实现  
//int gcd(int a, int b) {
//    return b == 0 ? a : gcd(b, a % b);
//}
//
//int main() {
//    int a, b;
//    scanf("%d %d", &a, &b);
//    printf("%d\n", gcd(a, b)); // 修正了这里的引号  
//
//    return 0;
//} 