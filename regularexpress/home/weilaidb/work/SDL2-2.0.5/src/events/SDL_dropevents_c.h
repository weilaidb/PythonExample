#define _SDL_dropevents_c_h
extern int SDL_SendDropFile(SDL_Window *window, const char *file);
extern int SDL_SendDropText(SDL_Window *window, const char *text);
extern int SDL_SendDropComplete(SDL_Window *window);
