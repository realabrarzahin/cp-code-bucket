#include <bits/stdc++.h>

using namespace std;

void decimal_to_binary(int dec_num)
{
    vector<int> bin_num = {};

    while (dec_num)
    {
        int bit = dec_num % 2;
        dec_num = dec_num / 2;
        bin_num.push_back(bit);
    }

    reverse(bin_num.begin(), bin_num.end());

    for (int bit : bin_num)
    {
        cout << bit;
    }
}

int main()
{
    decimal_to_binary(23);
}