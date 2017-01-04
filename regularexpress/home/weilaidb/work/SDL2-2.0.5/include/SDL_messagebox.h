#define _SDL_messagebox_h
typedef enum
SDL_MessageBoxFlags;
typedef enum
SDL_MessageBoxButtonFlags;
typedef struct
SDL_MessageBoxButtonData;
typedef struct
SDL_MessageBoxColor;
typedef enum
SDL_MessageBoxColorType;
typedef struct
SDL_MessageBoxColorScheme;
typedef struct
SDL_MessageBoxData;
extern DECLSPEC int SDLCALL SDL_ShowMessageBox(const SDL_MessageBoxData *messageboxdata, int *buttonid);
extern DECLSPEC int SDLCALL SDL_ShowSimpleMessageBox(Uint32 flags, const char *title, const char *message, SDL_Window *window);
