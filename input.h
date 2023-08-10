#pragma once
#include <cstdio>
#include <cstdlib>
#include "sdl2/SDL.h"
#include "sdl2/SDL_image.h"
#include "sdl2/SDL_main.h"
#include "global.h"

void input_hendler() {

	SDL_Event event;
	if (SDL_PollEvent(&event))
	{
		switch (event.type)
		{
		case SDL_QUIT:
			app.renderer = false;
			break;

		default:
			break;
		}
	}

}