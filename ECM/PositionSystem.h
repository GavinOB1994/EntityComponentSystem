#pragma once
#include <vector>
#include <iostream>
#include "Entity.h"

class PositionSystem
{
	std::vector<Entity> m_entities;

public:
	void addEntity(Entity e) { m_entities.push_back(e); }
	void update() 
	{
		std::cout << "PositionSystem Update" << std::endl;
	}
};

