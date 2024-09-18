#include <iostream>
using namespace std;

int main() {
    int n; // Number of problems
    cin >> n; // Read the number of problems
    
    int count = 0; // To count how many problems will be solved

    // Loop through each problem
    for (int i = 0; i < n; i++) {
        int petya, vasya, tonya;
        cin >> petya >> vasya >> tonya; // Read confidence for the current problem

        // Check if at least two friends are sure
        if (petya + vasya + tonya >= 2) {
            count++; // Increment the counter if the problem will be solved
        }
    }

    // Output the number of problems that will be solved
    cout << count << endl;

    return 0;
}
