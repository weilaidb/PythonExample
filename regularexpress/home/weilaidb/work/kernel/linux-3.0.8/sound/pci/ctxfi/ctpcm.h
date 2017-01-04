#define CTPCM_H
int ct_alsa_pcm_create(struct ct_atc *atc,
enum CTALSADEVS device,
const char *device_name);
