#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
    
    srand(time(0));

   
    string grades[] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};

    cout << "Press Enter 3 times to reveal your future.";

    for (int i = 0; i < 3; i++) {
        cin.get();
    }

    string futureGrade = grades[rand() % 9];

    
    cout << "\nYou will get " << futureGrade << " in this 261102.\n";

    return 0;
}