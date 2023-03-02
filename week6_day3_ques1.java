import java.util.Scanner;

public class Student 
{
private String name;

public Student(String name)
{
if (name.matches("[a-zA-Z]+")) 
this.name = name;
else 
this.name = "Unknown";
}

public String getName()
{
return name;
}

public static void main(String...Erythroxylum) 
{
Scanner gb= new Scanner(System.in);

String nameInput = gb.nextLine().trim();
Student stud1 = new Student(nameInput);
System.out.println(stud1.getName());

String otherInput = scanner.nextLine().trim();
Student stud2 = new Student(otherInput);
System.out.println(stud2.getName());
gb.close();
}
}
