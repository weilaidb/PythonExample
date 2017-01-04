enum speedstep_processor ;
#define SPEEDSTEP_HIGH	0x00000000
#define SPEEDSTEP_LOW	0x00000001
extern enum speedstep_processor speedstep_detect_processor(void);
extern unsigned int speedstep_get_frequency(enum speedstep_processor processor);
extern unsigned int speedstep_get_freqs(enum speedstep_processor processor,
unsigned int *low_speed,
unsigned int *high_speed,
unsigned int *transition_latency,
void (*set_state) (unsigned int state));
