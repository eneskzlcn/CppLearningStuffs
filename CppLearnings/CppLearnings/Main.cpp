//#include <iostream>
//
//#define LOG(x) std::cout << x << std::endl
//
//void multiply(int& x)
//{
//	x++;
//}
//
//int main()
//{
//	LOG("me");
//	//all of the definitions below , means it is a null pointer.
//	//void* ptr = 0;
//	//void * ptr = NULL;
//	// void* ptr = nullptr;
//
//	int var = 8;
//	int var1 = 10;
//	multiply(var);
//	LOG(var);
//
//	//when you create a reference, you need to directly declare the reference
//	//example:
//	//int& ref = var;
//	// you can not do ex:
//	/*int& ref1;
//	ref1 = var;*/
//	//because of that a ref directly refrences to this variable adress and you can not change it like:
//
//	/*int& ref = var;
//	ref = var1;*/
//
//	// if you do this, not the reference changes. Both of the variable values will be the value which var1 has ( 10)
//	//uncomment below code and try it:
//
//	//int& ref = var;
//	//ref = var1;
//	//LOG(var);
//	//LOG(var1);
//
//	//void* ptr = &var;
//	//LOG(ptr);
//	std::cin.get();
//	return 0;
//}