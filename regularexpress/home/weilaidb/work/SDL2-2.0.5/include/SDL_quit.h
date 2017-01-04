#define _SDL_quit_h
#define SDL_QuitRequested() \
(SDL_PumpEvents(), (SDL_PeepEvents(NULL,0,SDL_PEEKEVENT,SDL_QUIT,SDL_QUIT) > 0))
