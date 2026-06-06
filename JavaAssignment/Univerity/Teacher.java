package JavaAssignment.Univerity;

public class Teacher extends Person implements OnlineTeaching{
 
    double salary;
    String subject;
  static String Roll;

 @Override
  public void TakeQuiz(){
    System.out.println(" ! Quiz is taken successfully ");

  }
 @Override
 public void Uploadlecture(){
 System.out.println(" !  Lecture uploaded successfully ");

 }
    
   Teacher() {
    this.Roll="Teacher";
    this.salary=0.00;
    this.subject="";
    super();
    
    }

    Teacher(double sal ,String sub , String name , int id  ){
        super(name,id);
         this.Roll="Teacher";
         this.salary=sal;
         this.subject=sub;
    }

    @Override
    void displayRole() {
        
    }

} 
    

