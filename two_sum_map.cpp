//
//  main.cpp
// используем хеш-функции
// first - ключ
// second - значение

#include <iostream>
#include <map>
using namespace std;

int main()
{
    int array[] = {4,7,2,1,5,7,4,0,9};
    int target = 14;
    int size = sizeof(array)/sizeof(int);
    
    map <int,int> my_map;
    for (int i=0; i<size; i++){
        my_map.insert(pair<int,int>(array[i],i));
    }
    
    for (int i = 0; i < size; i++) {
        int x = target - array[i];
        if (my_map.find(x) != my_map.end() && my_map.find(x)->second != i) {
            cout<< i << " and "<< my_map.find(x)->second << endl;
            };
        }
    return 0;
}
