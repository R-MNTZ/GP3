#pragma once
#include "Component.h"
#include "Mesh.h"
#include "ShaderProgram.h"
#include "Texture.h"

class MeshRenderer : public Component
{
	Texture* m_texture;
	Mesh* m_mesh;
	ShaderProgram* m_program;

public:
	//Inherited via component
	MeshRenderer(Mesh* mesh, ShaderProgram* program, Texture* texture);
	virtual void OnUpdate(float delatTime) override;
	virtual void OnRender() override;
	virtual void OnStart() override;

};
