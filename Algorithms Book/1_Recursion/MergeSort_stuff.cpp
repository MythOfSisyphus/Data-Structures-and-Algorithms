#include<bits/stdc++.h>

using namespace std;

void Merge(int A[], int p, int q, int r){
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1];
    int M[n2];

    for(int i=0; i<n1; i++){
        L[i] = A[p+i];
    }

    for(int i=0; i<n2; i++){
        M[i] = A[q+1+i];
    }

    int i=0, j=0, k=p;
    while(i<n1 && j<n2){
        if(L[i] <= M[j]){
            A[k] = L[i];
            i++;
        }

        else{
            A[k] = M[j];
            j++;
        }
        k++;
    }

    while(i<n1){
        A[k] = L[i];
        i++;
        k++;
    }

    while(j<n2){
        A[k] = M[j];
        j++;
        k++;
    }
}

void MergeSort(int A[], int left, int right){
    
}


int main(){

    int three[] = {3, 27, 38, 43, 9, 10, 82};

    int four[] = {10, 0, -2, 11, -3, 9, 4, 6};

    return 0;
}