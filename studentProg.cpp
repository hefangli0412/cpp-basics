#include <iostream>
#include <string>

using namespace std;

/**
   C++ version of code in Student.java and StudentTester.java
   this version has a main program in the same file with the
   class.

   Student class supports the following methods:

   Student stud("Joe");  // has name "Joe" and total of 0
   Student blank;     // has empty name and total of 0
   
   String name = stud.getName();

   int total = stud.getTotalScore();

   stud.addQuiz(score);    // adds quiz score to the total for this student
   double avg = stud.getAverage();  // gets avg score on quizzes
*/
class Student {

 public:

    // Creates a student with given name and score of 0
  Student(string name);

    // Creates a student with an empty name and score of 0
  Student();


  // a const method is an accessor; it doesn't modify the object
  // you call it on.
  string getName();

  int getTotalScore() const;

  void addQuiz(int score);

  double getAverage() const;


 private: 
  string theName;
  int totalScore;
  int numQuizzes;
};


Student::Student(string name) {
  theName = name;
  totalScore = 0;
  numQuizzes = 0;
}


Student::Student() {
  theName = "";
  totalScore = 0;
  numQuizzes = 0;
}

string Student::getName() const {
  return theName;
}

int Student::getTotalScore() const {
  return totalScore;
  // return this->totalScore;
}

void Student::addQuiz(int score) {
  totalScore += score;
  numQuizzes++;
}

double Student::getAverage() const {
  if (numQuizzes == 0) {
    return 0;
  }
  else {
    return totalScore / (double)numQuizzes;
  }
}


void printStudent(const Student & student) {
   // if getName() or getTotalScore() is not const, printStudent cannot use const here
  cout << student.getName() << " " << student.getTotalScore()
       <<  " " << student.getAverage() << endl;
}



// test the Student class

int main() {

  Student stud1("Joe");
  printStudent(stud1);

  Student stud2;
  printStudent(stud2);

  stud1.addQuiz(10);
  stud1.addQuiz(8);
  stud1.addQuiz(9);
  stud1.addQuiz(7);
  stud1.addQuiz(10);

  cout << "Expected results for total: 44" << endl;
  cout << "Expected results for avg: 8.8" << endl;

  printStudent(stud1);

  return 0;
}
