#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define BUFFER_SIZE  32
/*指针*/
int main()
{
#if 0
    //1.指针怎么定义
    //基础数据类型
    //建议：定义变量记得初始化
    int a = 0;
    int b = 0;
    /*指针的定义*/
    int *p = NULL;


#endif
#if 0
    //指针的使用:指针内存存放的是某变量的的地址
    int a = 5;
    int *p = &a;

    printf("a:%d\n", a);
    printf("&a:%p\n", &a);
    printf("%d\n",*(&a));  

    printf("*(&a):%d\n", *(&a));

    printf("*p = %d\n", *p);
    printf("p = %p\n", p);
    printf("%p\n", &p);
#endif

#if 0
   // int *ptr = &p;
   // printf("p:%p\n", ptr);
   // int *ptr = &p;
    //printf("&p:%p\n", &p);
    
    //这是错的
    int *ptr = &p;
    printf("ptr:%p\n", ptr);
#endif

#if 0

    int **ptr = &p;
    printf("ptr:%p\n", ptr);
    printf("*ptr:%p\n", ptr);

    printf("*(*ptr):%d\n", *(*ptr));


    int ***pptr = &ptr;
    printf("pptr:%p\n", pptr);

    printf("***pptr:%d\n", ***pptr);



    
#endif

#if 0
    /*指针的特性1:
    指针占用的内存大小是8个字节（64位操作系统）
    如果是32位的操作系统指针占用的内存大小是4个字节*/
    int a = 10;
    int len = sizeof (a);
    printf("len:%d\n", len);

    char p = 10;
    len = sizeof (p);
    printf("len:%d\n", len);

    char *ptr = &p;
    printf("%c\t%d\n", *ptr, *ptr);
    len = sizeof(ptr);
    printf("len:%d\n", len);

    int *ptrInt = &a;
    printf("*(&a):%d\n" *(&a));
    len = sizeof(ptrInt);
    printf("len:%d\n", len);
#endif

#if 0
    /* 指针特性2：指针和字符串 */
    /* 字符串是区别去字符数组的*/
    char *ptr = "hello world";
    int len = sizeof(ptr);
    printf("len:%d\n", len);

    /*Q1:怎么获取字符串的长度*/

    

    /*Q2:字符数组的赋值 */
    char name[BUFFER_SIZE] = {0};
    strcpy(name, "zhangsan");
    //*name = "zahnghsan";
    printf("name:%s\n", name);

    /*Q3:字符串赋值 bug.*/
    char *ptr2 = NULL;
#if 1
    ptr2 = "zhnagsan";
#else
    strcpy(ptr2, "zahngasn");
#endif
    printf("ptr2:%s\n", ptr2);
#endif

#if 0
    /*堆空间*/
    /*void *是一个指针，这个指针被称为万能指针*/
    char *ptr = (char *)malloc(sizeof(char) * BUFFER_SIZE);

    strcpy(ptr, "zhangsan");
    printf("ptr:%s\n", ptr);


#endif
 char *ptr2 = NULL;
#if 1
    ptr2 = "zhnagsan";
#else
    strcpy(ptr2, "zahngasn");
#endif
    printf("ptr2:%s\n", ptr2);
    return 0;
}