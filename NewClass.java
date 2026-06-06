class Student{
    
    public String name;
    Student(){
        
    }
    Student(Student c){
        this.name = c.name;
    }
}

public class NewClass{   
    public static void main(String[] args) {
        Student s1 = new Student();
        s1.name = "Saaib";
        Student s2= new Student(s1);
        
       s2.name  = "Ali";
       System.out.println(s1.name +"\n"+   s2.name );
       
    }}