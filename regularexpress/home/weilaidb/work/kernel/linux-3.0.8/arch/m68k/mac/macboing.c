static int mac_asc_inited;
static __u8 mac_asc_wave_tab[ 0x800 ];
static const signed char sine_data[] = ;
static volatile __u8* mac_asc_regs = ( void* )0x50F14000;
static unsigned long mac_asc_samplespersec = 11050;
static int mac_bell_duration;
static unsigned long mac_bell_phase;
static unsigned long mac_bell_phasepersample;
static void mac_init_asc( void );
static void mac_nosound( unsigned long );
static void mac_quadra_start_bell( unsigned int, unsigned int, unsigned int );
static void mac_quadra_ring_bell( unsigned long );
static void mac_av_start_bell( unsigned int, unsigned int, unsigned int );
static void ( *mac_special_bell )( unsigned int, unsigned int, unsigned int );
static DEFINE_TIMER(mac_sound_timer, mac_nosound, 0, 0);
static void mac_init_asc( void )
void mac_mksound( unsigned int freq, unsigned int length )
static void mac_nosound( unsigned long ignored )
static void mac_quadra_start_bell( unsigned int freq, unsigned int length, unsigned int volume )
static void mac_quadra_ring_bell( unsigned long ignored )
static void mac_av_start_bell( unsigned int freq, unsigned int length, unsigned int volume )
