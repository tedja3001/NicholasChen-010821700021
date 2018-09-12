Problem 291A - Spyke Talks
==========================

For this particular problem, I chose to complete it with Comb Sort to sort the input numbers. For more info, you can find in depth explanation [here](https://www.geeksforgeeks.org/comb-sort/).

My solution to this problem follows the algorithm in which the current number in the array would be compared to the following number in the array. An if function compares the current number in the array with the following number, if it is the exact same number, then the algorithm would increment the **counter** variable, corresponding to the amount of 2 person calls at the current time. The code doesn't end there, there is an if function within the previous if, and it the following number is the exact same again with the next number, the code will output *"-1"* and exit (To indicate that it is impossible such a situation would exist based on the question's context).

For more info, please click on the corresponding links below.

[Problem 291A - Spyke Talks](http://codeforces.com/contest/291/problem/A)

[Solution](http://codeforces.com/contest/291/submission/42753032)


Problem 230A - Dragons
======================

The following illustrates the breakdown of my code in steps, all which I used to construct my algorithm as a solution to this problem;

1. I created a struct, and coined it as **"dragon"**. It consists of two elements, **dragonStrength** and **dragonBonusPoints**.
2. Performed all the required declarations, including an object from struct "dragon", in this case I chose to name it dragonCharacter.
3. Rendered all the necessary input, including dragonCharacter.dragonStrength and dragonCharacter.dragonBonusPoints.
4. Used Shell Sort to sort dragonCharacter's attributes in an ascending order. For more info on this sorting algorithm, please click on the link [here](https://www.geeksforgeeks.org/shellsort/).
5. Designed a do-while loop in which it would determine if Kirito's strength is enough to defeat the current dragon's Strength. If so, Kirito's Strength will receive an incremented bonus from the defeated dragon's dragonBonusPoints.
6. Loop will end once the counter arrives at the number of dragonCharacters.

For more info, please click on the corresponding links below.

[Problem 230A - Dragons](http://codeforces.com/contest/230/problem/A)

[Solution](http://codeforces.com/contest/230/submission/42753055)


Problem 768A - Oath of the Night's Watch
========================================

The following represents the idea breakdown of my code in a step-by-step format, all in which I adhered to in the making of my solution for this problem;

1. Performed all the required declarations, along with the initialization of an array of **int** type, in which it would store the steward's strengths.
2. Rendered all the necessary input.
3. Performed a Heap Sort to sort the steward's strengths in ascending order. For more info on Heap Sort, please click on the link [here](https://www.geeksforgeeks.org/heap-sort/).
4. Automatically, when you perform a sort on a certain sequence of numbers in an ascending order, the number in the first index would be the smallest, and the number on the last index would be the largest. Surely, Jon Snow wouldn't want to feed a steward without at least one other steward with strength higher than him, and at least one other steward with strength lower than him, so in this case, the first and last steward in this problem would be out of the question.
5. Looking deeper, that means all the numbers in between the first and the last element will be valid, unless they are of the same number. Thus, an for loop with specific control flow and a specific if condition is designed to answer this.

For more info, please click on the corresponding links below.

[Problem 768A - Oath of the Night's Watch](http://codeforces.com/contest/768/problem/A)

[Solution](http://codeforces.com/contest/768/submission/42753070)



