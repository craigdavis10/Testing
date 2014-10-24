#include <stdio.h>
#define SIZE 6

int array1[SIZE+1] = { 0xdddd, 0xeeee, 0xbbbb, 0xaaaa, 0xffff, 0xcccc, 0x0101 } ;
int array2[SIZE+1] = { 0xdddd, 0xeeee, 0xbbbb, 0xaaaa, 0xffff, 0xcccc, 0x0101 } ;

void bubble_p(int *data, int count)  /* pointer version */
{
    int i, last;
    for(last = count-1; last > 0; last--){
        for(i = 0; i < last; i++)
            if(*(data+i) > *(data+i+1)){
                int temp = *(data+i);
                *(data+i) = *(data+i+1);
                *(data+i+1) = temp;
            }
    }
}

int main()
{
    int i;
    
    printf("pointer version\n");
    printf("  Before: ");
    for (i = 0; i < SIZE; i++)
        printf("0x%.4x ", array2[i]);
    printf("\n");
    bubble_p(array2, SIZE);
    printf("  After:  ");
    for (i = 0; i < SIZE; i++)
        printf("0x%.4x ", array2[i]);
    printf("\n");
}
