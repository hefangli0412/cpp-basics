/**
   Note: we're going to add the new method described below.

   Student class supports the following methods:

   Student stud = new Student("Joe");  // has name "Joe" and total of 0
   Student blank = new Student();     // has empty name and total of 0
   
   String name = stud.getName();

   int total = stud.getTotalScore();

   stud.addQuiz(score);    // adds quiz score to the total for this student
                                 
   double avg = stud.getAverage();  // NEW METHOD gets avg score on quizzes
*/
public class Student {

    // Creates a student with given name and score of 0
    public Student(String name) {
	theName = name;
	totalScore = 0;
	numQuizzes = 0;
    }

    // Creates a student with an empty name and score of 0
    public Student() {
	theName = "";
	totalScore = 0;
	numQuizzes = 0;
    }

    public String getName() {
	return theName;
    }

    public int getTotalScore() {
	return totalScore;
    }

    public void addQuiz(int score) {
	totalScore += score;
	numQuizzes++;
    }

    public double getAverage() {
	if (numQuizzes == 0) {
	    return 0.0;
	}

	double average = (double) totalScore / numQuizzes;
	return average;
    }

    private String theName;
    private int totalScore;
    private int numQuizzes;

}
