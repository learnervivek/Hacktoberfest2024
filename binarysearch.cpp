#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    // int mid = (start + end) / 2; //optimize
        int mid = start+(end-start)/2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        // go to right
        if (key> arr[mid])
        {
            start = mid + 1;
        }
        else    //go to left
        {
            end = mid - 1;
        }

        mid = start+(end-start)/2;
}
return -1;
}

int main()
{

    int even[6] = {2, 4, 6, 8, 10, 12};
    int odd[6] = {1, 3, 5, 7, 9, 11};
int evenIndex=binarySearch(even,6,4);
int oddIndex=binarySearch(odd,6,5);
cout<<"index of 4 is "<<evenIndex<<endl;
cout<<"index of 5 is "<<oddIndex<<endl;
    return 0;
}
