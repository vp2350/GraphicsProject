#include "Entity.h"

Entity::Entity(std::shared_ptr<Mesh> inputMesh)
{
	mesh = inputMesh;
	transform = std::shared_ptr<Transformation>(new Transformation());
}

Entity::~Entity()
{

}

std::shared_ptr<Mesh> Entity::GetMesh()
{
	return mesh;
}

std::shared_ptr<Transformation> Entity::GetTransformation()
{
	return transform;
}
