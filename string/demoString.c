#include<stdio.h>
#include<string.h>

#define BUFFER_SIEE  16
/*手写： 手写字符串strlen strcpy strcat strcmp*/

int main()
{
#if 0
    /*字符数组*/
    char array[BUFFER_SIEE];

    memset(array, 0, sizeof(array));

    int len = sizeof(array);
    printf("len:%d, array:%s\n", len, array);
#endif
#if 0
/*字符串 （字符数组）*/
    char array[BUFFER_SIEE] = "helloworld";
/*第一个 strlen */
int len = strlen(array1);
printf("len:%d\n", len);
#endif
#if 0
/*第二个 strcpy*/
char name[BUFFER_SIEE];
memset(name, 0, sizeof(name));
strcpy(name, "zhangSan");
printf("name%s\n", name);
#endif
#if 0
/*第三个 strcat*/
strcat(name, " is a boy");
printf("name:%s\n", name);
#endif
#if 0
/*第四个 strcmp*/
char name2[BUFFER_SIEE] = "zhangsan";
int ret = strcmp(name, name2);
printf("ret:%d\n", ret);
#endif


#if 0
/*字符串(常量)*/
/*指针出入*/
char * ptr = "hello world";
int len = strlen(ptr);
int size = sizeof(ptr);

printf("len:%d\n", len);
printf("size:%d\n", size);

printf("*ptr:%c\t*(ptr+1):%c\tptr:%s\n", *ptr, *(ptr+1, ptr));
*(ptr + 1) = 'H';
printf("*ptr:%c\t*(ptr+1):%c\tptr:%s\n", *ptr, *(ptr+1, ptr));

#endif

#if 0
#endif
    return 0;
}