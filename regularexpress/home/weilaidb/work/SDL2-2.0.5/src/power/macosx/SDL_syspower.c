#if SDL_POWER_MACOSX
#define STRMATCH(a,b) (CFStringCompare(a, b, 0) == kCFCompareEqualTo)
#define GETVAL(k,v) \
CFDictionaryGetValueIfPresent(dict, CFSTR(k), (const void **) v)
static void
checkps(CFDictionaryRef dict, SDL_bool * have_ac, SDL_bool * have_battery,
SDL_bool * charging, int *seconds, int *percent)
#undef GETVAL
#undef STRMATCH
SDL_bool
SDL_GetPowerInfo_MacOSX(SDL_PowerState * state, int *seconds, int *percent)
