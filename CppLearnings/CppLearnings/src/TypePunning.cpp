//
//#include <iostream>
//
//struct Entity
//{
//	int x, y;
//};
//struct Try1
//{
//	int x, y, z, t;
//
//	int* GetPositions()
//	{
//		int* arr = new int[4];
//		arr[0] = x;
//		arr[1] = y;
//		arr[2] = z;
//		arr[3] = t;
//		return arr;
//	}
//};
//struct Try2
//{
//	int x, y, z, t;
//
//	int* GetPositions() { return &x; }
//};
//int main()
//{
//	Entity e = { 3, 5 };
//	//if we want to take the x and y values inside the entity, we can make a punning like
//	// we cast the positions to the int pointer, which makes our entity behave like an array...
//	int* positions = (int*)&e;
//	std::cout << positions[0] << "," << positions[1] << std::endl;
//	//as the see in above example, it is possible to do this.
//	
//	//If you want to all int data in struct to become an array, probably you need to do sth. like the getPositions() func. in
//	// try1 struct.
//	//With the example below;
//	Try1 t = { 1,2,3,4 };
//	int* pos_arr = t.GetPositions();
//	std::cout << pos_arr[0] << "," << pos_arr[1] << "," << pos_arr[2] << "," << pos_arr[3] << std::endl;
//	
//	// But,,,, there is a better way to this is just making a punning and writing a func. getPositions like in Try2 struct.
//	// Try it with running below example. It is totally makes the same thing.
//
//	Try2 t2 = { 3,5,7,9 };
//	int* p_arr = t2.GetPositions();
//	std::cout << p_arr[0] << "," << p_arr[1] << "," << p_arr[2] << "," << p_arr[3] << std::endl;
//
//	
//	return 0;
//}