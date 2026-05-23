#include "sort.h"

void selec_sort(int* arg, int len){
  int min_index = 0;
  int max_index = len - 1;
  int temp_index = 1;
  int temp = 0;
  for(; max_index > min_index; max_index--,min_index++){
    temp = arg[temp_index];
    if(temp < arg[min_index]){arg[min_index] = temp;arg[temp_index] = temp;}
    if(temp > arg[max_index]){arg[max_index] = temp;arg[temp_index] = temp;}
    if(temp < arg[min_index]){arg[min_index] = temp;arg[temp_index] = temp;}
    temp_index++;
}
