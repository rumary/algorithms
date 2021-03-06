//  main.cpp
//  task_2
//  https://leetcode.com/articles/two-sum/
//  Created by Maria Ryzhova on 11.12.16.
//  Copyright © 2016 Maria Ryzhova. All rights reserved.
//

#include <iostream>
using namespace std;

void twoSum(int* nums, int size, int target);

int main() {
    int nums[] = {7,2,3,4,5};
    int target = 5;
    int size = sizeof(nums)/sizeof(int);
    twoSum(nums, size, target);
    return 0;
    
}

void twoSum(int* nums, int size, int target) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (nums[j] == target - nums[i]) {
                cout<<"elements numbers are "<<i<<" and "<<j<<endl;
                break;
            }
        }
    }
}

 ##second variant


#include <iostream>
using namespace std;

int* twoSum(int* nums, int size, int target);

int main() {
    int nums[] = {7,2,3,4,5};
    int target = 5;
    int size = sizeof(nums)/sizeof(int);
    int* answer = twoSum(nums, size, target);
    cout<<"elements numbers are "<<answer[0]<<" and "<<answer[1]<<endl;
    delete [] answer;
    return 0;
    
}

int* twoSum(int* nums, int size, int target) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (nums[j] == target - nums[i]) {
                int* answer;
                answer = new int [2];
                answer[0] = i;
                answer[1] = j;
                return answer;
                
            }
        }
    }
    return 0;
}

##third variant

#include <iostream>
using namespace std;

void twoSum(int* nums, int size, int target, int* answer);

int main() {
    int nums[] = {7,2,3,4,5};
    int target = 5;
    int size = sizeof(nums)/sizeof(int);
    int* answer;
    answer = new int [2];
    twoSum(nums, size, target, answer);
    cout<<"elements numbers are "<<answer[0]<<" and "<<answer[1]<<endl;
    delete [] answer;
    return 0;
    
}

void twoSum(int* nums, int size, int target, int* answer) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (nums[j] == target - nums[i]) {
                answer[0] = i;
                answer[1] = j;
            }
        }
    }
}


##4rd variant

#include <iostream>
using namespace std;

std::pair<int,int> twoSum(int* nums, int size, int target);

int main() {
    int nums[] = {7,2,3,4,5};
    int target = 5;
    int size = sizeof(nums)/sizeof(int);
    std::pair<int,int> answer;
    answer = twoSum(nums, size, target);
    cout<<"elements numbers are "<<answer.first<<" and "<<answer.second<<endl;
    return 0;
    
}

std::pair<int,int> twoSum(int* nums, int size, int target) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (nums[j] == target - nums[i]) {
                return std::make_pair (i,j);
            }
        }
    }
    return make_pair(-1,0);
}

## 5 variant

#include <iostream>
using namespace std;

void twoSum(int* nums, int size, int target, int* i, int* j);

int main() {
    int nums[] = {7,2,3,4,5};
    int target = 5;
    int size = sizeof(nums)/sizeof(int);
    int i,j;
    twoSum(nums, size, target, &i, &j);
    cout<<"elements numbers are "<<i<<" and "<<j<<endl;
    return 0;
    
}

void twoSum(int* nums, int size, int target, int* i, int* j) {
    for (*i = 0; *i < size; (*i)++) {
        for (*j = *i + 1; *j < size; (*j)++) {
            if (nums[*j] == target - nums[*i]) {
                return;
            }
        }
    }
}


##variant number 6

#include <iostream>
using namespace std;

void twoSum(int* nums, int size, int target, int& i, int& j);

int main() {
    int nums[] = {7,2,3,4,5};
    int target = 5;
    int size = sizeof(nums)/sizeof(int);
    int i,j;
    twoSum(nums, size, target, i, j);
    cout<<"elements numbers are "<<i<<" and "<<j<<endl;
    return 0;
    
}

void twoSum(int* nums, int size, int target, int& i, int& j) {
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (nums[j] == target - nums[i]) {
                return;
            }
        }
    }
}
