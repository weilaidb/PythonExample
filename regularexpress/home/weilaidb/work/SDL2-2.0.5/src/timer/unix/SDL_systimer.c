#if HAVE_NANOSLEEP || HAVE_CLOCK_GETTIME
#if HAVE_CLOCK_GETTIME
#define SDL_MONOTONIC_CLOCK CLOCK_MONOTONIC_RAW
#define SDL_MONOTONIC_CLOCK CLOCK_MONOTONIC
#if HAVE_CLOCK_GETTIME
static struct timespec start_ts;
#elif defined(__APPLE__)
static uint64_t start_mach;
mach_timebase_info_data_t mach_base_info;
static SDL_bool has_monotonic_time = SDL_FALSE;
static struct timeval start_tv;
static SDL_bool ticks_started = SDL_FALSE;
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
