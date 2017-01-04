#if SDL_VIDEO_DRIVER_NACL
extern void NACL_SetScreenResolution(int width, int height, Uint32 format);
int
nacl_main(int argc, char *argv[])
PPAPI_SIMPLE_REGISTER_MAIN(nacl_main);
