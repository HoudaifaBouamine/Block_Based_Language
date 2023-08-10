#pragma once
#include "sdl2/SDL.h"
#include "defs.h"

struct App {

	
	SDL_Renderer* renderer;
	SDL_Window* window;
	bool running;
	bool keyboard[MAX_KEYBOARD_KEYS];
};


