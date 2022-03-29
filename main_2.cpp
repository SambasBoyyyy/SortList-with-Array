#include <iostream>
#include "sortedList.cpp"


using namespace std;



class timeStamp
{
    friend bool operator==(timeStamp,timeStamp);
    friend bool operator > (timeStamp,timeStamp);
   private:
   int hour;
   int min;
   int sec;
   public:
   timeStamp();
   timeStamp(int,int,int);
   void PrintList();
   int getHour();
   int getMin();
   int getSec();
};

bool operator==(timeStamp s1,timeStamp s2)
{
    return (s1.hour*3600+s1.min*60+s1.sec)==(s2.hour*3600+s2.min*60+s2.sec);
}
bool operator>(timeStamp s1,timeStamp s2)
{
    if((s1.hour*3600+s1.min*60+s1.sec)>(s2.hour*3600+s2.min*60+s2.sec))
    {
        return true;
    }
    else{
        return false;
    }
}
timeStamp::timeStamp()
{
}
timeStamp::timeStamp(int Hour,int Min,int Sec)
{
       hour=Hour;
       min=Min;
       sec=Sec;
}
int timeStamp::getHour()
{
    return hour;
}
int timeStamp::getMin()
{
    return min;
}
int timeStamp::getSec()
{
    return sec;
}
void timeStamp::PrintList()
{
    cout<<hour<<":"<<min<<":"<<sec<<endl;
}
void PrintAll(SortedList<timeStamp> u)
{
    timeStamp temp;
    for (int i = 0; i < u.isLength(); i++)
    {
        u.getNextItem(temp);
       temp.PrintList();
    }
    cout<<endl;
   // u.resetList();
}

int main()
{
    timeStamp obj1(15,34,23);
    timeStamp obj2(13,13,2);
    timeStamp obj3(43,45,12);
    timeStamp obj4(25,36,17);
    timeStamp obj5(52,2,20);

    SortedList<timeStamp> timelist;
  
    timelist.Insert(obj1); 
    timelist.Insert(obj2);
    timelist.Insert(obj3);
    timelist.Insert(obj4);
    timelist.Insert(obj5);

    PrintAll(timelist);
    cout<<"After deletation of 25:36:17 "<<endl;
    timelist.Delete(obj4);
    PrintAll(timelist);

}
