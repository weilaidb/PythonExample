#if !SDL_EVENTS_DISABLED
#define ABS(_x) ((_x) < 0 ? -(_x) : (_x))
#define SDL_CONTROLLER_PLATFORM_FIELD "platform:"
static SDL_GameController *SDL_gamecontrollers = NULL;
struct _SDL_HatMapping
;
#define k_nMaxReverseEntries 48
#define k_nMaxHatEntries 0x3f + 1
struct _SDL_ControllerMapping
;
typedef struct _ControllerMapping_t
ControllerMapping_t;
static ControllerMapping_t *s_pSupportedControllers = NULL;
static ControllerMapping_t *s_pXInputMapping = NULL;
static ControllerMapping_t *s_pEmscriptenMapping = NULL;
struct _SDL_GameController
;
int SDL_PrivateGameControllerAxis(SDL_GameController * gamecontroller, SDL_GameControllerAxis axis, Sint16 value);
int SDL_PrivateGameControllerButton(SDL_GameController * gamecontroller, SDL_GameControllerButton button, Uint8 state);
static void UpdateEventsForDeviceRemoval()
int SDL_GameControllerEventWatcher(void *userdata, SDL_Event * event)
ControllerMapping_t *SDL_PrivateGetControllerMappingForGUID(SDL_JoystickGUID *guid)
static const char* map_StringForControllerAxis[] = ;
SDL_GameControllerAxis SDL_GameControllerGetAxisFromString(const char *pchString)
const char* SDL_GameControllerGetStringForAxis(SDL_GameControllerAxis axis)
static const char* map_StringForControllerButton[] = ;
SDL_GameControllerButton SDL_GameControllerGetButtonFromString(const char *pchString)
const char* SDL_GameControllerGetStringForButton(SDL_GameControllerButton axis)
void SDL_PrivateGameControllerParseButton(const char *szGameButton, const char *szJoystickButton, struct _SDL_ControllerMapping *pMapping)
static void
SDL_PrivateGameControllerParseControllerConfigString(struct _SDL_ControllerMapping *pMapping, const char *pchString)
void SDL_PrivateLoadButtonMapping(struct _SDL_ControllerMapping *pMapping, SDL_JoystickGUID guid, const char *pchName, const char *pchMapping)
char *SDL_PrivateGetControllerGUIDFromMappingString(const char *pMapping)
char *SDL_PrivateGetControllerNameFromMappingString(const char *pMapping)
char *SDL_PrivateGetControllerMappingFromMappingString(const char *pMapping)
void SDL_PrivateGameControllerRefreshMapping(ControllerMapping_t *pControllerMapping)
static ControllerMapping_t *
SDL_PrivateAddMappingForGUID(SDL_JoystickGUID jGUID, const char *mappingString, SDL_bool *existing)
ControllerMapping_t *SDL_PrivateGetControllerMapping(int device_index)
int
SDL_GameControllerAddMappingsFromRW(SDL_RWops * rw, int freerw)
int
SDL_GameControllerAddMapping(const char *mappingString)
char *
SDL_GameControllerMappingForGUID(SDL_JoystickGUID guid)
char *
SDL_GameControllerMapping(SDL_GameController * gamecontroller)
static void
SDL_GameControllerLoadHints()
int
SDL_GameControllerInit(void)
const char *
SDL_GameControllerNameForIndex(int device_index)
SDL_bool
SDL_IsGameController(int device_index)
SDL_GameController *
SDL_GameControllerOpen(int device_index)
void
SDL_GameControllerUpdate(void)
Sint16
SDL_GameControllerGetAxis(SDL_GameController * gamecontroller, SDL_GameControllerAxis axis)
Uint8
SDL_GameControllerGetButton(SDL_GameController * gamecontroller, SDL_GameControllerButton button)
SDL_bool
SDL_GameControllerGetAttached(SDL_GameController * gamecontroller)
const char *
SDL_GameControllerName(SDL_GameController * gamecontroller)
SDL_Joystick *SDL_GameControllerGetJoystick(SDL_GameController * gamecontroller)
SDL_GameController *
SDL_GameControllerFromInstanceID(SDL_JoystickID joyid)
SDL_GameControllerButtonBind SDL_GameControllerGetBindForAxis(SDL_GameController * gamecontroller, SDL_GameControllerAxis axis)
SDL_GameControllerButtonBind SDL_GameControllerGetBindForButton(SDL_GameController * gamecontroller, SDL_GameControllerButton button)
void
SDL_GameControllerClose(SDL_GameController * gamecontroller)
void
SDL_GameControllerQuit(void)
int
SDL_PrivateGameControllerAxis(SDL_GameController * gamecontroller, SDL_GameControllerAxis axis, Sint16 value)
int
SDL_PrivateGameControllerButton(SDL_GameController * gamecontroller, SDL_GameControllerButton button, Uint8 state)
int
SDL_GameControllerEventState(int state)
