#define MOOSEPIC_W 64
#define MOOSEPIC_H 88
#define MOOSEFRAME_SIZE (MOOSEPIC_W * MOOSEPIC_H)
#define MOOSEFRAMES_COUNT 10
SDL_Color MooseColors[84] = ;
Uint8 MooseFrames[MOOSEFRAMES_COUNT][MOOSEFRAME_SIZE];
SDL_Renderer *renderer;
int frame;
SDL_Texture *MooseTexture;
SDL_bool done = SDL_FALSE;
void quit(int rc)
void UpdateTexture(SDL_Texture *texture, int frame)
void
loop()
int
main(int argc, char **argv)
