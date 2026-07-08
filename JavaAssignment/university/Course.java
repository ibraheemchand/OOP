package university;

public class Course {
    private int courseId;
    private String courseName;

    public Course(int courseId, String courseName) {
        this.courseId = courseId;
        this.courseName = courseName;
    }

    public void showCourse() {
        System.out.println("Course ID: " + this.courseId);
        System.out.println("Course Name: " + this.courseName);
    }
}
