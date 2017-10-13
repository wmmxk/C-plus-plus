#include "compare_array_row.h"
bool  compare(int ** arr, int r_num, int * one_row)
{
  bool res;
  for (int i=0; i < r_num; i++)
  {
    res = true;
    res = res && (*one_row == arr[i][0]) && (*(one_row+1) == arr[i][1]);
    if (res)  return res;
  }
  return res;

}
