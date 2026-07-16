import java.util.Scanner;

class Student {
    int id;
    String name;
    int age;
    double marks;

    Student(int id, String name, int age, double marks) {
        this.id = id;
        this.name = name;
        this.age = age;
        this.marks = marks;
    }

    void display() {
        System.out.println("--------------------------------");
        System.out.println("ID      : " + id);
        System.out.println("Name    : " + name);
        System.out.println("Age     : " + age);
        System.out.println("Marks   : " + marks);
        System.out.println("Grade   : " + getGrade());
    }

    String getGrade() {
        if (marks >= 90)
            return "A+";
        else if (marks >= 80)
            return "A";
        else if (marks >= 70)
            return "B";
        else if (marks >= 60)
            return "C";
        else if (marks >= 50)
            return "D";
        else
            return "F";
    }
}

public class StudentManagementSystem {

    static Student[] students = new Student[100];
    static int count = 0;
    static Scanner sc = new Scanner(System.in);

    public static void addStudent() {
        System.out.print("Enter Student ID: ");
        int id = sc.nextInt();
        sc.nextLine();

        System.out.print("Enter Name: ");
        String name = sc.nextLine();

        System.out.print("Enter Age: ");
        int age = sc.nextInt();

        System.out.print("Enter Marks: ");
        double marks = sc.nextDouble();

        students[count++] = new Student(id, name, age, marks);

        System.out.println("Student Added Successfully!");
    }

    public static void viewStudents() {
        if (count == 0) {
            System.out.println("No Students Found!");
            return;
        }

        for (int i = 0; i < count; i++) {
            students[i].display();
        }
    }

    public static void searchStudent() {
        System.out.print("Enter Student ID to Search: ");
        int id = sc.nextInt();

        for (int i = 0; i < count; i++) {
            if (students[i].id == id) {
                students[i].display();
                return;
            }
        }

        System.out.println("Student Not Found!");
    }

    public static void updateStudent() {
        System.out.print("Enter Student ID to Update: ");
        int id = sc.nextInt();

        for (int i = 0; i < count; i++) {
            if (students[i].id == id) {

                sc.nextLine();

                System.out.print("Enter New Name: ");
                students[i].name = sc.nextLine();

                System.out.print("Enter New Age: ");
                students[i].age = sc.nextInt();

                System.out.print("Enter New Marks: ");
                students[i].marks = sc.nextDouble();

                System.out.println("Student Updated Successfully!");
                return;
            }
        }

        System.out.println("Student Not Found!");
    }

    public static void deleteStudent() {
        System.out.print("Enter Student ID to Delete: ");
        int id = sc.nextInt();

        for (int i = 0; i < count; i++) {
            if (students[i].id == id) {

                for (int j = i; j < count - 1; j++) {
                    students[j] = students[j + 1];
                }

                count--;
                System.out.println("Student Deleted Successfully!");
                return;
            }
        }

        System.out.println("Student Not Found!");
    }

    public static void calculateAverage() {
        if (count == 0) {
            System.out.println("No Students Available!");
            return;
        }

        double total = 0;

        for (int i = 0; i < count; i++) {
            total += students[i].marks;
        }

        double average = total / count;

        System.out.println("Average Marks = " + average);
    }

    public static void findTopper() {
        if (count == 0) {
            System.out.println("No Students Available!");
            return;
        }

        Student topper = students[0];

        for (int i = 1; i < count; i++) {
            if (students[i].marks > topper.marks) {
                topper = students[i];
            }
        }

        System.out.println("Topper Details:");
        topper.display();
    }

    public static void main(String[] args) {

        int choice;

        do {
            System.out.println("\n========== STUDENT MANAGEMENT SYSTEM ==========");
            System.out.println("1. Add Student");
            System.out.println("2. View Students");
            System.out.println("3. Search Student");
            System.out.println("4. Update Student");
            System.out.println("5. Delete Student");
            System.out.println("6. Calculate Average Marks");
            System.out.println("7. Find Topper");
            System.out.println("8. Exit");
            System.out.print("Enter Choice: ");

            choice = sc.nextInt();

            switch (choice) {
                case 1:
                    addStudent();
                    break;

                case 2:
                    viewStudents();
                    break;

                case 3:
                    searchStudent();
                    break;

                case 4:
                    updateStudent();
                    break;

                case 5:
                    deleteStudent();
                    break;

                case 6:
                    calculateAverage();
                    break;

                case 7:
                    findTopper();
                    break;

                case 8:
                    System.out.println("Thank You!");
                    break;

                default:
                    System.out.println("Invalid Choice!");
            }

        } while (choice != 8);

        sc.close();
    }
}