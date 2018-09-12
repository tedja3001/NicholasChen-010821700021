#include <iostream>

using namespace std;

struct dragon //To initialize dragon with two components
{
    int dragonStrength;
    int dragonBonusPoints;
};


void shellSort(struct dragon arr[], int n) //Shellsort Algorithm
{
    for (int gap=n/2; gap>0; gap=gap/2)
    {
        for (int i=gap; i<n; i++)
        {
            for (int j=i-gap; j>=0; j=j-gap)
            {
                if (arr[j+gap].dragonStrength<=arr[j].dragonStrength)
                {
                    dragon temp = arr[j];
                    arr[j] = arr[j+gap];
                    arr[j+gap] = temp;
                }
            }
        }
    }
}


int main()
{
    int kiritoStrength, numberOfDragons;

    cin>>kiritoStrength;
    cin>>numberOfDragons;

    dragon dragonCharacter[numberOfDragons]; //To initialize a dragon struct array type of numberOfDragons amount.

    for (int i=0; i<numberOfDragons; i++)//To initialize the numbers into the components.
    {
        cin>>dragonCharacter[i].dragonStrength;
        cin>>dragonCharacter[i].dragonBonusPoints;
    }

    shellSort(dragonCharacter, numberOfDragons); //Calls out the sorting algorithm.

    int counter = 0;
    do
    {
        if (kiritoStrength - dragonCharacter[counter].dragonStrength > 0) //if Kirito has more strength than current Dragon.
        {
            kiritoStrength=kiritoStrength+(dragonCharacter[counter].dragonBonusPoints); //He gets Dragon's bonus points.
        }
        else
        {
            cout<<"NO"<<endl;
            return 0; //"NO" and ends the program the moment Kirito cannot defeat a dragon.
        }
        counter++;
    }while (counter<numberOfDragons); //runs as long as 'counter' does not equal to number of dragons.

    cout<<"YES"<<endl;

    return 0;
}
