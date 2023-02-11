/*
Chapter 06 - Pinters
*/

#include<stdio.h>

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = *x;
}

int main(){
  int *a = 3;
  int *b =4;
  swap(*a,*b);
  return 0;

}
