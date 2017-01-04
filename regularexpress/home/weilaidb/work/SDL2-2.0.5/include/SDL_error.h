#define _SDL_error_h
extern DECLSPEC int SDLCALL SDL_SetError(SDL_PRINTF_FORMAT_STRING const char *fmt, ...) SDL_PRINTF_VARARG_FUNC(1);
extern DECLSPEC const char *SDLCALL SDL_GetError(void);
extern DECLSPEC void SDLCALL SDL_ClearError(void);
#define SDL_OutOfMemory()   SDL_Error(SDL_ENOMEM)
#define SDL_Unsupported()   SDL_Error(SDL_UNSUPPORTED)
#define SDL_InvalidParamError(param)    SDL_SetError("Parameter '%s' is invalid", (param))
typedef enum
SDL_errorcode;
extern DECLSPEC int SDLCALL SDL_Error(SDL_errorcode code);
