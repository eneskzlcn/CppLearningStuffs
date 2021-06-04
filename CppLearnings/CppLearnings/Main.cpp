#include <iostream>

#define LOG(x) std::cout << x << std::endl

void multiply(int& x)
{
	x++;
}

int main()
{
	LOG("me");
	//all of the definitions below , means it is a null pointer.
	//void* ptr = 0;
	//void * ptr = NULL;
	// void* ptr = nullptr;

	int var = 8;
	multiply(var);
	LOG(var);
	//void* ptr = &var;
	//LOG(ptr);
	std::cin.get();
	return 0;
}