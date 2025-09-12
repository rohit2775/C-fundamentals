
//  Write a program to create a class Student with data members ( roll, marks). Input and display the details of 2 students.
 
#include <iostream>
using namespace std ;

 
 class student {
     
    private:
    int  rollno;
    int marks;


    public:
    void set_student(int x, int y);
    void display_student(){
        cout<<rollno<<marks;

    }

 };

 void student::set_student (int x , int y ){
   
    rollno =x ;
    marks = y;

 }
int main(){
       
    student s1 ;
    s1.set_student(123, 545);
    s1.display_student();
    




    return 0;
}
