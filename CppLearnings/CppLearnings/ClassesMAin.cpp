#include <iostream>


class Player{
public:
	int x;
	int y;
	int speed;

	void Move( int xa, int ya)
	{
		x += xa *speed;
		y += ya *speed;
	}
};


int main()
{
	Player player;
	player.Move(2,5);
	
}