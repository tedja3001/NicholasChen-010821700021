 #include <iostream>
#include <map>
using namespace std;

int main()
{
    int numberOfStudents, sizeOfTeam, score;

    cin>>numberOfStudents; //this is to input the number of Students
    cin>>sizeOfTeam; //size of Team needed
    map<int, int> ranks; //I will use map for this problem, and name it ranks.
    map<int, int>::iterator it; //This iterator will be used for finding and navigating in map purposes.

    for (int i=1; i<=numberOfStudents; i++)
    {
        cin>>score; //the scores of people.
        it = ranks.find(score); //we use iterator "it" to find, if there is a duplicate score in "ranks".
        if (it!=ranks.end()) //the iterator will find the score, if there is a duplicate score, iterator will stop before "ranks" end.
        {
            continue;
        }
        else //if not, then insert a pair of the score and position.
        {
            ranks.insert(pair<int,int>  (score, i));
        }
    }

    if (ranks.size()>=sizeOfTeam) //if the size of the mapped values are larger, or the same with the size of the Team members needed, go inside this condition.
    {
        int counter = 0;
        cout<<"YES"<<endl; //prints "YES"
        for (it = ranks.begin(); it!=ranks.end(); it++)
        {
            if (counter==sizeOfTeam) //used if the values inside the map "ranks" are larger than size of the team needed. Counter is to limit the output.
            {
                break;
            }
            cout<<(*it).second<<" "; //to dereference the iterator and print out the second element of the pair, which holds the position.
            counter++; //counter is used to keep adding until desired limit of the team size.
        }
    }
    else
    {
        cout<<"NO"<<endl; //prints "NO" if the size of mapped elements is smaller than the desired team size.
    }


    return 0;
}
