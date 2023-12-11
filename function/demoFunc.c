#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "calculakeFunc.h"
/*函数参数： 可以没有 也可以有*/
/*函数返回值： 可以没有 也可以有。
     没有的情况需要写void
     如果有，返回想返回的数据类型{int | long | short | float | double}*/
/*什么叫API： */  
/*函数的定义*/  
#if 0
void purchaseAppintThing()
{
    printf("purchase a phone\n");
}
#endif
#if 0
/*case2: 有参数， 没有返回值*/
/*函数参数一定有数据类型*/
void myAddNum(int num1, int num2)
{
    int sum = num1 + num2;
    printf("sum:%d\n", sum);

    return sum;
}
#endif
#if 0

#endif





/*枚举 他也是一种数据类型*/
enum STATUS_CODE
{
    ON_SUCCESS,
    ON_ERROR,
    ON_NULLPTR,
    ON_MALLOCFAIL,
}STATUS_CODE;
#if 0
/* 取别名*/
typedef enum STATUS_CODE STATUS_CODE;  //这种可以的
#endif
int main()
{
#if 0    
    int a = 5;
    printf("a:%d\n", a);

/*函数的调用*/
    purchaseAppintThing();

    int num1 = 5;
    int num2 = 6;


    /*函数的使用*/
    myAddNum(num1, num2);

    int totalSum = myAddNum2(num1, num2);

    int transFormerPrice = 10;
    if (totalSum > transFormerPrice)
    {
        printf("get a transFormer\n");
    }
    else
    {
        printf("i not get\n");
    } 
#endif

   int num1 = 50;
   int num2 = 60;
   int sum = calculateAdd(num1, num2);
   printf("sum:%d\n", sum);

   int num3 = calculateSub(num1, num2);
   printf("sum:%d\n", num3);

   int amass = calculateSub(num1, num2);
   printf("sum:%d\n", amass);

   int num4 = calculateSub(num1, num2);
   printf("sum:%d\n", num4);





    return 0;
}