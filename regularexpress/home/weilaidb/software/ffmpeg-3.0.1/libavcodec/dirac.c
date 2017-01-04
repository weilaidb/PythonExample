#if CONFIG_DIRAC_PARSE
typedef struct dirac_source_params  dirac_source_params;
static const dirac_source_params dirac_source_parameters_defaults[] = ;
static const AVRational dirac_preset_aspect_ratios[] = ;
static const AVRational dirac_frame_rate[] = ;
static const struct  pixel_range_presets[] = ;
static const enum AVColorPrimaries dirac_primaries[] = ;
static const struct  dirac_color_presets[] = ;
static const enum AVPixelFormat dirac_pix_fmt[][3] = ;
static int parse_source_parameters(AVDiracSeqHeader *dsh, GetBitContext *gb,
void *log_ctx)
int av_dirac_parse_sequence_header(AVDiracSeqHeader **pdsh,
const uint8_t *buf, size_t buf_size,
void *log_ctx)
int av_dirac_parse_sequence_header(AVDiracSeqHeader **pdsh,
const uint8_t *buf, size_t buf_size,
void *log_ctx)
