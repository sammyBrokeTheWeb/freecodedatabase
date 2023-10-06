/*
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21

*/

#include <stdio.h>

int reverse(int x){
    long int reversed=0;
    long int temp = x;
    if(x<0){
        temp = temp*(-1);
    }
    while(temp>0){
        long int digits = temp%10;
        reversed = reversed*10 + digits;
        temp /=10;
    }
    if (reversed > 2147483648){
        return 0;
    } 
    else if(x<0){
        return -1*reversed;
    }
    else{
        return reversed;
    }
}

int main(){
    reverse(10221);
}