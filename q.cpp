#include<iostream>
using namespace std;
int main(){
    int nums[] = {4,2,8,0,5,7,8,1,9,8};
    int min = nums[0];
    for (int i = 0; i < 10; i++)
    {
        if (nums[i]<min) min = nums[i];
    }
    cout << min;
    return 0;
}