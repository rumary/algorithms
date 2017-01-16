//
//  main.cpp
//  inline_vector_mean
//  функция, которая не создавая новый массив, заменяет элементы массива на полусумму левого и правого элемента вектора
//  Created by Maria Ryzhova on 29.11.16.
//  Copyright © 2016 Maria Ryzhova. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    std::vector <double> v = {1, 9, 3, 19, 5};
    setlocale(LC_ALL, "");
    
    double b = v[0];
    double t;
    for (int i=1; i<v.size(); i++){
        
        t = v[i];
        v[i] = (b+v[i+1])/2;
        b = t;
        
        std::cout << v[i] << std::endl;
        
    }
    std::cout << "Получившийся вектор" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << v[i] << std::endl;
    }
    
    
    return 0;
}
