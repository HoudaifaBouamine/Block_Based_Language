#pragma once
#include <cstdio>
#include <cstdlib>
#include "sdl2/SDL.h"
#include "sdl2/SDL_image.h"
#include "sdl2/SDL_main.h"
#include "global.h"

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
	// Handling input code will be here
}

void do_logic()
{
	// logic code will be here
}