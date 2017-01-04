#if defined(CONFIG_GAMEPORT) || (defined(MODULE) && defined(CONFIG_GAMEPORT_MODULE))
#define VORTEX_GAME_DWAIT	20
static unsigned char vortex_game_read(struct gameport *gameport)
static void vortex_game_trigger(struct gameport *gameport)
static int
vortex_game_cooked_read(struct gameport *gameport, int *axes, int *buttons)
static int vortex_game_open(struct gameport *gameport, int mode)
static int __devinit vortex_gameport_register(vortex_t * vortex)
static void vortex_gameport_unregister(vortex_t * vortex)
static inline int vortex_gameport_register(vortex_t * vortex)
static inline void vortex_gameport_unregister(vortex_t * vortex)
