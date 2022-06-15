#include<iostream>
using namespace std;
class Time{
private:
    int Hours;
    int Minutes;
    int Seconds;
public:
    //Parameterized constructor.
    Time(int HR = 0, int MIN = 0, int SEC = 0) {
        this->Hours = HR;
        this->Minutes = MIN; 
        this->Seconds = SEC;
       }

       //When adding 2x and returning the result time using the operator Overloading
       Time operator + (Time const &obj){
           Time res;
           res.Seconds = this->Seconds + obj.Seconds;
       res.Minutes = this->Minutes + obj.Minutes + res.Seconds/60;
       res.Hours = this->Hours + obj.Hours + res.Minutes/60;
       res.Minutes %= 60;
       res.Seconds %= 60;
       return res;
       }
      
    //Having  the  time be displayed
    void print(){
    cout<<this->Hours<<" Hours, "<<this->Minutes<<" Minutes, "<<this->Seconds<<" Seconds"<<endl;
    ;}
};