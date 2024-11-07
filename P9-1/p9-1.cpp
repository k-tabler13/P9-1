//Kiya Tabler, program that initializes an array with ten 4-digit random integers 

#include <iostream> 
#include <cstdlib> 
#include <ctime>    
using namespace std; 
int main() {
    //random numbers
     srand( time(0));

    
    const int SIZE = 10;
    int array[SIZE];

    // puts 4 digit random numbers into the array.
    for (int i = 0; i < SIZE; ++i) {
        array[i] = 1000 + std::rand() % 9000;  // Generate random number between 1000 and 9999
    }

    // prints out the array
        cout << "Array elements in order of appearance:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << array[i] << " ";
    }

        cout << endl;  

     // Print every element.
        cout << "Array elements at even indices:" << endl;
     for (int i = 0; i < SIZE; i += 2) { 
        cout << array[i] << " ";
        }
        cout << endl;

        // Print every even element
        cout << "Even elements in the array:" << endl;
     for (int i = 0; i < SIZE; ++i) {
            if (array[i] % 2 == 0) { 
                cout << array[i] << " ";
            }
        }
        cout << endl;



    return 0;
}
