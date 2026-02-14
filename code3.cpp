#include <iostream>
using namespace std;


    class student
    {
    public:
        string name;
        double* cgpaPtr;
        
        student(string name ,double cgpa){
            this->name=name;
            cgpaPtr = new double;
            *cgpaPtr = cgpa; 

        }

        student(student &s){
            this->name=s.name;
            this->cgpaPtr=s.cgpaPtr;
        }
        student();
        void shoWgpa(){
            cout << "The gpa is " << *cgpaPtr <<endl;
        }
        
    };
    
int main(){
    
   student s1;
   s1.name = "chand";
   *s1.cgpaPtr=3.8;


   student s2(s1);
   s2.shoWgpa();

   *s2.cgpaPtr=4;
   s1.shoWgpa();

    return 0;
}  