#include <iostream>

using namespace std;

int main()
{
    long long int yellow, blue;
    long long int needYellow, needGreen, needBlue;
    long long int sumAcquire = 0;

    cin>>yellow;
    cin>>blue;

    cin>>needYellow;
    cin>>needGreen;
    cin>>needBlue;
    //first is to count how much yellow crystals are needed for the yellow ball.
    needYellow=needYellow*2;
    //then result is subtracted from how many crystals we have.
    yellow = yellow - needYellow;

    //same algorithm for the green ball.
    yellow = yellow - needGreen;
    blue = blue - needGreen;

    //and of course it applies to the blue ball as well.
    needBlue=needBlue*3;
    blue = blue - needBlue;

    //if Grisha does not have enough yellow crystals, sumAcquire will output the lacking amount.
    if (yellow<0)
    {
        sumAcquire = sumAcquire + -(yellow);
    }
    //same for blue crystals.
    if (blue<0)
    {
        sumAcquire = sumAcquire + -(blue);
    }
    //but if they are both enough, then sumAcquire will output 0, i.e. no extra crystals needed.
    else if (yellow>0&&blue>0)
    {
        sumAcquire = 0;
    }
    //output the sum of crystals still lacking (if any).
    cout<<sumAcquire<<endl;


    return 0;
}
