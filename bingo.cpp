#include <bits/stdc++.h>
#include <stdio.h>
#include <ctime> 
#include <random>
#include <stdlib.h>
#include <vector>
using namespace std;

int PLAYER_COUNT = 3;

void printPlayerCard(vector<bool> nums)
{
    vector<vector<int>> matrix;
    matrix.resize(5);

    for (int i = 0; i < 5; i++)
    {
        matrix[i].resize(5);
    }

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            int k = rand() % 75 + 1;
            while(nums[k])
            {
                k = rand() % 75 + 1;
            } 
            matrix[i].push_back(k);
            nums[k] = true;
            cout << k << " ";
        }
        cout << endl;
    }

    cout << endl;
}

void bingo(vector<bool> &nums) 
{
    int i = rand() % 75 + 1;
    while(nums[i])
    {
        i = rand() % 75 + 1;
    } 

    cout << i << endl;
    nums[i] = true;
}

int main()
{
    cout << " __          ________ _      _____ ____  __  __ ______   _______ ____    ____ _____ _   _  _____  ____  "<< endl <<
" \\ \\        / /  ____| |    / ____/ __ \\|  \\/  |  ____| |__   __/ __ \\  |  _ \\_   _| \\ | |/ ____|/ __ \\ " << endl <<
"  \\ \\  /\\  / /| |__  | |   | |   | |  | | \\  / | |__       | | | |  | | | |_) || | |  \\| | |  __| |  | | " << endl <<
"   \\ \\/  \\/ / |  __| | |   | |   | |  | | |\\/| |  __|      | | | |  | | |  _ < | | | . ` | | |_ | |  | |" << endl <<
"    \\  /\\  /  | |____| |___| |___| |__| | |  | | |____     | | | |__| | | |_) || |_| |\\  | |__| | |__| |" << endl <<
"     \\/  \\/   |______|______\\_____\\____/|_|  |_|______|    |_|  \\____/  |____/_____|_| \\_|\\_____|\\____/ " << endl << endl;

    
    string temp;

    srand (time(NULL));

    vector<bool> nums(75, false);

    for(int i = 0; i < PLAYER_COUNT; i++)
    {
        vector<bool> temp(75, false);
        printPlayerCard(temp);
        
    }

    cout << endl << "Enter character for next number: " << endl;

    int count = 0;
    while(cin >> temp && count < 75)
    {
        bingo(nums);
        cout << endl << "Enter character for next number: ";
        count++;
    }

    return 0;
}
