#include <cstdio>

extern "C" __declspec(dllimport) const char* name();

int main()
{
    printf("name returned [%s]\n", name());
}
