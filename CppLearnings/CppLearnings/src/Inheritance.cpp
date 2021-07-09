//
//#include <iostream>
//
//class Entity
//{
//public:
//	virtual std::string GetName() { return "ENTITY"; }
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
//	std::string GetName() { return m_Name; }
//};
//
//void PrintName(Entity* entity)
//{
//	std::cout << entity->GetName() << std::endl;
//}
//int main()
//{
//	//This is what a virtual keyword does. When you send an entity object to the PrintName func.
//	//it directly goes to entity class and getName func. always returns ENTITY.
//	//Because of that is compiler not knows is it just an entity or a inherited member (Player) of entity.
//	// so we use virtual keyword on the functions , which we want compiler to choose the correct func. 
//	// In this example the GetName func, if we want this func. works in a way if the entity is a player in actual
//	// then it should return players name, if it just an entity then it should return ENTITY. So we put the virtual keyword
//	// to the GetName function to decide in this stuation. Uncomment and run the code below without virtual keywork in Entity.GetName() func.
//
//	/*
//	Entity* e = new Entity();
//	PrintName(e);
//	Player* p = new Player("ME");
//	PrintName(p);
//	*/
//	//the result will be:
//	//ENTITY
//	//ENTITY
//	//because compiler could not decide it is a player in real or just an entity.
//	//Try the above code with virtual keyword in Entity.GetName() func. :
//
//	/*Entity* e = new Entity();
//	PrintName(e);
//	Player* p = new Player("ME");
//	PrintName(p);*/
//
//	//the result will be:
//	//ENTITY
//	//ME
//
// 
//
//	return 0;
//}