#define CLSIZE 1048576
#define CHECK(x)\
do  while( 0 )
struct mk_context
;
typedef struct mk_context mk_context;
struct mk_writer
;
static mk_context *mk_create_context( mk_writer *w, mk_context *parent, unsigned id )
static int mk_append_context_data( mk_context *c, const void *data, unsigned size )
static int mk_write_id( mk_context *c, unsigned id )
static int mk_write_size( mk_context *c, unsigned size )
static int mk_flush_context_id( mk_context *c )
static int mk_flush_context_data( mk_context *c )
static int mk_close_context( mk_context *c, unsigned *off )
static void mk_destroy_contexts( mk_writer *w )
static int mk_write_string( mk_context *c, unsigned id, const char *str )
static int mk_write_bin( mk_context *c, unsigned id, const void *data, unsigned size )
static int mk_write_uint( mk_context *c, unsigned id, int64_t ui )
static int mk_write_float_raw( mk_context *c, float f )
static int mk_write_float( mk_context *c, unsigned id, float f )
mk_writer *mk_create_writer( const char *filename )
int mk_write_header( mk_writer *w, const char *writing_app,
const char *codec_id,
const void *codec_private, unsigned codec_private_size,
int64_t default_frame_duration,
int64_t timescale,
unsigned width, unsigned height,
unsigned d_width, unsigned d_height, int display_size_units, int stereo_mode )
static int mk_close_cluster( mk_writer *w )
static int mk_flush_frame( mk_writer *w )
int mk_start_frame( mk_writer *w )
int mk_set_frame_flags( mk_writer *w, int64_t timestamp, int keyframe, int skippable )
int mk_add_frame_data( mk_writer *w, const void *data, unsigned size )
int mk_close( mk_writer *w, int64_t last_delta )
