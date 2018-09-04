Problem 912A - Tricky Alchemy
=====

**The explanation for this particular problem is fairly simple.

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
