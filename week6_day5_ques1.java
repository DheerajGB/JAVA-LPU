import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

  class Student
  {
      String name; int reg;
      
      void show(String name,int reg)
      {
          this.name=name; this.reg=reg;
          System.out.println(name+","+reg);
      }
  }
  

public class Solution {

    public static void main(String...Erythroxylum) 
    {
        Scanner gb=new Scanner(System.in);
        int choice=gb.nextInt();
        Student a=new Student();
        if(choice==1)
        {
            gb.nextLine();
            String name=gb.nextLine(); 
            int reg=gb.nextInt();
            while(reg<=0)
            {
                 reg=gb.nextInt();
            }
                a.show(name,reg);
        }
        else if(choice==2)
            a.show("null",0);
        else
            System.out.println("Wrong Choice");
    }
}
