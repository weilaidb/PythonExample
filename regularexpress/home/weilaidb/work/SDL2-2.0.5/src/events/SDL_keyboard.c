typedef struct SDL_Keyboard SDL_Keyboard;
struct SDL_Keyboard
;
static SDL_Keyboard SDL_keyboard;
static const SDL_Keycode SDL_default_keymap[SDL_NUM_SCANCODES] = ;
static const char *SDL_scancode_names[SDL_NUM_SCANCODES] = ;
char *
SDL_UCS4ToUTF8(Uint32 ch, char *dst)
int
SDL_KeyboardInit(void)
void
SDL_ResetKeyboard(void)
void
SDL_GetDefaultKeymap(SDL_Keycode * keymap)
void
SDL_SetKeymap(int start, SDL_Keycode * keys, int length)
void
SDL_SetScancodeName(SDL_Scancode scancode, const char *name)
SDL_Window *
SDL_GetKeyboardFocus(void)
void
SDL_SetKeyboardFocus(SDL_Window * window)
int
SDL_SendKeyboardKey(Uint8 state, SDL_Scancode scancode)
int
SDL_SendKeyboardText(const char *text)
int
SDL_SendEditingText(const char *text, int start, int length)
void
SDL_KeyboardQuit(void)
const Uint8 *
SDL_GetKeyboardState(int *numkeys)
SDL_Keymod
SDL_GetModState(void)
void
SDL_SetModState(SDL_Keymod modstate)
void
SDL_ToggleModState(const SDL_Keymod modstate, const SDL_bool toggle)
SDL_Keycode
SDL_GetKeyFromScancode(SDL_Scancode scancode)
SDL_Scancode
SDL_GetScancodeFromKey(SDL_Keycode key)
const char *
SDL_GetScancodeName(SDL_Scancode scancode)
SDL_Scancode SDL_GetScancodeFromName(const char *name)
const char *
SDL_GetKeyName(SDL_Keycode key)
SDL_Keycode
SDL_GetKeyFromName(const char *name)
