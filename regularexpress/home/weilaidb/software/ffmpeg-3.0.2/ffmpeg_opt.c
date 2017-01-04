#define DEFAULT_PASS_LOGFILENAME_PREFIX "ffmpeg2pass"
#define MATCH_PER_STREAM_OPT(name, type, outvar, fmtctx, st)\
#define MATCH_PER_TYPE_OPT(name, type, outvar, fmtctx, mediatype)\
const HWAccel hwaccels[] = ;
char *vstats_filename;
char *sdp_filename;
float audio_drift_threshold = 0.1;
float dts_delta_threshold   = 10;
float dts_error_threshold   = 3600*30;
int audio_volume      = 256;
int audio_sync_method = 0;
int video_sync_method = VSYNC_AUTO;
float frame_drop_threshold = 0;
int do_deinterlace    = 0;
int do_benchmark      = 0;
int do_benchmark_all  = 0;
int do_hex_dump       = 0;
int do_pkt_dump       = 0;
int copy_ts           = 0;
int start_at_zero     = 0;
int copy_tb           = -1;
int debug_ts          = 0;
int exit_on_error     = 0;
int abort_on_flags    = 0;
int print_stats       = -1;
int qp_hist           = 0;
int stdin_interaction = 1;
int frame_bits_per_raw_sample = 0;
float max_error_rate  = 2.0/3;
static int intra_only         = 0;
static int file_overwrite     = 0;
static int no_file_overwrite  = 0;
static int do_psnr            = 0;
static int input_sync;
static int override_ffserver  = 0;
static int input_stream_potentially_available = 0;
static int ignore_unknown_streams = 0;
static int copy_unknown_streams = 0;
static void uninit_options(OptionsContext *o)
static void init_options(OptionsContext *o)
static int show_hwaccels(void *optctx, const char *opt, const char *arg)
static AVDictionary *strip_specifiers(AVDictionary *dict)
static int opt_abort_on(void *optctx, const char *opt, const char *arg)
static int opt_sameq(void *optctx, const char *opt, const char *arg)
static int opt_video_channel(void *optctx, const char *opt, const char *arg)
static int opt_video_standard(void *optctx, const char *opt, const char *arg)
static int opt_audio_codec(void *optctx, const char *opt, const char *arg)
static int opt_video_codec(void *optctx, const char *opt, const char *arg)
static int opt_subtitle_codec(void *optctx, const char *opt, const char *arg)
static int opt_data_codec(void *optctx, const char *opt, const char *arg)
static int opt_map(void *optctx, const char *opt, const char *arg)
static int opt_attach(void *optctx, const char *opt, const char *arg)
static int opt_map_channel(void *optctx, const char *opt, const char *arg)
static int opt_sdp_file(void *optctx, const char *opt, const char *arg)
static void parse_meta_type(char *arg, char *type, int *index, const char **stream_spec)
static int copy_metadata(char *outspec, char *inspec, AVFormatContext *oc, AVFormatContext *ic, OptionsContext *o)
static int opt_recording_timestamp(void *optctx, const char *opt, const char *arg)
static AVCodec *find_codec_or_die(const char *name, enum AVMediaType type, int encoder)
static AVCodec *choose_decoder(OptionsContext *o, AVFormatContext *s, AVStream *st)
static void add_input_streams(OptionsContext *o, AVFormatContext *ic)
static void assert_file_overwrite(const char *filename)
static void dump_attachment(AVStream *st, const char *filename)
static int open_input_file(OptionsContext *o, const char *filename)
static uint8_t *get_line(AVIOContext *s)
static int get_preset_file_2(const char *preset_name, const char *codec_name, AVIOContext **s)
static void choose_encoder(OptionsContext *o, AVFormatContext *s, OutputStream *ost)
static OutputStream *new_output_stream(OptionsContext *o, AVFormatContext *oc, enum AVMediaType type, int source_index)
static void parse_matrix_coeffs(uint16_t *dest, const char *str)
static uint8_t *read_file(const char *filename)
static char *get_ost_filters(OptionsContext *o, AVFormatContext *oc,
OutputStream *ost)
static void check_streamcopy_filters(OptionsContext *o, AVFormatContext *oc,
const OutputStream *ost, enum AVMediaType type)
static OutputStream *new_video_stream(OptionsContext *o, AVFormatContext *oc, int source_index)
static OutputStream *new_audio_stream(OptionsContext *o, AVFormatContext *oc, int source_index)
static OutputStream *new_data_stream(OptionsContext *o, AVFormatContext *oc, int source_index)
static OutputStream *new_unknown_stream(OptionsContext *o, AVFormatContext *oc, int source_index)
static OutputStream *new_attachment_stream(OptionsContext *o, AVFormatContext *oc, int source_index)
static OutputStream *new_subtitle_stream(OptionsContext *o, AVFormatContext *oc, int source_index)
static int opt_streamid(void *optctx, const char *opt, const char *arg)
static int copy_chapters(InputFile *ifile, OutputFile *ofile, int copy_metadata)
static int read_ffserver_streams(OptionsContext *o, AVFormatContext *s, const char *filename)
static void init_output_filter(OutputFilter *ofilter, OptionsContext *o,
AVFormatContext *oc)
static int init_complex_filters(void)
static int configure_complex_filters(void)
static int open_output_file(OptionsContext *o, const char *filename)
static int opt_target(void *optctx, const char *opt, const char *arg)
static int opt_vstats_file(void *optctx, const char *opt, const char *arg)
static int opt_vstats(void *optctx, const char *opt, const char *arg)
static int opt_video_frames(void *optctx, const char *opt, const char *arg)
static int opt_audio_frames(void *optctx, const char *opt, const char *arg)
static int opt_data_frames(void *optctx, const char *opt, const char *arg)
static int opt_default_new(OptionsContext *o, const char *opt, const char *arg)
static int opt_preset(void *optctx, const char *opt, const char *arg)
static int opt_old2new(void *optctx, const char *opt, const char *arg)
static int opt_bitrate(void *optctx, const char *opt, const char *arg)
static int opt_qscale(void *optctx, const char *opt, const char *arg)
static int opt_profile(void *optctx, const char *opt, const char *arg)
static int opt_video_filters(void *optctx, const char *opt, const char *arg)
static int opt_audio_filters(void *optctx, const char *opt, const char *arg)
static int opt_vsync(void *optctx, const char *opt, const char *arg)
static int opt_timecode(void *optctx, const char *opt, const char *arg)
static int opt_channel_layout(void *optctx, const char *opt, const char *arg)
static int opt_audio_qscale(void *optctx, const char *opt, const char *arg)
static int opt_filter_complex(void *optctx, const char *opt, const char *arg)
static int opt_filter_complex_script(void *optctx, const char *opt, const char *arg)
void show_help_default(const char *opt, const char *arg)
void show_usage(void)
enum OptGroup ;
static const OptionGroupDef groups[] = ;
static int open_files(OptionGroupList *l, const char *inout,
int (*open_file)(OptionsContext*, const char*))
int ffmpeg_parse_options(int argc, char **argv)
static int opt_progress(void *optctx, const char *opt, const char *arg)
#define OFFSET(x) offsetof(OptionsContext, x)
const OptionDef options[] = ;
