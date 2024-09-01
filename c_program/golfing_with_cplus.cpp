// golfing_with_cplus.cpp
// This program is used to calculate the average of three rounds of golf
// Randy Hamm
// 09-01-2024
// Problem #27




#include <iostream>
using namespace std;

int main() {
  // Declare variable for each score, as well as the average
  float score1, score2, score3, average;

  // Prompt user to enter the scores for each game
  cout << "Enter the score for the first game: ";
  cin >> score1;

  cout << "Enter the score for the second game: ";
  cin >> score2;
  
  cout << "Enter the score for the third game: ";
  cin >> score3;
  
  // Calculate the average
  average = (score1 + score2 + score3) / 3;

  // Display the average score
  cout << "The average score is: " << average << endl;

  return 0;
}
