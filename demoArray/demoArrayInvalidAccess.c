#include<stdio.h>
#include<string.h>
#define BUFFER_SIZE 10

int main()
{
 int array[BUFFER_SIZE] = { 0 };

#if 0
/*数组的越界访问*/
/*判断索引的有效性 ： 索引必须是合理的范围RANGE [0 - BUFFER_SIZE -1]*/

printf("array[-1]: %d\n", array[-1]);
printf("array[10]: %d\n", array[10]);
printf("array[15]: %d\n", array[15]);

#endif

#if 1
/* 静态数组：优势和劣势*/
int desk[BUFFER_SIZE] = { 0 };

/*动态数组*/
/*算法：
   自动扩容
   自动缩容
*/

#endif


    return 0;
}