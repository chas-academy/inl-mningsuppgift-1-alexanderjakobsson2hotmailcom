#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);

   
    // Your code goes here
    int dice_throws[100];
    int sum = 0;
    for(int i = 0; i < 100; i++){
        dice_throws[i] = (rand() %6) + 1;
        sum += dice_throws[i];
    }

    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    int sum4 = 0;
    int sum5 = 0;
    int sum6 = 0;
    for(int i = 0; i < 100; i++){
        if(dice_throws[i] == 1){
        sum1++;
        }
        if(dice_throws[i] == 2){
        sum2++;
        }
        if(dice_throws[i] == 3){
        sum3++;
        }
        if(dice_throws[i] == 4){
        sum4++;
        }
        if(dice_throws[i] == 5){
        sum5++;
        }
        if(dice_throws[i] == 6){
        sum6++;
        }
    }
    printf("%d\n", sum1);
    printf("%d\n", sum2);
    printf("%d\n", sum3);
    printf("%d\n", sum4);
    printf("%d\n", sum5);
    printf("%d\n", sum6);
    printf("%d\n", sum);
    printf("%1f\n", sum/100.0);
    return 0;
}
