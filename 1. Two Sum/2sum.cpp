#include<iostream>
using namespace std;

int main()
{
    int num[] = {2, 7, 11, 15};
    int target = 9;

    for(int i = 0; i < 4; i++)
    {
        for(int j = i + 1; j < 4; j++)
        {
            if(num[i] + num[j] == target)
            {
                cout << "[" << i << ", " << j << "]" << endl;
            }
        }
    }
    cout << "Explaination: because nums[0] + nums[1] == 9, so we return [0, 1] " << endl; 

    return 0;
}