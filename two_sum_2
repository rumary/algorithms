//
//  main.cpp
//  two_sum_2
//
//  Created by Maria Ryzhova on 11.12.16.
//  Copyright © 2016 Maria Ryzhova. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a[] = {3,4,5,6,7};
    int size = sizeof(a)/sizeof(int);
    int sum = 11;
    int i = 0;
    int j = size-1;
    sort(a, a + size);
    int sum1;
    while (i<j){
        sum1 = a[i]+a[j];
        if (sum1<sum)
            i++;
        else if (sum1>sum)
            j--;
        else {
            cout<< i <<" and "<< j <<endl;
            return 0;
        }
    }
    return 0;
}
