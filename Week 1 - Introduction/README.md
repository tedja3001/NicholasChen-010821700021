Problem 912A - Tricky Alchemy
=====

**The explanation for this particular problem is fairly simple.**

The problem starts of with a certain number of yellow and blue crystals at Grisha's disposal. 
She is required to obtain a given amount of yellow, green and blue balls as well.

My code starts off with a few variables;
1. yellow to represent the amount of Yellow crystals Grisha has
2. blue to represent the amount of Blue crystals Grisha has
3. needYellow to represent the amount of Yellow balls needed. (2 * yellow crystals)
4. needGreen to represent the Green balls needed. (1 * yellow crystal + 1 * blue crystal)
5. needBlue to represent the Blue balls needed. (3 * blue crystals)

My algorithm is very straightforward. Let's take the amount of yellow crystals needed to create a specific amount of yellow balls for our example.

Since it is fixed that Grisha would need exactly 2 yellow balls to create one yellow crystal, we can use this method;
needYellow = needYellow * 2;
This will transform the variable needYellow from its original purpose, to a variable that stores the required amount of yellow crystals, to successfully create the required amount of yellow balls.

After that is done, the following code will be executed;
yellow = yellow - needYellow;
This will subtract the required amount of yellow crystals from the yellow crystals Grisha has at her disposal. 

This algorithm will be the same for needGreen and needBlue, along with the respective amounts of crystals to be subtracted from Grisha's yellow and blue storage.

For a clearer depiction, please refer to the links as follows;

[Problemset 912A - Tricky Alchemy](https://codeforces.com/problemset/problem/912/A)

[Solution](https://codeforces.com/contest/912/submission/42300609)

----------------------------------------------------

Problem 875A - Fractions
=====

The problem starts off with Petya's input of a certain number, and from that number, a proper fraction (numerator<denominator) has to be generated, along with the numerator and the denumerators being coprime-which would lead to the entire fraction being irreducible. 

My code starts off with three variables: **The number to be input, the numerator and the denominator.**

After a while of tinkering, there appeared a certain pattern, in which when I seized it, gave me the correct results each and every time.

My algorithm goes like this;
1. If *number* is even, then the numerator will be the result of *number*/2.
2. Automatically, the denominator will be the subtracted result of *number* and *numerator*.
3. Once all of variables have their respective values, numerator will **decrement by 1** and denominator will **increment by 1**, simply because numerator has to be smaller than denominator to qualify as a proper fraction.
4. The numerator and denominator will be tested to see if they qualify as *coprime*. This has to be done, because the results may turn out as both even numbers.
5. If that is the case, the numerator will be decremented by 1 and the denominator incremented by 1 to achieve absolute *coprime* status a.k.a *irreducible*.
6. If *number* is odd, repeat steps 1 and 2. The result should already show a proper fraction along with an irreducible characteristic. This is possible because when a data type of **int** is divided into 2, the result would be rounded up to it's smaller state **(e.g. 7/2 = 3)**

In conclusion, there are actually more than one approaches to this problem, but if we are able to identify a pattern, the algorithm would be a lot easier than expected.

[Problemset 854A - Fractions](https://codeforces.com/contest/854/problem/A)

[Solution](https://codeforces.com/contest/854/submission/42423464)

-----------------------------------------------------

Problem 988A - Diverse Team
=====

The problem wants us to determine if there can be a requested amount of students of **distinct** scores to form a team. 
There are *n* number of students to select from, and the result should have a **"YES"** if it is possible to form the requested team, along with the respective positions of the students, or **"NO"** if it isn't possible to form the requested team.

The problem starts off with three inputs;
1. The number of students
2. The size of the requested team
3. The respective scores of the students

In my solution, I decided to use **map** from the C++ STL. Here, I would map the scores and positions of each and every individual student.

**NOTE**

*ranks* is a map.

'''
**for (int i=1; i<=numberOfStudents; i++)
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
    }**
'''    

The magic lies in this for loop. If there isn't a duplicate (i.e. all distinct scores from the students) then the two paired values (score and position (represented by *i*)) will be inserted into the map.

The output will just show the results- **"NO"** if the map size isn't equal to that of the requested team size, and **"YES"** along with the output of the student positions, if the map size is equal or larger than the requested team size.

[Problem 988A - Diverse Team](https://codeforces.com/contest/988/problem/A)

[Solution](https://codeforces.com/contest/988/submission/42355521)
