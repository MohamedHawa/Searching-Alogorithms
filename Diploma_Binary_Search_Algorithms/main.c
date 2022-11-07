#include <stdio.h>
#include <stdlib.h>
unsigned int arr[6]= {1,2,3,4,5,6};
 int BinarySrachAlgorithms(unsigned int arr[],unsigned int size,unsigned int SearchElement);
 int main()
{
    int ret=0;

    ret=BinarySrachAlgorithms(arr,6,3);
    if(ret==-1)
    {
        printf("Search Element Is Not Found\n");

    }
    else
    {

         printf("Inedex  Element Is : %i\n",ret);
         printf("Search  Element Is : %i\n",arr[ret]);
    }


    return 0;
}

////////////////////////////////////////////////////////////////////////////
 int BinarySrachAlgorithms(unsigned int arr[],unsigned int size,unsigned int SearchElement)
{
    unsigned int low=0;
    unsigned int high=size-1;
    unsigned int mid=0;
    unsigned int i=0;

    while(low<=high)
    {
        mid=(low+high)/2;


        if(arr[mid]==SearchElement)
        {

          return mid;

        }
        else if(arr[mid]<SearchElement)
        {
            low=mid+1;

        }
        else if(arr[mid]>SearchElement)
        {
            high=mid-1;

        }

    }

    return -1;

}
//////////////////////////////////////////////////////////////////////////////
