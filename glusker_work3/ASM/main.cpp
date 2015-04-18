#include <iostream>

extern "C" int answer( int x, int y, int z );

int main()
{
	int x, y, z;
	std::cin >> x, y, z;

	std::cout << answer( x, y, z );
	std::cin.ignore().get();
}


