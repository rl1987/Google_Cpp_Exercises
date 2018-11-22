#include <iostream>

using namespace std;

#define kCoeffAssignments   (0.4)
#define kCoeffMidterm       (0.15)
#define kCoeffFinal         (0.35)
#define kCoeffParticipation (0.1)

int readScore() {
  int score;

  cin >> score;
  if (!cin.good())
    return -1;

  return score;
}

int main() {
  int score;

  int assignmentScores[4];
  int midtermGrade;
  int finalGrade;
  int participationScore;

  cout << "Enter the score for the first assignment. ";
  score = readScore();
  if (score == -1) return -1;

  assignmentScores[0] = score;

  cout << "Enter the score for the second assignment. ";
  score = readScore();
  if (score == -1) return -1;

  assignmentScores[1] = score;

  cout << "Enter the score for the third assignment. ";
  score = readScore();
  if (score == -1) return -1;

  assignmentScores[2] = score;

  cout << "Enter the score for the fourth assignment. ";
  score = readScore();
  if (score == -1) return -1;

  assignmentScores[3] = score;

  cout << "Enter the score for the midterm. ";
  score = readScore();
  if (score == -1) return -1;

  midtermGrade = score;

  cout << "Enter the score for the final. ";
  score = readScore();
  if (score == -1) return -1;

  finalGrade = score;

  cout << "Enter the score for the section grade. ";
  score = readScore();
  if (score == -1) return -1;

  participationScore = score;

  double finalScore = (assignmentScores[0]/4.0 + assignmentScores[1]/4.0 + assignmentScores[2]/4.0 + assignmentScores[3]/4.0) 
          * kCoeffAssignments + midtermGrade * kCoeffMidterm + finalGrade * kCoeffFinal + participationScore * kCoeffParticipation;
  
  cout << "The final grade is: " << finalScore << endl;
}
