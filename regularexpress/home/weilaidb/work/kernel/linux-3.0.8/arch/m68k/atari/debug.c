int atari_SCC_reset_done;
EXPORT_SYMBOL(atari_SCC_reset_done);
static struct console atari_console_driver = ;
static inline void ata_mfp_out(char c)
static void atari_mfp_console_write(struct console *co, const char *str,
unsigned int count)
static inline void ata_scc_out(char c)
static void atari_scc_console_write(struct console *co, const char *str,
unsigned int count)
static inline void ata_midi_out(char c)
static void atari_midi_console_write(struct console *co, const char *str,
unsigned int count)
static int ata_par_out(char c)
static void atari_par_console_write(struct console *co, const char *str,
unsigned int count)
static void __init atari_init_mfp_port(int cflag)
#define SCC_WRITE(reg, val)				\
do  while (0)
#define LONG_DELAY()					\
do  while (0)
static void __init atari_init_scc_port(int cflag)
static void __init atari_init_midi_port(int cflag)
static int __init atari_debug_setup(char *arg)
early_param("debug", atari_debug_setup);
