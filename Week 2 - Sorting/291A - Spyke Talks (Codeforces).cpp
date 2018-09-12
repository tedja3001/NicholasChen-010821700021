#include<bits/stdc++.h>
using namespace std;

// To find gap between elements
int getNextGap(int gap)
{
    // Shrink gap by Shrink factor
    gap = (gap*10)/13;

    if (gap < 1)
        return 1;
    return gap;
}

// Function to sort a[0..n-1] using Comb Sort
void combSort(long long int a[], long long int n)
{
    // Initialize gap
    int gap = n;

    // Initialize swapped as true to make sure that
    // loop runs
    bool swapped = true;

    // Keep running while gap is more than 1 and last
    // iteration caused a swap
    while (gap != 1 || swapped == true)
    {
        // Find next gap
        gap = getNextGap(gap);

        // Initialize swapped as false so that we can
        // check if swap happened or not
        swapped = false;

        // Compare all elements with current gap
        for (int i=0; i<n-gap; i++)
        {
            if (a[i] > a[i+gap])
            {
                swap(a[i], a[i+gap]);
                swapped = true;
            }
        }
    }
}

int main()
{
    long long int numberOfElements;
    cin>>numberOfElements;  // Initialize number of elements
    long long int arr[numberOfElements];
    for (int i=0; i<numberOfElements; i++)
    {
        cin>>arr[i]; // Initialize each individual element
    }

    combSort(arr, numberOfElements); // Call the CombSort function

    int counter = 0;

    for (int i=0; i<numberOfElements; i++)
    {
        if (arr[i] == 0)
        {
            continue;   // if element reads 0, loop will just continue/skip.
        }
        if (arr[i] == arr[i+1]) // if current element is the same with next element
        {
            counter++;
            if (arr[i+1] == arr[i+2]) // if the next element is the same with the following element
            {
                cout<<"-1"<<endl; // output -1
                return 0; // immediately exits
            }
        }
    }
    cout<<counter<<endl;
    return 0;
}
