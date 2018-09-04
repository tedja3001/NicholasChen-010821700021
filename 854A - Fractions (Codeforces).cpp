#include <iostream>

using namespace std;

int main()
{
    int numerator, denominator, number;
    cin>>number; //inputs a number
    if (number%2==0) //if it is an even number
    {
        numerator = number/2; //the pattern is such, in which the numerator will be the number divided by 2
        denominator = number - numerator; //the denominator will be the subtracted amount from the number and the numerator
        numerator--; //after dividing, the numerator will be subtracted by one, since the numerator needs to be lesser than the denominator to form a proper fraction.
        denominator++; //this is to balance out the sum of the number itself, so denominator will be added by one.
        if (numerator%2==0&&denominator%2==0) //this is if the numerator and denominator can still be divisible with a larger common factor other than 1.
        {
            numerator--; //numerator will be subtracted by one again
            denominator++; //and denominator will be added by one as well.
        }

    }
    else //if it is an odd number
    {
       numerator = number/2; //numerator will be the divided amount from the number by 2
       denominator = number - numerator; //and then denominator will be the subtracted amount from the input number and the numerator as above.
    }
    cout<<numerator<<" "<<denominator<<endl; //output will show the numerator and the denominator.
    return 0;
}
