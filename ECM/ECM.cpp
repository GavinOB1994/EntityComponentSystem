// ECM.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Entity.h"
#include "HealthSystem.h"
#include "PositionSystem.h"


int main()
{
	Player player;
	Cat cat;
	Dog dog;
	Alien alien;

	HealthComponent hc; 
	PositionComponent pc;

	HealthSystem hs; 
	PositionSystem ps;

	player.addComponent(hc); 
	player.addComponent(pc);

	hs.addEntity(player); 
	ps.addEntity(player);

	while (true) 
	{
		hs.update(); 
		ps.update();
	}
	return 0;
}

