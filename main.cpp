#include <iostream>
#include <cstdint>

using namespace std;

inline int64_t compute(int64_t n)
{
	return (((3*n+2)*n-3)*n-2)*n/12;
}

int main(int argc, char **argv)
{
	cout << compute(100) << endl;
	
    return 0;
}
