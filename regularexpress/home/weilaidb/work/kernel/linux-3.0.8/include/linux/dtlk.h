#define DTLK_MINOR	0
#define DTLK_IO_EXTENT	0x02
#define DTLK_INTERROGATE 0xa390
#define DTLK_STATUS 0xa391
#define DTLK_CLEAR 0x18
#define DTLK_MAX_RETRIES (loops_per_jiffy/(10000/HZ))
#define TTS_READABLE     0x80
#define TTS_SPEAKING     0x40
#define TTS_SPEAKING2    0x20
#define TTS_WRITABLE     0x10
#define TTS_ALMOST_FULL  0x08
#define TTS_ALMOST_EMPTY 0x04
#define LPC_5220_NORMAL 0x60
#define LPC_5220_FAST 0x64
#define LPC_D6_NORMAL 0x20
#define LPC_D6_FAST 0x24
#define LPC_SPEAKING     0x80
#define LPC_BUFFER_LOW   0x40
#define LPC_BUFFER_EMPTY 0x20
struct dtlk_settings
;
