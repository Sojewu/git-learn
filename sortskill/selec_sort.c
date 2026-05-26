#include "sort.h"

void selec_sort(int* arg, int len){
  if(len <= 2){return;}
  int min_index;
  int max_index;
  int i,j;
  int temp = 0;
  for(i = 0; i + 1 < len; i++){
    min_index = i;
    max_index = len - 1;
    if(arg[min_index] > arg[max_index]){
      temp = arg[min_index];
      arg[min_index] = arg[max_index];
      arg[max_index] = temp;
    }
    if(min_index >= max_index){break;}
    for(int j = min_index + 1; j < max_index; j++){
      if(arg[j] < arg[min_index]){
        temp = arg[j];
        arg[j] = arg[min_index];    
        arg[min_index] = temp;
      }
      if(arg[j] > arg[max_index]){
        temp = arg[j];
        arg[j] = arg[max_index];    
        arg[max_index] = temp;
      }
      if(arg[j] < arg[min_index]){
        temp = arg[j];
        arg[j] = arg[min_index];    
        arg[min_index] = temp;
      }       
    }
  }
}
