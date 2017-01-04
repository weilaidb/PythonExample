#define _SDL_windowshaptic_c_h
struct haptic_hwdata
;
struct haptic_hweffect
;
typedef struct SDL_hapticlist_item
SDL_hapticlist_item;
extern SDL_hapticlist_item *SDL_hapticlist;
extern int SDL_SYS_AddHapticDevice(SDL_hapticlist_item *item);
extern int SDL_SYS_RemoveHapticDevice(SDL_hapticlist_item *prev, SDL_hapticlist_item *item);
