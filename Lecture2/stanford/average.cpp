/*
* average.cpp
* This program adds scores and prints their average
*/

# include "genlib.h"
# include "simpio.h"
# include <iostream>

const int NumScores = 4;

double GetScoresAndAverage (int numScores);

int main()
{
   cout << "This program averages" << NumScores << " scores." << endl;
   double average = GetScoresAndAverage(NumScores);
   cout << "The average is " << average << "," << endl;
   return 0;

}


double GetScoresAndAverage(int numScores)

{  int sum = 0;
   for (int i = 0; i < numScores; i++) 
   {
       cout << "Next score?";
       int nextScore = GetInteger();
       sum += nextScore;
   }

  


}
