#pragma once

#include <memory>

#include "transform.h"
#include "../primitive_shapes/polygon.h"
#include "../graphics/model.h"
#include "../utilities/slotmap.h"

struct Entity
{
	object_id id;
	Transform transform;
	Polygon* model;
	//PhysObj* physics;

	Entity();
	~Entity();
};
