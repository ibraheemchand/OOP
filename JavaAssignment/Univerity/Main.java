package JavaAssignment.Univerity;



import java.util.*;
import java.io.*;
public class Main {
    public static void main(String[] args) {
        int sel = 1; 
         ArrayList<Person> List = new ArrayList<>();
           
        Scanner sc = new Scanner(System.in);
        while (sel<=6 && sel>=0) { 
            System.out.println(     "1. Add Student\n" );
            System.out.println(  "2. Add Teacher\n"   );
            System.out.println(    "3. Display All Records\n"   );
            System.out.println(    "4. Demonstrate Online Learning\n"   );
            System.out.println(    "5. Save Records to File\n");                        
            System.out.println(    "6.Exit \n"); 
            sel= sc.nextInt();
           
            while(sel<=6 && sel>=0){
                switch (sel) {
                case 1 :{
                    Person s = new Student(3.23,2,"chand",2501314);
                    List.add(s);
                    break;
                }
                case 2:{
                    Person t = new Teacher(323223, "OOP", "Fahad Tahir", 123);
                    List.add(t);
                    break;
                }
                case 3:{
                    
                    break;
                }
                case 4:{
                    
                    break;
                }
                case 5:{
                     try{FileWriter file = new FileWriter("data.txt");
                        file.write(List.get(0));

                     }
                    catch(IOException e){
                        System.out.println("! Error to read file ");
                        
                    }
                    break;
                    
                }
                case 6 :{
                   break;
                }
                
              
                default:
                    throw new AssertionError();
            }
            }
        }
        }

    }
}
