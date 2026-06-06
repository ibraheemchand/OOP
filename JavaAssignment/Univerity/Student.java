package JavaAssignment.Univerity;

class Student extends Person implements OnlineLearning  {
    double GPA;
    int semester;
    
    @Override
    void displayRole() {
       System.out.println("The gpa is :"+ this.GPA + " in " + this.semester);
       
    }
    @Override
    public void WatchLecture(){
         System.out.println("Lecture is playing ");
    }
    @Override
    public void GiveQuiz(){
    System.out.println("Quiz is started ");
}

    Student() {
        this.GPA = 0.00;
        this.semester =0;
    }

    public Student(double GPA, int semester, String a, int id) {
        super(a, id);
        this.GPA = GPA;
        this.semester = semester;
    }
    

}