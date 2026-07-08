package university;

public class Student extends Person implements OnlineLearning {
    private double cgpa;
    private int semester;

    public Student(int id, String name, double cgpa, int semester) {
        super(id, name);
        setCgpa(cgpa);
        setSemester(semester);
    }

    public void setCgpa(double cgpa) {
        try {
            if (cgpa < 0.0 || cgpa > 4.0) {
                throw new InvalidCgpaException("Invalid CGPA");
            }
            this.cgpa = cgpa;
        } catch (InvalidCgpaException e) {
            System.out.println(e.getMessage());
            this.cgpa = 0.0;
        } finally {
            System.out.println("CGPA checked");
        }
    }

    public void setSemester(int semester) {
        try {
            if (semester <= 0 || semester > 8) {
                throw new InvalidSemesterException("Invalid semester");
            }
            this.semester = semester;
        } catch (InvalidSemesterException e) {
            System.out.println(e.getMessage());
            this.semester = 1;
        } finally {
            System.out.println("Semester checked");
        }
    }

    @Override
    public void displayRole() {
        System.out.println("Role: Student");
    }

    @Override
    public void showDetails() {
        super.showDetails();
        System.out.println("CGPA: " + this.cgpa);
        System.out.println("Semester: " + this.semester);
    }

    @Override
    public String getDetails() {
        return "Student - " + super.getDetails() + ", CGPA: " + this.cgpa + ", Semester: " + this.semester;
    }

    @Override
    public void uploadLecture() {
        System.out.println("Student can watch uploaded lectures");
    }

    @Override
    public void takeQuiz() {
        System.out.println("Student is taking quiz");
    }
}
