#include <bits/stdc++.h>
#include <string>
#include <cmath>

using namespace std;

int binary_to_decimal(int bin_num)
{
    int dec_num = 0;
    int i = 0;
    int base = 1;

    while (bin_num)
    {

        int bit = bin_num % 10;
        bin_num = bin_num / 10;

        dec_num += bit * base;

        base *= 2;
        i++;
    }

    return dec_num;
}

int main()
{
    int dec_num;
    cin >> dec_num;

    cout << binary_to_decimal(dec_num);
    return 0;
}