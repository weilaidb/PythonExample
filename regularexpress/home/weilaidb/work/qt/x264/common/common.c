#if HAVE_MALLOC_H
#if HAVE_THP
const int x264_bit_depth = BIT_DEPTH;
const int x264_chroma_format = X264_CHROMA_FORMAT;
static void x264_log_default( void *, int, const char *, va_list );
void x264_param_default( x264_param_t *param )
static int x264_param_apply_preset( x264_param_t *param, const char *preset )
static int x264_param_apply_tune( x264_param_t *param, const char *tune )
int x264_param_default_preset( x264_param_t *param, const char *preset, const char *tune )
void x264_param_apply_fastfirstpass( x264_param_t *param )
static int profile_string_to_int( const char *str )
int x264_param_apply_profile( x264_param_t *param, const char *profile )
static int parse_enum( const char *arg, const char * const *names, int *dst )
static int parse_cqm( const char *str, uint8_t *cqm, int length )
static int x264_atobool( const char *str, int *b_error )
static int x264_atoi( const char *str, int *b_error )
static double x264_atof( const char *str, int *b_error )
#define atobool(str) ( name_was_bool = 1, x264_atobool( str, &b_error ) )
#undef atoi
#undef atof
#define atoi(str) x264_atoi( str, &b_error )
#define atof(str) x264_atof( str, &b_error )
int x264_param_parse( x264_param_t *p, const char *name, const char *value )
void x264_log( x264_t *h, int i_level, const char *psz_fmt, ... )
static void x264_log_default( void *p_unused, int i_level, const char *psz_fmt, va_list arg )
void x264_picture_init( x264_picture_t *pic )
int x264_picture_alloc( x264_picture_t *pic, int i_csp, int i_width, int i_height )
void x264_picture_clean( x264_picture_t *pic )
void *x264_malloc( int i_size )
void x264_free( void *p )
#define REDUCE_FRACTION( name, type )\
void name( type *n, type *d )\
REDUCE_FRACTION( x264_reduce_fraction  , uint32_t )
REDUCE_FRACTION( x264_reduce_fraction64, uint64_t )
char *x264_slurp_file( const char *filename )
char *x264_param2string( x264_param_t *p, int b_res )
