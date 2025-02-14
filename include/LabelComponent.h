#pragma once
#include "Component.h"
class LabelComponent : public Component
{
public:
	~LabelComponent() override = default;

	void Start() override;
	void Update() override;
	void Draw() override;
};

