package university;

import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        ArrayList<Person> records = new ArrayList<>();
        Scanner sc = new Scanner(System.in);
        int choice;

        do {
            System.out.println("1. Add Student");
            System.out.println("2. Add Teacher");
            System.out.println("3. Display All Records");
            System.out.println("4. Demonstrate Online Learning");
            System.out.println("5. Demonstrate Polymorphism");
            System.out.println("6. Save Records to File");
            System.out.println("7. Exit");
            System.out.print("Enter choice: ");
            choice = sc.nextInt();
            sc.nextLine();

            switch (choice) {
                case 1:
                    System.out.print("Enter student id: ");
                    int studentId = sc.nextInt();
                    sc.nextLine();
                    System.out.print("Enter student name: ");
                    String studentName = sc.nextLine();
                    System.out.print("Enter CGPA: ");
                    double cgpa = sc.nextDouble();
                    System.out.print("Enter semester: ");
                    int semester = sc.nextInt();
                    records.add(new Student(studentId, studentName, cgpa, semester));
                    break;

                case 2:
                    System.out.print("Enter teacher id: ");
                    int teacherId = sc.nextInt();
                    sc.nextLine();
                    System.out.print("Enter teacher name: ");
                    String teacherName = sc.nextLine();
                    System.out.print("Enter salary: ");
                    double salary = sc.nextDouble();
                    sc.nextLine();
                    System.out.print("Enter subject: ");
                    String subject = sc.nextLine();
                    records.add(new Teacher(teacherId, teacherName, salary, subject));
                    break;

                case 3:
                    for (Person person : records) {
                        person.showDetails();
                        System.out.println();
                    }
                    break;

                case 4:
                    for (Person person : records) {
                        if (person instanceof OnlineLearning) {
                            OnlineLearning online = (OnlineLearning) person;
                            online.uploadLecture();
                            online.takeQuiz();
                        }
                    }
                    break;

                case 5:
                    for (Person person : records) {
                        person.displayRole();
                    }
                    break;

                case 6:
                    try {
                        BufferedWriter writer = new BufferedWriter(new FileWriter("records.txt"));
                        for (Person person : records) {
                            writer.write(person.getDetails());
                            writer.newLine();
                        }
                        writer.close();
                        System.out.println("Records saved successfully");
                    } catch (IOException e) {
                        System.out.println("File error: " + e.getMessage());
                    } finally {
                        System.out.println("File handling completed");
                    }
                    break;

                case 7:
                    System.out.println("Program ended");
                    break;

                default:
                    System.out.println("Invalid choice");
            }
        } while (choice != 7);

        sc.close();
    }
}
