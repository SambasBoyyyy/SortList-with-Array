#include <iostream>
#include "sortedList.cpp"


using namespace std;

class student{

    friend bool operator==(student,student);
      friend bool operator > (student,student);
  private :
      int id;
      string name;
      float cgpa;


  public :

     student();
     student(int,string,float);

     int getid();
     string getname();
     float getcgpa();

    void print_info();

};

bool operator==(student o1,student o2)
{
    return (o1.id)==(o2.id);
}
bool operator>(student o1,student o2)
{
    if((o1.id)>(o2.id))
    {
        return true;
    }
    else{
        return false;
    }
}


  student::student(){

  }

  student::student(int Id,string Name,float Cgpa){

         id=Id;
         name=Name;
         cgpa=Cgpa;
  }

  int student::getid()
  {
      return id;
  }
  string student::getname()
  {
      return name;
  }
   float student::getcgpa()
  {
      return cgpa;
  }

  void student::print_info(){

  cout<<"ID="<<id<<"\t"<<"Name="<<name<<"\t"<<"CGPA="<<cgpa<<endl;
  }

  void PrintList(SortedList<student> u){
         student temp;

         for(int i=0; i<u.isLength(); i++){
                u.getNextItem(temp);
               temp.print_info();
         }
       u.resetList();


  }

int main()
{

 student ob1(131,"Mamu",3.0);
    student ob2(121,"Sam",4.4);

      student ob3(141,"WamO",2.0);

    SortedList<student> st;

    st.Insert(ob1);
    st.Insert(ob2);
    st.Insert(ob3);

    PrintList(st);

    st.Delete(ob1);
    PrintList(st);

}
