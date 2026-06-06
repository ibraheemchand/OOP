package JavaAssignment.Univerity;

public abstract class Person {

    String name ;
    int id;

    abstract void displayRole();

    Person(String a , int id){
        this.name=a;
        this.id=id;
    }
    Person(){
        this.name=null;
        this.id=0;
    }

    public void showDetails(){
        System.out.println("The name of person is  " + this.name);
        System.out.println("The ID of person is  " + this.id);
    }
    
} 
    

