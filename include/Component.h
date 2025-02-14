#pragma once
class GameObject;

class Component
{
public:
	virtual ~Component()=default;
	virtual bool ShouldDraw() const { return shouldDraw; };

private:
	GameObject *owner;
	bool shouldDraw = true;

	virtual void Start() = 0;
	virtual void Update() = 0;
	virtual void Draw() = 0;

	friend class GameObject;
};

