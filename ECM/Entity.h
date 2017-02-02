#pragma once
#include "Component.h"
class Entity
{
public:
	Entity() {};
	virtual void addComponent(Component c) { m_components.push_back(c); }
	virtual void removeComponent(Component c) { }
	virtual std::vector<Component> getComponents() { return m_components; }
protected:
	std::vector<Component> m_components;
	int m_id;
};

class Player : public Entity
{

};

class Cat : public Entity
{

};

class Dog : public Entity
{

};

class Alien : public Entity
{

};

