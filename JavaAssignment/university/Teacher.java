package university;

public class Teacher extends Person implements OnlineLearning {
    private double salary;
    private String subject;

    public Teacher(int id, String name, double salary, String subject) {
        super(id, name);
        setSalary(salary);
        this.subject = subject;
    }

    public void setSalary(double salary) {
        try {
            if (salary < 0) {
                throw new NegativeSalaryException("Negative salary");
            }
            this.salary = salary;
        } catch (NegativeSalaryException e) {
            System.out.println(e.getMessage());
            this.salary = 0.0;
        } finally {
            System.out.println("Salary checked");
        }
    }

    @Override
    public void displayRole() {
        System.out.println("Role: Teacher");
    }

    @Override
    public void showDetails() {
        super.showDetails();
        System.out.println("Salary: " + this.salary);
        System.out.println("Subject: " + this.subject);
    }

    @Override
    public String getDetails() {
        return "Teacher - " + super.getDetails() + ", Salary: " + this.salary + ", Subject: " + this.subject;
    }

    @Override
    public void uploadLecture() {
        System.out.println("Teacher uploaded lecture");
    }

    @Override
    public void takeQuiz() {
        System.out.println("Teacher created quiz");
    }
}
