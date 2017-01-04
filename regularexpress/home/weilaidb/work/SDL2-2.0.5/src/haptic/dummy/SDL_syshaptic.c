#if defined(SDL_HAPTIC_DUMMY) || defined(SDL_HAPTIC_DISABLED)
static int
SDL_SYS_LogicError(void)
int
SDL_SYS_HapticInit(void)
int
SDL_SYS_NumHaptics(void)
const char *
SDL_SYS_HapticName(int index)
int
SDL_SYS_HapticOpen(SDL_Haptic * haptic)
int
SDL_SYS_HapticMouse(void)
int
SDL_SYS_JoystickIsHaptic(SDL_Joystick * joystick)
int
SDL_SYS_HapticOpenFromJoystick(SDL_Haptic * haptic, SDL_Joystick * joystick)
int
SDL_SYS_JoystickSameHaptic(SDL_Haptic * haptic, SDL_Joystick * joystick)
void
SDL_SYS_HapticClose(SDL_Haptic * haptic)
void
SDL_SYS_HapticQuit(void)
int
SDL_SYS_HapticNewEffect(SDL_Haptic * haptic,
struct haptic_effect *effect, SDL_HapticEffect * base)
int
SDL_SYS_HapticUpdateEffect(SDL_Haptic * haptic,
struct haptic_effect *effect,
SDL_HapticEffect * data)
int
SDL_SYS_HapticRunEffect(SDL_Haptic * haptic, struct haptic_effect *effect,
Uint32 iterations)
int
SDL_SYS_HapticStopEffect(SDL_Haptic * haptic, struct haptic_effect *effect)
void
SDL_SYS_HapticDestroyEffect(SDL_Haptic * haptic, struct haptic_effect *effect)
int
SDL_SYS_HapticGetEffectStatus(SDL_Haptic * haptic,
struct haptic_effect *effect)
int
SDL_SYS_HapticSetGain(SDL_Haptic * haptic, int gain)
int
SDL_SYS_HapticSetAutocenter(SDL_Haptic * haptic, int autocenter)
int
SDL_SYS_HapticPause(SDL_Haptic * haptic)
int
SDL_SYS_HapticUnpause(SDL_Haptic * haptic)
int
SDL_SYS_HapticStopAll(SDL_Haptic * haptic)
