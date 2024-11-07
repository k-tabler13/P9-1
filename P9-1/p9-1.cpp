//Kiya Tabler, program that initializes an array with ten 4-digit random integers 

#include <iostream> 
#include <cstdlib> 
#include <ctime>    
using namespace std; 
int main() {
    //random numbers
     srand( time(0));

    
    const int SIZE = 10;
    int arr[SIZE];

    // puts 4 digit random numbers into the array.
    for (int i = 0; i < SIZE; ++i) {
        arr[i] = 1000 + std::rand() % 9000;  // Generate random number between 1000 and 9999
    }

    // prints out the array
        cout << "Array elements in order of appearance:" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << arr[i] << " ";
    }

        cout << endl; 
    return 0;
}
