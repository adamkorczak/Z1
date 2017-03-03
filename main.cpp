#include <iostream>
#include <algorithm>
#include "header.hpp"

using namespace std;

int main()
{
    string name;

    name = Load_and_write(name);
    name = Find_vowels_and_change(name);
    reverse(name.begin(), name.end());

    cout << name << endl;

    return 0;
}
