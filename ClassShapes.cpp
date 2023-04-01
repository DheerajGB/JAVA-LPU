//Q1

#include<iostream>
using namespace std;
class Rectangle
{
	private:
		int length;
		int breadth;
	public:
		Rectangle()
		{
			length=0;
			breadth=0;
		}
		Rectangle(int x)
		{
			length=x;
			breadth=x;
		}
		Rectangle(int x,int y)
		{
			length=x;
			breadth=y;
		}
		int getarea()
		{
			return length*breadth;
			
		}
			
};
int main()
{
	Rectangle R1;
	Rectangle R2(10);
	Rectangle R3(2,3);
	
	cout<<R1.getarea()<<endl;
	cout<<R2.getarea()<<endl;
	cout<<R3.getarea()<<endl;
	
}
---------------------------------------------------------------------------
------------------------------//Q2//----------------------------------------

//class programming
#include<iostream>
using namespace std;
class Programming
{
	public:
		Programming(char arr[])
		{
			cout<<"I love "<<arr<<endl;
		}
		Programming()
		{
			cout<<"I love programming"<<endl;
		}
};
int main()
{
	char str[10];
	cout<<"enter string to be printed\n";
	cin>>str;
	Programming P1;
	Programming P2(str);
}
[4:56 pm, 13/01/2023] LPU Vidhya Sagar Hons Embedded: #include <iostream>
using namespace std;

class Area
{
public:
    void output(int l, int b)
    {
        cout<<"Area of Rectangle is = "<<l*b<<endl;
    }

    void output(int a)
    {
        cout<<"Area of Square is = "<<a*a<< endl;
    }
};

int main()
{
    Area obj;
    obj.output(5,6);
    obj.output(5);
}

---------------------------------------------------------------------------
------------------------------//Q3//----------------------------------------

#include <iostream>
using namespace std;

class Area
{
public:
    void output(int l, int b)
    {
        cout<<"Area of Rectangle is = "<<l*b<<endl;
    }

    void output(int a)
    {
        cout<<"Area of Square is = "<<a*a<< endl;
    }
};

int main()
{
    Area obj;
    obj.output(5,6);
    obj.output(5);
}


---------------------------------------------------------------------------
------------------------------//Q4//----------------------------------------

#include <iostream>
#include <string>
using namespace std;

class IntegerI{
private:
	int i;
public:
	IntegerI(int i){
		this->i=i;
	}


	void printNum(){
		cout<<"i = "<<i<<"\n";
	}
};


class IntegerJ:public IntegerI{
private:
	int j;
public:
	IntegerJ(int i,int j):IntegerI(i){
		this->j=j;
	}


	void printNum(){
		IntegerI::printNum();
		cout<<"j = "<<j<<"\n";
	}
};


int main() {
	IntegerJ integerJ(5,6);
	integerJ.printNum();

	system("pause");
	return 0;
  
  
  ---------------------------------------------------------------------------
------------------------------//Q5//----------------------------------------

  #include<iostream>
#include<string>
using namespace std;
class student{
 int age;
 string name, add;
 public:
  student()
  {
   name="unknown";
      age=0;
    add="not available";  
  }
  
 setinfo(char nam[20], int ag)
  {
   name=nam;
      age=ag;
   cout<<"Details of student is"<<endl; 
   cout<<"Name : "<<name<<endl;
   cout<<"Age : "<<age<<endl;
  }
  
 setinfo(string nam, int ag, string addres)
  {
   name = nam;
      age= ag;
    add=addres; 
  }
 void display()
  { 
    cout<<"Name : "<<name<<endl;
    cout<<"Age : "<<age<<endl;
    cout<<"Address : "<<add<<endl;
  }
};
int main()
{
 int j=10;
 student s[j];
 int age;
 string name, add;
 cout<<"\t Enter Details of Students"<<endl;
 cout<<"\n"<<endl;
 for (int i=0; i<j; i++)
 {
     cout<<" Enter details of "<<i+1<<" Student"<<endl; 
     cout<<"\t Name : ";
     cin>>name;
     cout<<"\t Age : ";
     cin >>age;
     cout<<"\t Address : ";
     cin>>add;
     s[i].setinfo(name, age, add);
     cout<<endl;
 }
   cout<<"\t Displaying Details of Students Entered"<<endl;
   cout<<"\n"<<endl;
   for(int i=0; i<j; i++)
   {
    cout<<"\n Details of "<<i+1<<" Student is"<<endl; 
    s[i].display();
   }
}
