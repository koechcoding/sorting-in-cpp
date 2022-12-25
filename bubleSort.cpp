#include <iostream>
#include <vector>

using namespace std;

void BubbleSort (vector <int> &arr, int n){
    for (int i = 0; i < n - 1; ++i )
    {
        bool swapped = false;
        for (int j = 0; j < n -i -1; ++j)
        {
            if (arr[j] > arr[j+1]) //check if adjacent element is not in order
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        //value at n-i-1 will be maximum of all the values below this index
        if (!swapped)
           break;
    }
}

recursiveBubbleSort(arr[], n){
        // Base case
        if (n == 1)
        return;
        // One pass of bubble sort. After
        // this pass, the largest element
        // is moved (or bubbled) to end.
        for(i=0; i<n-1; i++){
            if(arr[i] > arr[i+1])
            {
             swap(arr[i], arr[i+1]);
            }
        }
        // recursion for remaining elements in array
        recursiveBubbleSort(arr, n-1);
}

int main()
{
    vector<int> arr = {5, 6, 2, 6, 9, 0, -1};
    int n = 7;

    BubbleSort(arr, n);

    //display the sorted data
    cout << "\nSorted Data: ";
    for (i = 0; i < n; i++)
       cout << arr[i] <<" ";

    return 0
}