#include <stdio.h>

int main() 
{
    int cloth1=36, cloth2=24;
    printf("Width of First cloth is %d \n", cloth1);
    printf("Width of Second cloth is %d \n\n", cloth2);

    while(cloth1 != cloth2)
    {
        if(cloth1>cloth2)
        {
            cloth1 = cloth1-cloth2;
        }
        else
        {
            cloth2 = cloth2-cloth1;
        }
        
    }
    printf("She should cut the two cloths into strips of width %d inches.", cloth1);

    return 0;
}