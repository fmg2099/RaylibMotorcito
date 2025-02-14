#pragma once
#include "raylib.h"
#include "Component.h"
#include <vector>
class GameObject
{
public:
	bool enabled;
	int id;

	GameObject();
	~GameObject();

	void Start();
	void Update();
	void Draw(float deltaTime);

	void AddComponent(Component& newComp);
	void RemoveComponent();
private:
	std::vector<Component> components;

	friend class Component;
};

