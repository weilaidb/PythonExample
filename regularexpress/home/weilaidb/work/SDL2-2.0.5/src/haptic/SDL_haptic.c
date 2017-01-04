SDL_Haptic *SDL_haptics = NULL;
int
SDL_HapticInit(void)
static int
ValidHaptic(SDL_Haptic * haptic)
int
SDL_NumHaptics(void)
const char *
SDL_HapticName(int device_index)
SDL_Haptic *
SDL_HapticOpen(int device_index)
int
SDL_HapticOpened(int device_index)
int
SDL_HapticIndex(SDL_Haptic * haptic)
int
SDL_MouseIsHaptic(void)
SDL_Haptic *
SDL_HapticOpenFromMouse(void)
int
SDL_JoystickIsHaptic(SDL_Joystick * joystick)
SDL_Haptic *
SDL_HapticOpenFromJoystick(SDL_Joystick * joystick)
void
SDL_HapticClose(SDL_Haptic * haptic)
void
SDL_HapticQuit(void)
int
SDL_HapticNumEffects(SDL_Haptic * haptic)
int
SDL_HapticNumEffectsPlaying(SDL_Haptic * haptic)
unsigned int
SDL_HapticQuery(SDL_Haptic * haptic)
int
SDL_HapticNumAxes(SDL_Haptic * haptic)
int
SDL_HapticEffectSupported(SDL_Haptic * haptic, SDL_HapticEffect * effect)
int
SDL_HapticNewEffect(SDL_Haptic * haptic, SDL_HapticEffect * effect)
static int
ValidEffect(SDL_Haptic * haptic, int effect)
int
SDL_HapticUpdateEffect(SDL_Haptic * haptic, int effect,
SDL_HapticEffect * data)
int
SDL_HapticRunEffect(SDL_Haptic * haptic, int effect, Uint32 iterations)
int
SDL_HapticStopEffect(SDL_Haptic * haptic, int effect)
void
SDL_HapticDestroyEffect(SDL_Haptic * haptic, int effect)
int
SDL_HapticGetEffectStatus(SDL_Haptic * haptic, int effect)
int
SDL_HapticSetGain(SDL_Haptic * haptic, int gain)
int
SDL_HapticSetAutocenter(SDL_Haptic * haptic, int autocenter)
int
SDL_HapticPause(SDL_Haptic * haptic)
int
SDL_HapticUnpause(SDL_Haptic * haptic)
int
SDL_HapticStopAll(SDL_Haptic * haptic)
int
SDL_HapticRumbleSupported(SDL_Haptic * haptic)
int
SDL_HapticRumbleInit(SDL_Haptic * haptic)
int
SDL_HapticRumblePlay(SDL_Haptic * haptic, float strength, Uint32 length)
int
SDL_HapticRumbleStop(SDL_Haptic * haptic)
