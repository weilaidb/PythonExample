static DWORD start = 0;
static BOOL ticks_started = FALSE;
static BOOL hires_timer_available;
static LARGE_INTEGER hires_start_ticks;
static LARGE_INTEGER hires_ticks_per_second;
static void
SDL_SetSystemTimerResolution(const UINT uPeriod)
static void
SDL_TimerResolutionChanged(void *userdata, const char *name, const char *oldValue, const char *hint)
void
SDL_TicksInit(void)
void
SDL_TicksQuit(void)
Uint32
SDL_GetTicks(void)
Uint64
SDL_GetPerformanceCounter(void)
Uint64
SDL_GetPerformanceFrequency(void)
void
SDL_Delay(Uint32 ms)
