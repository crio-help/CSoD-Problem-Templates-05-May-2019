#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int answer(const char * number)
{
   return 0;
}

int main()
{
    char number[1024*1024];
    int n;

    scanf("%d", &n);
    for (int i = 0;i < n; ++i) {
        scanf("%s", number);

        printf("%d\n", answer(number));
    }

    return 0;
}
