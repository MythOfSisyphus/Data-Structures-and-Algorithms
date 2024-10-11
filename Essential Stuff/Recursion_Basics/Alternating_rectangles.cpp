// Alternating rectangles of X and O

#include<iostream>
#include<vector>
using namespace std;

// way to print a 2D vector easily
template <typename T>
void print(const vector<vector<T>>& Vec){
    for(int i=0; i<Vec.size(); i++){
        for(int j=0; j<Vec[i].size(); j++){
            cout<<Vec[i][j]<<" ";
        }
        cout<<endl;
    }
}

// Just an attempt
vector<vector<char>> Alternating_Rectangle(int &rows, int &cols){
    vector<vector<char>> result(rows, vector<char>(cols, 'O')); // 2D Vector of all O's
    
    for(int i=0; i<rows/2; i++){ // iterate upto rows/2 to leverage the symmatry
        if(i%2 != 0){ // to put X's at odd number of rows 
            for(int j=i; j<(cols - i); j++){
                result[i][j] = 'X';
                result[rows -1 -i][j] = 'X';

                if(j == i || j == (cols -1 -i)){ // now make the boundary of rectangle with X's
                    for(int k=i+1; k<(rows-i-1); k++){
                        result[k][j] = 'X';
                    }
                }
            }
        }
    }
    // return rectangle of O's and X's
    return result;
}

// Corrected Code
vector<vector<char>> Alternating_Rectangle_2(int& rows, int& cols){
    vector<vector<char>> result(rows, vector<char>(cols, 'O')); // Initialize all cells with 'O'

    // Loop through layers of rectangle
    for(int i = 0; i < (min(rows, cols) + 1)/2; i++){
        char fillChar = (i % 2 == 0) ? 'O' : 'X'; // Alternate between O and X

        // Fill the top and bottom rows of current layer
        for(int j = i; j < cols - i; j++){
            result[i][j] = fillChar; // Top row
            result[rows - 1 - i][j] = fillChar; // Bottom row
        }

        // Fill the left and right columns of current layer
        for(int j = i; j < rows - i; j++){
            result[j][i] = fillChar; // left column
            result[j][cols - 1 - i] = fillChar; // right column
        }
    }

    return result; // return the final rectangle
}

int main(){

    // dummy variables
    int rows = 15;
    int cols = 27;
    vector<vector<char>> Vec = Alternating_Rectangle(rows, cols);

    print(Vec);

    return 0;
}