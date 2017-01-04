#define _SDL_syshaptic_h
struct haptic_effect
;
struct _SDL_Haptic
;
extern int SDL_SYS_HapticInit(void);
extern int SDL_SYS_NumHaptics();
extern const char *SDL_SYS_HapticName(int index);
extern int SDL_SYS_HapticOpen(SDL_Haptic * haptic);
int SDL_SYS_HapticMouse(void);
extern int SDL_SYS_JoystickIsHaptic(SDL_Joystick * joystick);
extern int SDL_SYS_HapticOpenFromJoystick(SDL_Haptic * haptic,
SDL_Joystick * joystick);
extern int SDL_SYS_JoystickSameHaptic(SDL_Haptic * haptic,
SDL_Joystick * joystick);
extern void SDL_SYS_HapticClose(SDL_Haptic * haptic);
extern void SDL_SYS_HapticQuit(void);
extern int SDL_SYS_HapticNewEffect(SDL_Haptic * haptic,
struct haptic_effect *effect,
SDL_HapticEffect * base);
extern int SDL_SYS_HapticUpdateEffect(SDL_Haptic * haptic,
struct haptic_effect *effect,
SDL_HapticEffect * data);
extern int SDL_SYS_HapticRunEffect(SDL_Haptic * haptic,
struct haptic_effect *effect,
Uint32 iterations);
extern int SDL_SYS_HapticStopEffect(SDL_Haptic * haptic,
struct haptic_effect *effect);
extern void SDL_SYS_HapticDestroyEffect(SDL_Haptic * haptic,
struct haptic_effect *effect);
extern int SDL_SYS_HapticGetEffectStatus(SDL_Haptic * haptic,
struct haptic_effect *effect);
extern int SDL_SYS_HapticSetGain(SDL_Haptic * haptic, int gain);
extern int SDL_SYS_HapticSetAutocenter(SDL_Haptic * haptic, int autocenter);
extern int SDL_SYS_HapticPause(SDL_Haptic * haptic);
extern int SDL_SYS_HapticUnpause(SDL_Haptic * haptic);
extern int SDL_SYS_HapticStopAll(SDL_Haptic * haptic);
