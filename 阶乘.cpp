////#define _CRT_SECURE_NO_WARNINGS
////#include <stdio.h>  
////
////// �׳˺���������һ������n������n�Ľ׳�  
////unsigned long long factorial(int n) 
////{
////    unsigned long long result = 1; // ��ʼ�����Ϊ1  
////    for (int i = 1; i <= n; i++)
////    { // ��1������n  
////        result *= i; // ����ǰi��ֵ�˵������  
////    }
////    return result; // �������յļ�����  
////}
////
////int main() {
////    int number;
////    printf("������һ������: ");
////    scanf("%d", &number);
////
////    // ��������Ƿ�Ϊ�Ǹ�����  
////    if (number < 0)
////    {
////        printf("����: �׳�δ�����ڸ���\n");
////    }
////    else {
////        unsigned long long fact = factorial(number);
////        printf("%d �Ľ׳��� %llu\n", number, fact);
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
//    printf("������һ��������������׳ˣ����������ض�ֵ����0�����˳�����:\n");
//    while (1) {
//        // ���Զ�ȡһ������  
//        if (scanf("%d", &n) == 1) {
//            // �����������������������׳�  
//            if (n > 0) {
//                long long a = factorial(n);
//                printf("%d�Ľ׳���%lld\n", n, a);
//            }
//            // ����������0���������������˳�ѭ��  
//            else if (n == 0) {
//                printf("�������˳���\n");
//                break;
//            }
//            else {
//                // ���������Ǹ�������0���������������ʾ  
//                printf("����: n�������0\n");
//            }
//            // �����Ѿ��ɹ���ȡ��һ������������Ҫ��ջ�����  
//            // ������һ��ѭ��  
//        }
//        else 
//        {
//            // �����ȡ����ʧ�ܣ�����ջ�����������������ʾ  
//            printf("����: ����Ĳ���һ����Ч������\n");
//            while ((c = getchar()) != '\n' && c != EOF) 
//            {
//                // �����ַ���ֱ���������з����ļ�������  
//            }
//            // ������ļ���������ֹͣ������ѡ���˳�ѭ�������ﲻ��ӣ���ΪҪ��ʹ��whileѭ����  
//            // �����Ҫ������EOFʱ�˳�������ȡ���������д����ע��  
//            // if (c == EOF) break;  
//
//            // ��ʾ�û���������  
//            printf("����������һ������:\n");
//        }
//    }
//    return 0;
//}