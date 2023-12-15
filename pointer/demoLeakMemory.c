#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include<malloc.h>


#define BUFFER_SIZE 10
/* 内存泄漏  ： 三种场景
   1.野指针
   2.malloc出的堆空间，没有被释放
   3.踩内存（read/ write is invalid）*/
int main()
{
 #if 0
    /*Q1: 什么情况下会导致内存泄漏*/
    // case 1:野指针

    int a;
    printf("a:%d\n", a);

    int array[BUFFER_SIZE];
    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("%d\t", array[idx]);
    }
#endif

#if 0
    char *p;  //p = 0xf4645765765
    printf("\n");
#endif
    //case2:
    char *ptr = malloc(sizeof(char) * BUFFER_SIZE);
    if (!ptr)
    {
        /* todo... */
        /*状态码*/
        return- 1;
    }
    /*使用malloc分配的空间，数据是脏的， （脏数据）*/
    memset(ptr, 0,sizeof(char) * BUFFER_SIZE);
#if 0
/**/
    strcpy(ptr, "hello world");
#else
    /* 使用安全 */
    strncpy(ptr, "hello world", BUFFER_SIZE - 1);
#endif
    printf("ptr:%c\n", *ptr);

    if (ptr != NULL)
    {
        free(ptr);
        ptr = NULL;
    }

     if (ptr != NULL)
    {
        free(ptr);
        ptr = NULL;
    }
    
    free(ptr);
    free(ptr);
    return 0;
}