

    /*

                       Student
                    |          |
                |                |
            |                       |
     Undergraduate_Student       Graduate_Student
         |  |    |                  |         |
       |     |    |                |           |
      |       |    |              |             |
     |         |    |            |               |
Freshman   Junior  Senior    Doctoral_Student  Masters_Student



     */


#include<iostream>
using namespace std;
class student
{
private:
    string name;
    int student_id;
    int uni_roll;
public:
    void set_details(string name,int a, int b)
    {
        student_id=a;
        uni_roll=b;
        this->name=name;
    }
    void display()
    {
        cout<<"student name="<<name<<endl<<"student id="<<student_id<<endl<<"university roll="<<uni_roll<<endl;
    }
};

class undergraduate:public student
{
private:
    string ug_course;
public:
    void set_ug(string ug_course)
    {
        this->ug_course=ug_course;
    }

    void show_ug()
    {
        cout<<"The UG Course is:"<<ug_course<<endl<<endl;
    }
};

class graduate:public student
{
private:
    string pg_course;
public:

    void set_pg(string pg_course)
    {
        this->pg_course=pg_course;
    }

    void show_pg()
    {
        cout<<"The PG Course is:"<<pg_course<<endl<<endl;
    }
};

class freshmen:public undergraduate
{  public:
    freshmen()
    {
        cout<<"Welcome freshmen"<<endl;
    }
};

class senior:public undergraduate
{   public:
    senior()
    {
        cout<<"Welcome senior"<<endl;
    }
};

class junior:public undergraduate
{   public:
    junior()
    {
        cout<<"Welcome junior"<<endl;
    }
};

class doctoral:public graduate

{

    public:;
    doctoral()
    {
        cout<<"Welcome doctoral student"<<endl;
    }
};

class master:public graduate
{
    public:
    master()
    {
        cout<<"Welcome masters student"<<endl;
    }
};

int main(void)
{
    master m1;
    m1.set_details("Anushree",12,84);
    m1.display();
    m1.set_pg("Computer Science");
    m1.show_pg();
    freshmen f1;
    f1.set_details("Archit",23,21);
    f1.display();
    f1.set_ug("Computer Science");
    f1.show_ug();
}
