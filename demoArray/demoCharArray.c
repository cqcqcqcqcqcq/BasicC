#include<stdio.h>
#define BUFFER_SIZE 10


int main()
{
#if 0
//如何获取数组有多少个元素： 数组的总长/每个元素的长度
    char array[BUFFER_SIZE] = { 0 };

    int arrayLen = sizeof(array);
    printf("len:%d\n", arrayLen);

    int elementlen = sizeof(array[0]);
    printf("len: %d\n", elementlen);

    int length = arrayLen / elementlen;
    printf("length: %d\n", length);
#endif

#if 0

/*字符数组*/
/*Q1: 什么叫字符*/
char pNum = 'a';
printf("pNum:%s\n", pNum);
printf("ptr:%s\n", printf);


char buffer[] = {'h','e','l', 'l','o', 'w', 'o', 'r', 'l', 'd'};
int buffer = sizeof(buffer);
printf("buflen%d,  buffer:%c\n,  buflen,  buffer" );

#endif
//字符数组初始化定义的两种方式
char  buffer1[] = "helloworld";
//如果是以双引号的方式 默认加上'\0'
char  buffer2[] = {'h','e','l', 'l','o', 'w', 'o', 'r', 'l', 'd'};
char  buffer3[] = {'h','e','l', 'l','o', 'w', 'o', 'r', 'l', 'd'};
//如果是以单引号（字符）的方式 默认不会加上'\0'

int buflen1 = sizeof(buffer1);
int buflen2 = sizeof(buffer2);

printf("&buffer1:%p\n", buffer1);
printf("&buffer2:%p\n", buffer2);
printf("&buffer3:%p\n", buffer3);



printf("buflen1%d, \tbuflen2:%d\n", buflen1,  buflen2 );
printf("buffer1:%s\n", buffer1 );
printf("buffer2:%s\n", buffer2 );
printf("buffer3:%s\n", buffer3 );


    return 0;
}