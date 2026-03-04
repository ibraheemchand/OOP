#include <iostream>
using namespace std;

class students
{
public:
string name;
int rollNo;
float gpa;  
    
};



int main(){
    int N;
    cout << "Tell No of students " << endl;
    cin >> N;
students abc[N];
for (int i = 0; i < N; i++)
{
    cout << "Enter Name "<< endl;
    cin >> abc[i].name;

     cout << "Enter Roll no. "<< endl;
    cin >> abc[i].rollNo;

     cout << "Enter gpa"<< endl;
    cin >> abc[i].gpa;
}

float highestM = 0 ;
int n=0;
 for (int i = 0; i < N; i++)
 {
    
    if (abc[i].gpa > highestM)
    {
       highestM = abc[i].gpa ;
        n=i;
    }
    
}
 
cout << "The highest gpa is " << abc[n].gpa << endl ;

    return 0 ;
}