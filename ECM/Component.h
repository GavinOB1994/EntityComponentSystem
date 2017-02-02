#pragma once
#include <vector>

class Component
{
public:
	Component() {};
	~Component() {};
};


class HealthComponent : public Component
{
public:
	HealthComponent() : m_health(100) {}

	int getHealth() { return m_health; }
	void setHealth(int health) { this->m_health = health; }
private:
	int m_health;
};

class PositionComponent : public Component
{
public:
	PositionComponent() : m_pos(100,100){}

	std::pair<int, int> getPos() { return m_pos; }
	void setHealth(std::pair<int, int> pos) { this->m_pos = pos; }
private:
	std::pair<int, int> m_pos;
};

class ControllComponent : public Component
{
public:
	ControllComponent() {};
};