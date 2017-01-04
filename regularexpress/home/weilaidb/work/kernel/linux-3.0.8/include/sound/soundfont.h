#define __SOUND_SOUNDFONT_H
#define SF_MAX_INSTRUMENTS	128
#define SF_MAX_PRESETS  256
#define SF_IS_DRUM_BANK(z) ((z) == 128)
struct snd_sf_zone ;
struct snd_sf_sample ;
struct snd_soundfont ;
struct snd_sf_callback ;
struct snd_sf_list ;
int snd_soundfont_load(struct snd_sf_list *sflist, const void __user *data,
long count, int client);
int snd_soundfont_load_guspatch(struct snd_sf_list *sflist, const char __user *data,
long count, int client);
int snd_soundfont_close_check(struct snd_sf_list *sflist, int client);
struct snd_sf_list *snd_sf_new(struct snd_sf_callback *callback,
struct snd_util_memhdr *hdr);
void snd_sf_free(struct snd_sf_list *sflist);
int snd_soundfont_remove_samples(struct snd_sf_list *sflist);
int snd_soundfont_remove_unlocked(struct snd_sf_list *sflist);
int snd_soundfont_search_zone(struct snd_sf_list *sflist, int *notep, int vel,
int preset, int bank,
int def_preset, int def_bank,
struct snd_sf_zone **table, int max_layers);
int snd_sf_calc_parm_hold(int msec);
int snd_sf_calc_parm_attack(int msec);
int snd_sf_calc_parm_decay(int msec);
#define snd_sf_calc_parm_delay(msec) (0x8000 - (msec) * 1000 / 725);
extern int snd_sf_vol_table[128];
int snd_sf_linear_to_log(unsigned int amount, int offset, int ratio);
