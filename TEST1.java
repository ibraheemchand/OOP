import java.util.*;
class Student{ 
    public String name;
    
  
    
    Student( String s ){
        this.name = s;
    }
}

public class TEST1{   

    public static void main(String[] args) {
             Scanner sc = new Scanner(System.in);
             String s = sc.next();
       System.out.print("Write name ");
        ArrayList<Student> list = new ArrayList<Student>();
        
        list.add(new Student(s));
        list.add(new Student("ibraheemChand"));
        
        for (int i = 0; i < list.size(); i++) {
            System.out.println(list.get(i).name);
        }
        
        
    }
       
    }

