// Alternating rectangles of X and O

#include<iostream>
#include<vector>
using namespace std;

// way to print a 2D vector easily
template <typename T>
void print(vector<vector<T>>& Vec){
    for(int i=0; i<Vec.size(); i++){
        for(int j=0; j<Vec[i].size(); j++){
            cout<<Vec[i][j]<<" ";
        }
        cout<<endl;
    }
}

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

int main(){

    // dummy variables
    int rows = 15;
    int cols = 27;
    vector<vector<char>> Vec = Alternating_Rectangle(rows, cols);

    print(Vec);

    return 0;
}