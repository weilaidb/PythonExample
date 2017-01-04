static int open_patch(struct snd_sf_list *sflist, const char __user *data,
int count, int client);
static struct snd_soundfont *newsf(struct snd_sf_list *sflist, int type, char *name);
static int is_identical_font(struct snd_soundfont *sf, int type, unsigned char *name);
static int close_patch(struct snd_sf_list *sflist);
static int probe_data(struct snd_sf_list *sflist, int sample_id);
static void set_zone_counter(struct snd_sf_list *sflist,
struct snd_soundfont *sf, struct snd_sf_zone *zp);
static struct snd_sf_zone *sf_zone_new(struct snd_sf_list *sflist,
struct snd_soundfont *sf);
static void set_sample_counter(struct snd_sf_list *sflist,
struct snd_soundfont *sf, struct snd_sf_sample *sp);
static struct snd_sf_sample *sf_sample_new(struct snd_sf_list *sflist,
struct snd_soundfont *sf);
static void sf_sample_delete(struct snd_sf_list *sflist,
struct snd_soundfont *sf, struct snd_sf_sample *sp);
static int load_map(struct snd_sf_list *sflist, const void __user *data, int count);
static int load_info(struct snd_sf_list *sflist, const void __user *data, long count);
static int remove_info(struct snd_sf_list *sflist, struct snd_soundfont *sf,
int bank, int instr);
static void init_voice_info(struct soundfont_voice_info *avp);
static void init_voice_parm(struct soundfont_voice_parm *pp);
static struct snd_sf_sample *set_sample(struct snd_soundfont *sf,
struct soundfont_voice_info *avp);
static struct snd_sf_sample *find_sample(struct snd_soundfont *sf, int sample_id);
static int load_data(struct snd_sf_list *sflist, const void __user *data, long count);
static void rebuild_presets(struct snd_sf_list *sflist);
static void add_preset(struct snd_sf_list *sflist, struct snd_sf_zone *cur);
static void delete_preset(struct snd_sf_list *sflist, struct snd_sf_zone *zp);
static struct snd_sf_zone *search_first_zone(struct snd_sf_list *sflist,
int bank, int preset, int key);
static int search_zones(struct snd_sf_list *sflist, int *notep, int vel,
int preset, int bank, struct snd_sf_zone **table,
int max_layers, int level);
static int get_index(int bank, int instr, int key);
static void snd_sf_init(struct snd_sf_list *sflist);
static void snd_sf_clear(struct snd_sf_list *sflist);
static void
lock_preset(struct snd_sf_list *sflist)
static void
unlock_preset(struct snd_sf_list *sflist)
int
snd_soundfont_close_check(struct snd_sf_list *sflist, int client)
int
snd_soundfont_load(struct snd_sf_list *sflist, const void __user *data,
long count, int client)
static inline int
is_special_type(int type)
static int
open_patch(struct snd_sf_list *sflist, const char __user *data,
int count, int client)
static struct snd_soundfont *
newsf(struct snd_sf_list *sflist, int type, char *name)
static int
is_identical_font(struct snd_soundfont *sf, int type, unsigned char *name)
static int
close_patch(struct snd_sf_list *sflist)
static int
probe_data(struct snd_sf_list *sflist, int sample_id)
static void
set_zone_counter(struct snd_sf_list *sflist, struct snd_soundfont *sf,
struct snd_sf_zone *zp)
static struct snd_sf_zone *
sf_zone_new(struct snd_sf_list *sflist, struct snd_soundfont *sf)
static void
set_sample_counter(struct snd_sf_list *sflist, struct snd_soundfont *sf,
struct snd_sf_sample *sp)
static struct snd_sf_sample *
sf_sample_new(struct snd_sf_list *sflist, struct snd_soundfont *sf)
static void
sf_sample_delete(struct snd_sf_list *sflist, struct snd_soundfont *sf,
struct snd_sf_sample *sp)
static int
load_map(struct snd_sf_list *sflist, const void __user *data, int count)
static int
remove_info(struct snd_sf_list *sflist, struct snd_soundfont *sf,
int bank, int instr)
static int
load_info(struct snd_sf_list *sflist, const void __user *data, long count)
static void
init_voice_info(struct soundfont_voice_info *avp)
static void
init_voice_parm(struct soundfont_voice_parm *pp)
static struct snd_sf_sample *
set_sample(struct snd_soundfont *sf, struct soundfont_voice_info *avp)
static struct snd_sf_sample *
find_sample(struct snd_soundfont *sf, int sample_id)
static int
load_data(struct snd_sf_list *sflist, const void __user *data, long count)
static int log_tbl[129] = ;
int
snd_sf_linear_to_log(unsigned int amount, int offset, int ratio)
EXPORT_SYMBOL(snd_sf_linear_to_log);
#define OFFSET_MSEC		653117
#define OFFSET_ABSCENT		851781
#define OFFSET_SAMPLERATE	1011119
#define ABSCENT_RATIO		1200
#define TIMECENT_RATIO		1200
#define SAMPLERATE_RATIO	4096
static int
freq_to_note(int mhz)
static int
calc_rate_offset(int hz)
static int
calc_gus_envelope_time(int rate, int start, int end)
static short attack_time_tbl[128] = ;
static short decay_time_tbl[128] = ;
int
snd_sf_calc_parm_hold(int msec)
static int
calc_parm_search(int msec, short *table)
int
snd_sf_calc_parm_attack(int msec)
int
snd_sf_calc_parm_decay(int msec)
int snd_sf_vol_table[128] = ;
#define calc_gus_sustain(val)  (0x7f - snd_sf_vol_table[(val)/2])
#define calc_gus_attenuation(val)	snd_sf_vol_table[(val)/2]
static int
load_guspatch(struct snd_sf_list *sflist, const char __user *data,
long count, int client)
int
snd_soundfont_load_guspatch(struct snd_sf_list *sflist, const char __user *data,
long count, int client)
static void
rebuild_presets(struct snd_sf_list *sflist)
static void
add_preset(struct snd_sf_list *sflist, struct snd_sf_zone *cur)
static void
delete_preset(struct snd_sf_list *sflist, struct snd_sf_zone *zp)
int
snd_soundfont_search_zone(struct snd_sf_list *sflist, int *notep, int vel,
int preset, int bank,
int def_preset, int def_bank,
struct snd_sf_zone **table, int max_layers)
static struct snd_sf_zone *
search_first_zone(struct snd_sf_list *sflist, int bank, int preset, int key)
static int
search_zones(struct snd_sf_list *sflist, int *notep, int vel,
int preset, int bank, struct snd_sf_zone **table,
int max_layers, int level)
static int
get_index(int bank, int instr, int key)
static void
snd_sf_init(struct snd_sf_list *sflist)
static void
snd_sf_clear(struct snd_sf_list *sflist)
struct snd_sf_list *
snd_sf_new(struct snd_sf_callback *callback, struct snd_util_memhdr *hdr)
void
snd_sf_free(struct snd_sf_list *sflist)
int
snd_soundfont_remove_samples(struct snd_sf_list *sflist)
int
snd_soundfont_remove_unlocked(struct snd_sf_list *sflist)
