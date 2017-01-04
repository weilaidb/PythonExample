#define CTMIXER_H
#define INIT_VOL	0x1c00
enum MIXER_PORT_T ;
struct ct_mixer ;
int ct_alsa_mix_create(struct ct_atc *atc,
enum CTALSADEVS device,
const char *device_name);
int ct_mixer_create(struct ct_atc *atc, struct ct_mixer **rmixer);
int ct_mixer_destroy(struct ct_mixer *mixer);
