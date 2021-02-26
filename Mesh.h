#pragma once

#include <d3d11.h>
#include <DirectXMath.h>
#include <wrl/client.h>
#include "Vertex.h"

class Mesh
{
public: 
	Mesh(Vertex vertices[], int vertexCount, unsigned int indexArray[], int indexCount, Microsoft::WRL::ComPtr<ID3D11Device> device);
	~Mesh();

	Microsoft::WRL::ComPtr<ID3D11Buffer> GetVertexBuffer();
	Microsoft::WRL::ComPtr<ID3D11Buffer> GetIndexBuffer();
	int GetIndexCount();

private:
	int m_bufferIndexCount;
	// Buffers to hold actual geometry data
	Microsoft::WRL::ComPtr<ID3D11Buffer> vertexBuffer;
	Microsoft::WRL::ComPtr<ID3D11Buffer> indexBuffer;
};

