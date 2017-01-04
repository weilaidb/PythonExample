#define _SDL_haptic_h
struct _SDL_Haptic;
typedef struct _SDL_Haptic SDL_Haptic;
#define SDL_HAPTIC_CONSTANT   (1u<<0)
#define SDL_HAPTIC_SINE       (1u<<1)
#define SDL_HAPTIC_LEFTRIGHT     (1u<<2)
#define SDL_HAPTIC_TRIANGLE   (1u<<3)
#define SDL_HAPTIC_SAWTOOTHUP (1u<<4)
#define SDL_HAPTIC_SAWTOOTHDOWN (1u<<5)
#define SDL_HAPTIC_RAMP       (1u<<6)
#define SDL_HAPTIC_SPRING     (1u<<7)
#define SDL_HAPTIC_DAMPER     (1u<<8)
#define SDL_HAPTIC_INERTIA    (1u<<9)
#define SDL_HAPTIC_FRICTION   (1u<<10)
#define SDL_HAPTIC_CUSTOM     (1u<<11)
#define SDL_HAPTIC_GAIN       (1u<<12)
#define SDL_HAPTIC_AUTOCENTER (1u<<13)
#define SDL_HAPTIC_STATUS     (1u<<14)
#define SDL_HAPTIC_PAUSE      (1u<<15)
#define SDL_HAPTIC_POLAR      0
#define SDL_HAPTIC_CARTESIAN  1
#define SDL_HAPTIC_SPHERICAL  2
#define SDL_HAPTIC_INFINITY   4294967295U
typedef struct SDL_HapticDirection
SDL_HapticDirection;
typedef struct SDL_HapticConstant
SDL_HapticConstant;
typedef struct SDL_HapticPeriodic
SDL_HapticPeriodic;
typedef struct SDL_HapticCondition
SDL_HapticCondition;
typedef struct SDL_HapticRamp
SDL_HapticRamp;
typedef struct SDL_HapticLeftRight
SDL_HapticLeftRight;
typedef struct SDL_HapticCustom
SDL_HapticCustom;
typedef union SDL_HapticEffect
SDL_HapticEffect;
extern DECLSPEC int SDLCALL SDL_NumHaptics(void);
extern DECLSPEC const char *SDLCALL SDL_HapticName(int device_index);
extern DECLSPEC SDL_Haptic *SDLCALL SDL_HapticOpen(int device_index);
extern DECLSPEC int SDLCALL SDL_HapticOpened(int device_index);
extern DECLSPEC int SDLCALL SDL_HapticIndex(SDL_Haptic * haptic);
extern DECLSPEC int SDLCALL SDL_MouseIsHaptic(void);
extern DECLSPEC SDL_Haptic *SDLCALL SDL_HapticOpenFromMouse(void);
extern DECLSPEC int SDLCALL SDL_JoystickIsHaptic(SDL_Joystick * joystick);
extern DECLSPEC SDL_Haptic *SDLCALL SDL_HapticOpenFromJoystick(SDL_Joystick *
joystick);
extern DECLSPEC void SDLCALL SDL_HapticClose(SDL_Haptic * haptic);
extern DECLSPEC int SDLCALL SDL_HapticNumEffects(SDL_Haptic * haptic);
extern DECLSPEC int SDLCALL SDL_HapticNumEffectsPlaying(SDL_Haptic * haptic);
extern DECLSPEC unsigned int SDLCALL SDL_HapticQuery(SDL_Haptic * haptic);
extern DECLSPEC int SDLCALL SDL_HapticNumAxes(SDL_Haptic * haptic);
extern DECLSPEC int SDLCALL SDL_HapticEffectSupported(SDL_Haptic * haptic,
SDL_HapticEffect *
effect);
extern DECLSPEC int SDLCALL SDL_HapticNewEffect(SDL_Haptic * haptic,
SDL_HapticEffect * effect);
extern DECLSPEC int SDLCALL SDL_HapticUpdateEffect(SDL_Haptic * haptic,
int effect,
SDL_HapticEffect * data);
extern DECLSPEC int SDLCALL SDL_HapticRunEffect(SDL_Haptic * haptic,
int effect,
Uint32 iterations);
extern DECLSPEC int SDLCALL SDL_HapticStopEffect(SDL_Haptic * haptic,
int effect);
extern DECLSPEC void SDLCALL SDL_HapticDestroyEffect(SDL_Haptic * haptic,
int effect);
extern DECLSPEC int SDLCALL SDL_HapticGetEffectStatus(SDL_Haptic * haptic,
int effect);
extern DECLSPEC int SDLCALL SDL_HapticSetGain(SDL_Haptic * haptic, int gain);
extern DECLSPEC int SDLCALL SDL_HapticSetAutocenter(SDL_Haptic * haptic,
int autocenter);
extern DECLSPEC int SDLCALL SDL_HapticPause(SDL_Haptic * haptic);
extern DECLSPEC int SDLCALL SDL_HapticUnpause(SDL_Haptic * haptic);
extern DECLSPEC int SDLCALL SDL_HapticStopAll(SDL_Haptic * haptic);
extern DECLSPEC int SDLCALL SDL_HapticRumbleSupported(SDL_Haptic * haptic);
extern DECLSPEC int SDLCALL SDL_HapticRumbleInit(SDL_Haptic * haptic);
extern DECLSPEC int SDLCALL SDL_HapticRumblePlay(SDL_Haptic * haptic, float strength, Uint32 length );
extern DECLSPEC int SDLCALL SDL_HapticRumbleStop(SDL_Haptic * haptic);
