/*
Imagine we want to find 3^9, yeah! there is build-in function in cpp for that
pow(num, power) using #include<cmath> (I don't know what method pow uses)

See section 1.10 Exponentiation of Jeff's book.
*/

#include<bits/stdc++.h>

using namespace std;

/*
Using template so that I can use int, float, double etc for a.
but for n here we have only int type.

because to find floating powers we need other numerical methods.
*/
template <typename T> T PingalaPower(T a, int n){
    if(n == 1){
        return a;
    }
    else{
        T x = PingalaPower(a, n/2);
        if(n%2 == 0)
            return x*x;
        else
            return x*x*a;
    }
}

int main(){

    cout<<PingalaPower<float>(2.99, 4)<<"\n";
    cout<<PingalaPower<float>(3.99, 4)<<"\n";

    return 0;
}