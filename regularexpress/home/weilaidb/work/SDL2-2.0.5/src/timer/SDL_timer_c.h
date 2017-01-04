#define ROUND_RESOLUTION(X) \
(((X+TIMER_RESOLUTION-1)/TIMER_RESOLUTION)*TIMER_RESOLUTION)
extern void SDL_TicksInit(void);
extern void SDL_TicksQuit(void);
extern int SDL_TimerInit(void);
extern void SDL_TimerQuit(void);
