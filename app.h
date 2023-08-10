#pragma once
#include <cstdio>
#include <cstdlib>
#include "sdl2/SDL.h"
#include "sdl2/SDL_image.h"
#include "sdl2/SDL_main.h"
#include "global.h"
#include "input.h"

void clear() 
{
	SDL_SetRenderDrawColor(app.renderer, 32, 32, 32, 255);
	SDL_RenderClear(app.renderer);
}

void render()
{
	SDL_RenderPresent(app.renderer);
	SDL_Delay(32);// Will be cap fps function
}

void handle_input()
{
	input_hendler();
}

void do_logic()
{
	// Logic code will be here
}