#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

void printbill(vector<string> & items, vector<float> & prices, vector<int> & discounts)
{
    ;
}

int main()
{
    int n;
    cin >> n;

    vector<string> items;
    vector<float> prices;
    vector<int> discounts;

    for (int i = 0; i < n; ++i) {
        cin >> items[i] >> prices[i] >> discounts[i];
    }

    printbill(items, prices, discounts);

    return 0;
}
