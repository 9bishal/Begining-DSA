#include <iostream>
using namespace std;

int arr[3][3]; // Declare the 2D array

void mark_row(int i) { // Define the mark_row function
    for(int j=0; j<3; j++){
        if(arr[i][j] != 0){
            arr[i][j] = -1; // Use assignment, not comparison
        }
    }
}

void mark_column(int j) { // Define the mark_column function
    for(int i=0; i<3; i++){
        if(arr[i][j] != 0){
            arr[i][j] = -1; // Use assignment, not comparison
        }
    }
}

int main()
{
    // Input the matrix elements
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> arr[i][j];
        }
    }

    // Loop through the array to mark rows and columns with zeroes
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(arr[i][j] == 0){
                mark_row(i);
                mark_column(j);
            }
        }
    }

    // Replace -1 with 0
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(arr[i][j] == -1){
                arr[i][j] = 0;
            }
        }
    }

    // Output the modified array
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
