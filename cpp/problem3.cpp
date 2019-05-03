#include <iostream>
#include <cstdio>
#include <cstring>
#include <map>

using namespace std;

int answer(const char * input, const char * number_str) {
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    while (n--) {
        char input[16] = {0};
        char number_of_interest[8] = {0};
        scanf("%s %s", input, number_of_interest);
        printf("%d\n", answer(input, number_of_interest));
    }

    return 0;
}
