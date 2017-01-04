#define VORTEX_MPU401_LEGACY
#define MIDI_CLOCK_DIV      0x61
#define MPU401_RESET		0xff
#define MPU401_ENTER_UART	0x3f
#define MPU401_ACK		    0xfe
static int __devinit snd_vortex_midi(vortex_t * vortex)
