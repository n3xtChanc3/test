#include <iostream>

int add(int x, int z);

int main()
{

int result = add(6, 6);
std::cout << result << std::endl;

	return 0;
}

int add(int a, int b)
{
	int result = a + b;
	return result;
}
