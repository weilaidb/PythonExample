#define _SDL_gamecontroller_h
struct _SDL_GameController;
typedef struct _SDL_GameController SDL_GameController;
typedef enum
SDL_GameControllerBindType;
typedef struct SDL_GameControllerButtonBind
SDL_GameControllerButtonBind;
extern DECLSPEC int SDLCALL SDL_GameControllerAddMappingsFromRW( SDL_RWops * rw, int freerw );
#define SDL_GameControllerAddMappingsFromFile(file)   SDL_GameControllerAddMappingsFromRW(SDL_RWFromFile(file, "rb"), 1)
extern DECLSPEC int SDLCALL SDL_GameControllerAddMapping( const char* mappingString );
extern DECLSPEC char * SDLCALL SDL_GameControllerMappingForGUID( SDL_JoystickGUID guid );
extern DECLSPEC char * SDLCALL SDL_GameControllerMapping( SDL_GameController * gamecontroller );
extern DECLSPEC SDL_bool SDLCALL SDL_IsGameController(int joystick_index);
extern DECLSPEC const char *SDLCALL SDL_GameControllerNameForIndex(int joystick_index);
extern DECLSPEC SDL_GameController *SDLCALL SDL_GameControllerOpen(int joystick_index);
extern DECLSPEC SDL_GameController *SDLCALL SDL_GameControllerFromInstanceID(SDL_JoystickID joyid);
extern DECLSPEC const char *SDLCALL SDL_GameControllerName(SDL_GameController *gamecontroller);
extern DECLSPEC SDL_bool SDLCALL SDL_GameControllerGetAttached(SDL_GameController *gamecontroller);
extern DECLSPEC SDL_Joystick *SDLCALL SDL_GameControllerGetJoystick(SDL_GameController *gamecontroller);
extern DECLSPEC int SDLCALL SDL_GameControllerEventState(int state);
extern DECLSPEC void SDLCALL SDL_GameControllerUpdate(void);
typedef enum
SDL_GameControllerAxis;
extern DECLSPEC SDL_GameControllerAxis SDLCALL SDL_GameControllerGetAxisFromString(const char *pchString);
extern DECLSPEC const char* SDLCALL SDL_GameControllerGetStringForAxis(SDL_GameControllerAxis axis);
extern DECLSPEC SDL_GameControllerButtonBind SDLCALL
SDL_GameControllerGetBindForAxis(SDL_GameController *gamecontroller,
SDL_GameControllerAxis axis);
extern DECLSPEC Sint16 SDLCALL
SDL_GameControllerGetAxis(SDL_GameController *gamecontroller,
SDL_GameControllerAxis axis);
typedef enum
SDL_GameControllerButton;
extern DECLSPEC SDL_GameControllerButton SDLCALL SDL_GameControllerGetButtonFromString(const char *pchString);
extern DECLSPEC const char* SDLCALL SDL_GameControllerGetStringForButton(SDL_GameControllerButton button);
extern DECLSPEC SDL_GameControllerButtonBind SDLCALL
SDL_GameControllerGetBindForButton(SDL_GameController *gamecontroller,
SDL_GameControllerButton button);
extern DECLSPEC Uint8 SDLCALL SDL_GameControllerGetButton(SDL_GameController *gamecontroller,
SDL_GameControllerButton button);
extern DECLSPEC void SDLCALL SDL_GameControllerClose(SDL_GameController *gamecontroller);
