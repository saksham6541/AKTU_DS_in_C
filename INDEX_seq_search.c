#include <stdio.h>

int main()
{
    int data[] = {10,20,30,40,50,60,70,80};
    int index[] = {10,30,50,70};

    int block_size = 2;
    int n = 8;
    int key = 60;

    int i;

    for(i =0 ;i<4;i++)
    {
        if(key < index[i])
        {
            break;
        }
    }

    int start = (i-1) + block_size;
    int end = start + block_size;

    for(int i =start ;i< end;i++)
    {
        if(key == data[i])
        {
            printf("Element found at %d index \n",i);
            return 0;
        }
    }
}