////#define _CRT_SECURE_NO_WARNINGS
////#include <stdio.h>  
////
////// 阶乘函数，接受一个整数n，返回n的阶乘  
////unsigned long long factorial(int n) 
////{
////    unsigned long long result = 1; // 初始化结果为1  
////    for (int i = 1; i <= n; i++)
////    { // 从1迭代到n  
////        result *= i; // 将当前i的值乘到结果上  
////    }
////    return result; // 返回最终的计算结果  
////}
////
////int main() {
////    int number;
////    printf("请输入一个整数: ");
////    scanf("%d", &number);
////
////    // 检查输入是否为非负整数  
////    if (number < 0)
////    {
////        printf("错误: 阶乘未定义于负数\n");
////    }
////    else {
////        unsigned long long fact = factorial(number);
////        printf("%d 的阶乘是 %llu\n", number, fact);
////    }
////
////    return 0;
////}
//#define _CRT_SECURE_NO_WARNINGS  
//#include <stdio.h>  
//
//long long factorial(int n) {
//    long long result = 1;
//    for (int i = 1; i <= n; i++) {
//        result *= i;
//    }
//    return result;
//}
//
//int main() {
//    int n;
//    char c;
//    printf("请输入一个正整数来计算阶乘，或者输入特定值（如0）来退出程序:\n");
//    while (1) {
//        // 尝试读取一个整数  
//        if (scanf("%d", &n) == 1) {
//            // 如果输入的是正整数，则计算阶乘  
//            if (n > 0) {
//                long long a = factorial(n);
//                printf("%d的阶乘是%lld\n", n, a);
//            }
//            // 如果输入的是0或其他负数，则退出循环  
//            else if (n == 0) {
//                printf("程序已退出。\n");
//                break;
//            }
//            else {
//                // 如果输入的是负数（非0），则给出错误提示  
//                printf("错误: n必须大于0\n");
//            }
//            // 由于已经成功读取了一个整数，不需要清空缓冲区  
//            // 继续下一次循环  
//        }
//        else 
//        {
//            // 如果读取整数失败，则清空缓冲区并给出错误提示  
//            printf("错误: 输入的不是一个有效的整数\n");
//            while ((c = getchar()) != '\n' && c != EOF) 
//            {
//                // 丢弃字符，直到遇到换行符或文件结束符  
//            }
//            // 如果在文件结束符处停止，可以选择退出循环（这里不添加，因为要求使用while循环）  
//            // 如果想要在遇到EOF时退出，可以取消下面这行代码的注释  
//            // if (c == EOF) break;  
//
//            // 提示用户重新输入  
//            printf("请重新输入一个整数:\n");
//        }
//    }
//    return 0;
//}