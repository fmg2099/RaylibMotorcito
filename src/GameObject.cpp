#include "GameObject.h"

GameObject::GameObject()
{
}

GameObject::~GameObject()
{
}

void GameObject::Start()
{
}

void GameObject::Update()
{
}

void GameObject::Draw(float deltaTime)
{
	for (auto& comp : components)
	{
		if (comp.ShouldDraw())
		{
			comp.Draw();
		}
	}
}

void GameObject::AddComponent(Component& newComp)
{
	components.push_back(newComp);
}

void GameObject::RemoveComponent()
{
}
