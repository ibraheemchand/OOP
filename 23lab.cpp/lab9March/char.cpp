#include <iostream>
#include <fstream>
using namespace std;

int main(){
    fstream file;
    file.open("samplee.txt" , ios :: out);
 char thi = 'A';
  if (file)
  {
          file << (thi+0);

      cout << "Data written successfully " << endl;
  }
  
  else
  cout << "Eorror not written "<< endl;
    file.close();

    cout << "File closed" << endl;
    int a;
      file.open("samplee.txt" , ios :: in);
      file>>a;
      (char)a;
      cout << "From the file "<<(char)a << endl;
    return 0 ;
}