#include <iostream>
using namespace std;

int main()
{

    int a[] = {11, 22, 33, 44, 56};
    int b[] = {9, 33, 56, 77, 89, 900};

    int element = 33;
    int start = 0;
    int end = 4;
    int mid = (start + end) / 2;

    // cout<<a[2];
    while (start <= end)
    {

        if (element == a[mid])
        {
            cout << mid << endl;
            return mid;
        }

        if (element > a[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }

    return -1;
}
