#include <iostream>

using namespace std;

void heapify(int arr[], int n, int i)
{
    int largest = i; // Initialize largest as root
    int l = 2*i + 1; // left = 2*i + 1
    int r = 2*i + 2; // right = 2*i + 2

    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;

    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // If largest is not root
    if (largest != i)
    {
        swap(arr[i], arr[largest]);

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

// main function to do heap sort
void heapSort(int arr[], int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // One by one extract an element from heap
    for (int i=n-1; i>=0; i--)
    {
        // Move current root to end
        swap(arr[0], arr[i]);

        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

int main()
{
    int numberOfStewards, feed=0; //Initialize the number of Stewards and Feed counter.
    cin>>numberOfStewards;
    int stewardStrength[numberOfStewards]; //Steward strength array based on number of stewards.

    for (int i=0; i<numberOfStewards; i++)
    {
        cin>>stewardStrength[i];
    }

    heapSort(stewardStrength, numberOfStewards); //Call the HeapSort function

    for (int i=1; i<numberOfStewards-1; i++) //To cycle between stewards that are not the weakest and strongest
    {
        if (stewardStrength[i]>stewardStrength[0]&&stewardStrength[i]<stewardStrength[numberOfStewards-1]) // If current steward at least stronger than the weakest
                                                                                                            //and weaker than the strongest
        {
            feed++; //Jon Snow will feed.
        }
    }

    cout<<feed<<endl;
}
