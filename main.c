#include <stdio.h>
#include <stdlib.h>

void sapxepArray(int array[], int kichthuoc);
int main()
{
    int array[10]={3,4,1,6,8,3,5,8,9,2};
    sapxepArray(array, 10);
    return 0;
}
void sapxepArray(int array[], int kichthuoc)
{
    int i=0;
    int a=0;
    while(i<10)
    {
        if(array[i]==a)
        {
            printf("%d", a);
        }
        if(i==9)
        {
            a++;
            i=0;
            continue;
        }
        i++;
    }
    printf("\nThe end!");
}
