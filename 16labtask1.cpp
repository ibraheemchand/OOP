#include <iostream>
using namespace std;

class employs
{
public:
   string name ;
   int salary[12] ;


    void inputSalary(employs e[] ,int N){
       for (int i = 0; i < N; i++)
        {
            cout << "Enter name" << endl ;
            cin >> e[i].name;

            for (int j = 0; j < 12; j++)
            {
                cout << "Enter Salary for Month "<< (j+1) << endl;
                cin >> e[i].salary[j];
            }
            
        }
        
    }
    
    int AvgMsal(){
        int avg=0;
        for (int i = 0; i < 12; i++)
        {
            avg+=salary[i];
            
        }
        return (avg/12);
        
    }
};




int main(){
    int N;
    cout << "Tell No of students " << endl;
    cin >> N;
employs e[N];

for (int i = 0; i < N; i++)
{
    e[i].inputSalary(e , N);
}


for (int i = 0; i < N; i++)
{
    cout << "Avg Monthly salary of Employ " << i+1 << endl;
    cout << e[i].AvgMsal() << endl ;

}


    
    return 0;
}