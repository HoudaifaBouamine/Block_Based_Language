#include <cstdio>
#include <cstdlib>
#include "sdl2/SDL.h"
#include "sdl2/SDL_image.h"
#include "sdl2/SDL_main.h"
#include "init.h"
#include "app.h"

int main(int argc, char* argv[])
{
	initSDL();

	//

	app.running = true;

	while (app.running)
	{

		clear();

		handle_input();
		do_logic();

		render();
	}

	//

	return 0;
}