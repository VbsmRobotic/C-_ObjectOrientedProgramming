#include<iostream>
#include<string>

using namespace std ;

class Student
{ 
private: 
        int Roll ;
        string Name ;
        double Mark_1 ;
        double Mark_2 ;
        double Mark_3 ;
                

public:
        //constructor : Non-parameterised, parameterised, copy
        Student()
        {
            Roll = 1 ;
            Name = "Vahid" ;
            Mark_1 = 1.0 ; 
            Mark_2 = 2.0 ;    
            Mark_3 = 3.0 ;            
        }
        //Parameterised constructor 
        Student(int R, string N, double M_1, double M_2, double M_3)
        {
            setRoll(R) ;
            setName(N) ;
            setMark_1(M_1) ;
            setMark_2(M_2) ;
            setMark_3(M_3) ;
        }
        //copy
        Student(Student &r)
        {
            Roll = r.Roll ;
            Name = r.Name ;
            Mark_1 = r.Mark_1 ;
            Mark_2 = r.Mark_2 ;
            Mark_3 = r.Mark_3 ;
        }
        //Mutator (set)
        void setRoll(int R)
        {
            if(R>0 && R<=50)
            {
                Roll = R ; 
            }else
            {
                cout << "ERROR: The roll number is not between 0-51 " << endl ;
            }            
        }
        void setName(string N)
        {
            int Length = N.length() ;
            for(int i=0; i< Length; i++)
            {
               if(i>=3 && i<=8)
               {
                   Name = N ; 
               }               
            }            
        }
        void setMark_1(double M_1)
        {           
            Mark_1 = M_1 ;
        }
        void setMark_2(double M_2)
        {           
            Mark_2 = M_2 ;
        }
        void setMark_3(double M_3)
        {           
            Mark_3 = M_3 ;
        }
        //Accessor (get)
        int getRoll(){return Roll ; } 
        string getName(){return Name ;}
        double getMark_1(){return Mark_1 ;}
        double getMark_2(){return Mark_2 ;}
        double getMark_3(){return Mark_3 ;}
    
        //Facilator Functions
        double Total_Mark()
        {
            return((Mark_1+Mark_2+Mark_3)/3) ;
        }
        string Grade()
        {
            double T_M = (Mark_1+Mark_2+Mark_3)/3 ;

            if(T_M>=85.0 && T_M<=100.0)
            {
                return "A" ;

            }else if (T_M>=75.0 && T_M<85.0)
            {
                return "B+" ;
                
            }else if(T_M>=65.0 && T_M<75.0)
            {
                return "B" ;

            }else if(T_M>=55 && T_M<65)
            {
                return "B-" ;

            }else
            {
                return "C" ;
            } 

        }
        ~Student()
        {
            cout << "Student Destroyed " << endl ;
        }       
};

int main()
{
    //objects 
    Student r1(32,"VAHID", 40,80,100) ;

    cout << "Total_Mark = "<<r1.Total_Mark() << endl;
    cout << "Grade = "<<r1.Grade() << endl; 

}