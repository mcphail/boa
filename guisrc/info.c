
/* Program to pop up a quick "OK" message box  */

#include "SDL.h"
#include "GUI_output.h"
#include <string.h>

void okbox(SDL_Surface *, const char *, const char *, const char *);


int main(int argc, char *argv[])
{
	SDL_Surface *screen;

	/* Initialize SDL */
	if ( SDL_Init(SDL_INIT_VIDEO) < 0 ) {
		fprintf(stderr, "Couldn't initialize SDL: %s\n",SDL_GetError());
		exit(1);
	}
	atexit(SDL_Quit);

	/* Get a video mode for display */
	screen = SDL_SetVideoMode(320, 200, 0, SDL_SWSURFACE);
	if ( screen == NULL ) {
		fprintf(stderr, "Couldn't set video mode: %s\n",SDL_GetError());
		exit(1);
	}

	if ( NULL == argv[1] ) {
		okbox(screen, "Error", "No command",
		      "Please call this routine with a\nsuitable command");
		exit(1);
	}

	if ( 0 == strcmp(argv[1], "regression") ) {
		okbox(screen, "Incompatible version", "Warning",
		      "The licence for this game has changed.\nThe development version can no longer\nbe distributed. This version is the\nstable release and is older than your\nprevious version. Your existing saves\nwill not run with this version.\n\nTo use your previous version, run:\n\"snap revert boa\"");
		exit(0);
	}

	okbox(screen, "Error", "Command not recognised",
	      "That command did not work");
	exit(1);
}

void okbox(SDL_Surface *screen, const char *window_name, const char *title,
           const char *message)
{
	SDL_WM_SetCaption(title, NULL);
	GUI_MessageBox(screen, window_name, message, GUI_MBOK);
	return;
}
