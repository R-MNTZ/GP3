#pragma once
#include "Common.h"
#include "pch.h"
#include "InputState.h"
#define INPUT Input::GetInstance()

class Input
{
private:
	Input();
	static Input* m_instance;
	InputState m_state;

public:
	static Input* GetInstance();
	void SetKey(SDL_Keycode key, bool state);
	bool GetKey(SDL_Keycode key); //check if its curently down or not
	bool GetKeyDown(SDL_Keycode key);
	bool GetKeyUp(SDL_Keycode key);

	glm::ivec2 GetMousePos() 
	{ 
		
		LOG_DEBUG(std::to_string(m_state.mousePos.y), errType::TRACE);
		return m_state.mousePos;
	}
	void MoveMouse(glm::ivec2 delta) { m_state.mousePos += delta; }


};
