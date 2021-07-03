//#include <iostream>
//
//
//class Printable
//{
//public:
//	virtual std::string GetClassName() = 0;
//};
//class Entity : public Printable
//{
//public:
//	virtual std::string GetName() { return "Entity"; }
//	std::string GetClassName() override { return "Entity"; }
//};
//
//class Player : public Entity
//{
//private:
//	std::string m_Name;
//
//public:
//	Player(const std::string& name)
//		:m_Name(name) {};
//	std::string GetName() override { return m_Name; }
//	std::string GetClassName() override { return m_Name; }
//};
//
//void PrintName(Entity* entity)
//{
//	std::cout << entity->GetName() << std::endl;
//}
//
//void Print(Printable* printable)
//{
//	std::cout << printable->GetClassName() << std::endl;
//}
//int main()
//{
//
//	Entity* e = new Entity();
//	Player* p = new Player("me");
//
//	Print(e);
//	Print(p);
//	std::cin.get();
//	return 0;
//}