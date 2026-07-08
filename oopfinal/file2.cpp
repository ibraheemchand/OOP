#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ifstream file("data.txt");

    int x;

    while(file >> x)
        cout << x << " ";

    cout << "\nReached end\n";

    file.clear();      // Clear EOF flag
    file.seekg(0);     // Go back to beginning

    cout << "Reading again:\n";

    while(file >> x)
        cout << x << " ";
}