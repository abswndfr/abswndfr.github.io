#include <stdio.h>

int main()
{
    int array[9] = {1,2,3,4,5,6,7,9,10};
    int sum_full = 10 * (10 + 1) / 2;


    for(int index = 0; index < 9; index++ ) {
        sum_full -= array[index];
    }

    printf("missing #:%d\n", sum_full);

    return 0;    
}	
