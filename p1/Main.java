import java.io.FileWriter;
import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {

        ArrayList<String> students = new ArrayList<>();

        students.add("Ali");
        students.add("Ahmed");
        students.add("Ibraheem");

        try {
            FileWriter fw = new FileWriter("students.txt");

            for(String name : students) {
                fw.write(name + "\n");
            }

            fw.close();

            System.out.println("Data written successfully");
        }
        catch(Exception e) {
            System.out.println(e);
        }
    }
}