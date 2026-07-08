package university;

public abstract class Person {
    protected int id;
    protected String name;

    public Person(int id, String name) {
        this.id = id;
        this.name = name;
    }

    public abstract void displayRole();

    public void showDetails() {
        System.out.println("ID: " + this.id);
        System.out.println("Name: " + this.name);
    }

    public String getDetails() {
        return "ID: " + this.id + ", Name: " + this.name;
    }
}
