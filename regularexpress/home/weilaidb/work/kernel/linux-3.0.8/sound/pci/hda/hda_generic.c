struct hda_gnode ;
#define MAX_PCM_VOLS	2
struct pcm_vol ;
struct hda_gspec ;
#define defcfg_type(node) (((node)->def_cfg & AC_DEFCFG_DEVICE) >> \
AC_DEFCFG_DEVICE_SHIFT)
#define defcfg_location(node) (((node)->def_cfg & AC_DEFCFG_LOCATION) >> \
AC_DEFCFG_LOCATION_SHIFT)
#define defcfg_port_conn(node) (((node)->def_cfg & AC_DEFCFG_PORT_CONN) >> \
AC_DEFCFG_PORT_CONN_SHIFT)
static void snd_hda_generic_free(struct hda_codec *codec)
static int add_new_node(struct hda_codec *codec, struct hda_gspec *spec, hda_nid_t nid)
static int build_afg_tree(struct hda_codec *codec)
static struct hda_gnode *hda_get_node(struct hda_gspec *spec, hda_nid_t nid)
static int unmute_output(struct hda_codec *codec, struct hda_gnode *node)
static int unmute_input(struct hda_codec *codec, struct hda_gnode *node, unsigned int index)
static int select_input_connection(struct hda_codec *codec, struct hda_gnode *node,
unsigned int index)
static void clear_check_flags(struct hda_gspec *spec)
static int parse_output_path(struct hda_codec *codec, struct hda_gspec *spec,
struct hda_gnode *node, int dac_idx)
static struct hda_gnode *parse_output_jack(struct hda_codec *codec,
struct hda_gspec *spec,
int jack_type)
static int parse_output(struct hda_codec *codec)
static int capture_source_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int capture_source_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int capture_source_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static const char *get_input_type(struct hda_gnode *node, unsigned int *pinctl)
static int parse_adc_sub_nodes(struct hda_codec *codec, struct hda_gspec *spec,
struct hda_gnode *node, int idx)
static int parse_input_path(struct hda_codec *codec, struct hda_gnode *adc_node)
static int parse_input(struct hda_codec *codec)
static void add_input_loopback(struct hda_codec *codec, hda_nid_t nid,
int dir, int idx)
#define add_input_loopback(codec,nid,dir,idx)
static int create_mixer(struct hda_codec *codec, struct hda_gnode *node,
unsigned int index, const char *type,
const char *dir_sfx, int is_loopback)
static int check_existing_control(struct hda_codec *codec, const char *type, const char *dir)
static int create_output_mixers(struct hda_codec *codec,
const char * const *names)
static int build_output_controls(struct hda_codec *codec)
static int build_input_controls(struct hda_codec *codec)
static int parse_loopback_path(struct hda_codec *codec, struct hda_gspec *spec,
struct hda_gnode *node, struct hda_gnode *dest_node,
const char *type)
static int build_loopback_controls(struct hda_codec *codec)
static int build_generic_controls(struct hda_codec *codec)
static struct hda_pcm_stream generic_pcm_playback = ;
static int generic_pcm2_prepare(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
unsigned int stream_tag,
unsigned int format,
struct snd_pcm_substream *substream)
static int generic_pcm2_cleanup(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static int build_generic_pcms(struct hda_codec *codec)
static int generic_check_power_status(struct hda_codec *codec, hda_nid_t nid)
static struct hda_codec_ops generic_patch_ops = ;
int snd_hda_parse_generic_codec(struct hda_codec *codec)
EXPORT_SYMBOL(snd_hda_parse_generic_codec);
