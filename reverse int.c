#include <stdio.h>
#include <math.h>

int reverse(int x){
    int reversed=0, temp = x;
    while(temp>0){
        int digits = temp%10;
        reversed = reversed*10 + digits;
        temp /=10;
    }
    if(x<0){
        return -1*reversed;
    }
    else{
        return reversed;
    }
}

int main(){
    printf("%d", reverse(120));
    return 0;
}