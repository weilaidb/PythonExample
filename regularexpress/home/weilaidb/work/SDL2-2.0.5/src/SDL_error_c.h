#define _SDL_error_c_h
#define ERR_MAX_STRLEN  128
#define ERR_MAX_ARGS    5
typedef struct SDL_error
SDL_error;
extern SDL_error *SDL_GetErrBuf(void);
