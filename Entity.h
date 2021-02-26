#pragma 

#include "Mesh.h"
#include "Transformation.h"
#include <memory>

class Entity
{
public:
	Entity(std::shared_ptr<Mesh> inputMesh);
	~Entity();
	std::shared_ptr<Mesh> GetMesh();
	std::shared_ptr<Transformation> GetTransformation();

private: 
	std::shared_ptr<Mesh> mesh;
	std::shared_ptr<Transformation> transform;
};

