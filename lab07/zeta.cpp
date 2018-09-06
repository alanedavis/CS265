#include <iostream>
#include <math.h>
#include <string>
#include <cstdio>

using namespace std;

double z(int x, int n){
    double finalFract = 0.0;
    for(int i=1; i < n; i++){
        double newFract = pow((double)(1.0/i), (double) x);
        finalFract += newFract;
    }
    return finalFract;
}

int main( int argc, char* argv[] ) {
    int arg1, arg2;

    sscanf(argv[1], "%d", &arg1);
    sscanf(argv[2], "%d", &arg2);
    double finalAns = z(arg1, arg2);
    cout << "z(" << argv[1] << ")= " << finalAns << " when approximated at n=" << argv[2] << endl;
    return 0;
}

