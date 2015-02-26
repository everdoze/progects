#include <iostream>

extern "C" int answer( int x, int y, int z );

int main()
{
	int x, y, z;
	std::cin >> x, y, z;

	std::cout << answer( x, y, z );
	return getchar();
}
/*
0000|0000 0
0000|0001 1
0000|0010 2
0000|0011 3
0000|0100 4
0000|0101 5
0000|0110 6
0000|0111 7
0000|1000 8
0000|1001 9
0000|1010 10
0000|1011 11
0000|1100 12
0000|1101 13
0000|1110 14
0000|1111 15
*/

