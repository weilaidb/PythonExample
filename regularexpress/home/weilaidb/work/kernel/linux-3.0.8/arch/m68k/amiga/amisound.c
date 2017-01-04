static unsigned short *snd_data;
static const signed char sine_data[] = ;
#define DATA_SIZE	ARRAY_SIZE(sine_data)
#define custom amiga_custom
volatile unsigned short amiga_audio_min_period = 124;
EXPORT_SYMBOL(amiga_audio_min_period);
#define MAX_PERIOD	(65535)
unsigned short amiga_audio_period = MAX_PERIOD;
EXPORT_SYMBOL(amiga_audio_period);
static unsigned long clock_constant;
void __init amiga_init_sound(void)
static void nosound( unsigned long ignored );
static DEFINE_TIMER(sound_timer, nosound, 0, 0);
void amiga_mksound( unsigned int hz, unsigned int ticks )
static void nosound( unsigned long ignored )
