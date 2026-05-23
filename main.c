#include <stdio.h>
#include "test.h"
#include "sort.h"

int arr[10] = {27,38,65,47,15,36,26,77,20,19};

void print_arr(int* arg, int len){
  for(int i = 0; i < len; i++){
    printf("%d ",arg[i]);
  }
  printf("\n");
}

int main()
{
//    printf("hello world\n");
//    test();
    print_arr(arr,10);
    bub_sort(arr,10);
    print_arr(arr,10);
    return 0;
}
