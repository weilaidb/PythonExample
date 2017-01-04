#if SDL_HAPTIC_XINPUT
static SDL_bool loaded_xinput = SDL_FALSE;
int
SDL_XINPUT_HapticInit(void)
int
SDL_XINPUT_MaybeAddDevice(const DWORD dwUserid)
int
SDL_XINPUT_MaybeRemoveDevice(const DWORD dwUserid)
static int SDLCALL
SDL_RunXInputHaptic(void *arg)
static int
SDL_XINPUT_HapticOpenFromUserIndex(SDL_Haptic *haptic, const Uint8 userid)
int
SDL_XINPUT_HapticOpen(SDL_Haptic * haptic, SDL_hapticlist_item *item)
int
SDL_XINPUT_JoystickSameHaptic(SDL_Haptic * haptic, SDL_Joystick * joystick)
int
SDL_XINPUT_HapticOpenFromJoystick(SDL_Haptic * haptic, SDL_Joystick * joystick)
void
SDL_XINPUT_HapticClose(SDL_Haptic * haptic)
void
SDL_XINPUT_HapticQuit(void)
int
SDL_XINPUT_HapticNewEffect(SDL_Haptic * haptic, struct haptic_effect *effect, SDL_HapticEffect * base)
int
SDL_XINPUT_HapticUpdateEffect(SDL_Haptic * haptic, struct haptic_effect *effect, SDL_HapticEffect * data)
int
SDL_XINPUT_HapticRunEffect(SDL_Haptic * haptic, struct haptic_effect *effect, Uint32 iterations)
int
SDL_XINPUT_HapticStopEffect(SDL_Haptic * haptic, struct haptic_effect *effect)
void
SDL_XINPUT_HapticDestroyEffect(SDL_Haptic * haptic, struct haptic_effect *effect)
int
SDL_XINPUT_HapticGetEffectStatus(SDL_Haptic * haptic, struct haptic_effect *effect)
int
SDL_XINPUT_HapticSetGain(SDL_Haptic * haptic, int gain)
int
SDL_XINPUT_HapticSetAutocenter(SDL_Haptic * haptic, int autocenter)
int
SDL_XINPUT_HapticPause(SDL_Haptic * haptic)
int
SDL_XINPUT_HapticUnpause(SDL_Haptic * haptic)
int
SDL_XINPUT_HapticStopAll(SDL_Haptic * haptic)
typedef struct SDL_hapticlist_item SDL_hapticlist_item;
int
SDL_XINPUT_HapticInit(void)
int
SDL_XINPUT_MaybeAddDevice(const DWORD dwUserid)
int
SDL_XINPUT_MaybeRemoveDevice(const DWORD dwUserid)
int
SDL_XINPUT_HapticOpen(SDL_Haptic * haptic, SDL_hapticlist_item *item)
int
SDL_XINPUT_JoystickSameHaptic(SDL_Haptic * haptic, SDL_Joystick * joystick)
int
SDL_XINPUT_HapticOpenFromJoystick(SDL_Haptic * haptic, SDL_Joystick * joystick)
void
SDL_XINPUT_HapticClose(SDL_Haptic * haptic)
void
SDL_XINPUT_HapticQuit(void)
int
SDL_XINPUT_HapticNewEffect(SDL_Haptic * haptic, struct haptic_effect *effect, SDL_HapticEffect * base)
int
SDL_XINPUT_HapticUpdateEffect(SDL_Haptic * haptic, struct haptic_effect *effect, SDL_HapticEffect * data)
int
SDL_XINPUT_HapticRunEffect(SDL_Haptic * haptic, struct haptic_effect *effect, Uint32 iterations)
int
SDL_XINPUT_HapticStopEffect(SDL_Haptic * haptic, struct haptic_effect *effect)
void
SDL_XINPUT_HapticDestroyEffect(SDL_Haptic * haptic, struct haptic_effect *effect)
int
SDL_XINPUT_HapticGetEffectStatus(SDL_Haptic * haptic, struct haptic_effect *effect)
int
SDL_XINPUT_HapticSetGain(SDL_Haptic * haptic, int gain)
int
SDL_XINPUT_HapticSetAutocenter(SDL_Haptic * haptic, int autocenter)
int
SDL_XINPUT_HapticPause(SDL_Haptic * haptic)
int
SDL_XINPUT_HapticUnpause(SDL_Haptic * haptic)
int
SDL_XINPUT_HapticStopAll(SDL_Haptic * haptic)
