#include <iostream>
#include <cstdlib>

class Random
{
public:
	
	Random(const Random&) = delete;

	static Random& GetInstance()
	{
		static Random instance; // static variable in static func. means, it will created just one and then other calls will point
		return instance;		// the adress of it. So just one instance there in memory in this ex.
	}
	static int GenerateNumber()
	{
		return GetInstance().IGenerate();
	}
private:
	
	int IGenerate() { return rand(); }
	Random() {}
};


int main()
{
	int x = Random::GenerateNumber();
	std::cout << "Generated number: " << x << std::endl;
	return 0;
}