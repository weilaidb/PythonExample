struct ca0110_spec ;
static int ca0110_playback_pcm_open(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static int ca0110_playback_pcm_prepare(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
unsigned int stream_tag,
unsigned int format,
struct snd_pcm_substream *substream)
static int ca0110_playback_pcm_cleanup(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static int ca0110_dig_playback_pcm_open(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static int ca0110_dig_playback_pcm_close(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static int ca0110_dig_playback_pcm_prepare(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
unsigned int stream_tag,
unsigned int format,
struct snd_pcm_substream *substream)
static int ca0110_capture_pcm_prepare(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
unsigned int stream_tag,
unsigned int format,
struct snd_pcm_substream *substream)
static int ca0110_capture_pcm_cleanup(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static const char * const dirstr[2] = ;
static int _add_switch(struct hda_codec *codec, hda_nid_t nid, const char *pfx,
int chan, int dir)
static int _add_volume(struct hda_codec *codec, hda_nid_t nid, const char *pfx,
int chan, int dir)
#define add_out_switch(codec, nid, pfx)	_add_switch(codec, nid, pfx, 3, 0)
#define add_out_volume(codec, nid, pfx)	_add_volume(codec, nid, pfx, 3, 0)
#define add_in_switch(codec, nid, pfx)	_add_switch(codec, nid, pfx, 3, 1)
#define add_in_volume(codec, nid, pfx)	_add_volume(codec, nid, pfx, 3, 1)
#define add_mono_switch(codec, nid, pfx, chan) \
_add_switch(codec, nid, pfx, chan, 0)
#define add_mono_volume(codec, nid, pfx, chan) \
_add_volume(codec, nid, pfx, chan, 0)
static int ca0110_build_controls(struct hda_codec *codec)
static const struct hda_pcm_stream ca0110_pcm_analog_playback = ;
static const struct hda_pcm_stream ca0110_pcm_analog_capture = ;
static const struct hda_pcm_stream ca0110_pcm_digital_playback = ;
static const struct hda_pcm_stream ca0110_pcm_digital_capture = ;
static int ca0110_build_pcms(struct hda_codec *codec)
static void init_output(struct hda_codec *codec, hda_nid_t pin, hda_nid_t dac)
static void init_input(struct hda_codec *codec, hda_nid_t pin, hda_nid_t adc)
static int ca0110_init(struct hda_codec *codec)
static void ca0110_free(struct hda_codec *codec)
static const struct hda_codec_ops ca0110_patch_ops = ;
static void parse_line_outs(struct hda_codec *codec)
static void parse_hp_out(struct hda_codec *codec)
static void parse_input(struct hda_codec *codec)
static void parse_digital(struct hda_codec *codec)
static int ca0110_parse_auto_config(struct hda_codec *codec)
static int patch_ca0110(struct hda_codec *codec)
static const struct hda_codec_preset snd_hda_preset_ca0110[] = ;
MODULE_ALIAS("snd-hda-codec-id:1102000a");
MODULE_ALIAS("snd-hda-codec-id:1102000b");
MODULE_ALIAS("snd-hda-codec-id:1102000d");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Creative CA0110-IBG HD-audio codec");
static struct hda_codec_preset_list ca0110_list = ;
static int __init patch_ca0110_init(void)
static void __exit patch_ca0110_exit(void)
module_init(patch_ca0110_init)
module_exit(patch_ca0110_exit)
