#define X264_MATROSKA_EBML_H
#define DS_PIXELS        0
#define DS_CM            1
#define DS_INCHES        2
#define DS_ASPECT_RATIO  3
typedef struct mk_writer mk_writer;
mk_writer *mk_create_writer( const char *filename );
int mk_write_header( mk_writer *w, const char *writing_app,
const char *codec_id,
const void *codec_private, unsigned codec_private_size,
int64_t default_frame_duration,
int64_t timescale,
unsigned width, unsigned height,
unsigned d_width, unsigned d_height, int display_size_units, int stereo_mode );
int mk_start_frame( mk_writer *w );
int mk_add_frame_data( mk_writer *w, const void *data, unsigned size );
int mk_set_frame_flags( mk_writer *w, int64_t timestamp, int keyframe, int skippable );
int mk_close( mk_writer *w, int64_t last_delta );
