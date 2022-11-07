#include <stdio.h>
#include <stdlib.h>
#define DATA_MAX_SIZE  10
#define Element_Not_Found  -1
unsigned int MyData[DATA_MAX_SIZE]={11,22,33,44,55,66,67,88,99,100};
unsigned int PerformLinearSearchAlgorithms(unsigned int arr[],unsigned int size,unsigned Search_Element);
int main()
{
    unsigned int ret_index=0;
  ret_index=PerformLinearSearchAlgorithms(MyData,DATA_MAX_SIZE,100);
  printf("The Index Of The Search Element Is : %i\n",ret_index);
  printf("The Value Of The Search Element Is : %i\n",MyData[ret_index]);

    return 0;
}
unsigned int PerformLinearSearchAlgorithms(unsigned int arr[],unsigned int size,unsigned Search_Element)
{
    unsigned int  index=0;
    unsigned int ret=0;


    for(index=0;index<size;index++)
    {
        if(arr[index]==Search_Element)
        {

        return index;

        }
    }

  return Element_Not_Found;

}

