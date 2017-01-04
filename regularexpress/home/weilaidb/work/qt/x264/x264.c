#define WINVER       0x0500
#define _WIN32_WINNT 0x0500
#define FAIL_IF_ERROR( cond, ... ) FAIL_IF_ERR( cond, "x264", __VA_ARGS__ )
#if HAVE_LAVF
#undef DECLARE_ALIGNED
#if HAVE_SWSCALE
#undef DECLARE_ALIGNED
#if HAVE_FFMS
#define CONSOLE_TITLE_SIZE 200
static wchar_t org_console_title[CONSOLE_TITLE_SIZE] = L"";
void x264_cli_set_console_title( const char *title )
static int utf16_to_ansi( const wchar_t *utf16, char *ansi, int size )
int x264_ansi_filename( const char *filename, char *ansi_filename, int size, int create_file )
static int get_argv_utf8( int *argc_ptr, char ***argv_ptr )
static volatile int b_ctrl_c = 0;
static void sigint_handler( int a )
typedef struct  cli_opt_t;
cli_input_t cli_input;
static cli_output_t cli_output;
static cli_vid_filter_t filter;
static const char * const demuxer_names[] =
;
static const char * const muxer_names[] =
;
static const char * const pulldown_names[] = ;
static const char * const log_level_names[] = ;
static const char * const output_csp_names[] =
;
static const char * const chroma_format_names[] =
;
static const char * const range_names[] = ;
typedef struct
cli_pulldown_t;
enum pulldown_type_e
;
#define TB  PIC_STRUCT_TOP_BOTTOM
#define BT  PIC_STRUCT_BOTTOM_TOP
#define TBT PIC_STRUCT_TOP_BOTTOM_TOP
#define BTB PIC_STRUCT_BOTTOM_TOP_BOTTOM
static const cli_pulldown_t pulldown_values[] =
;
#undef TB
#undef BT
#undef TBT
#undef BTB
static const float pulldown_frame_duration[10] = ;
static void help( x264_param_t *defaults, int longhelp );
static int  parse( int argc, char **argv, x264_param_t *param, cli_opt_t *opt );
static int  encode( x264_param_t *param, cli_opt_t *opt );
static int cli_log_level;
void x264_cli_log( const char *name, int i_level, const char *fmt, ... )
void x264_cli_printf( int i_level, const char *fmt, ... )
static void print_version_info( void )
int main( int argc, char **argv )
static char const *strtable_lookup( const char * const table[], int idx )
static char *stringify_names( char *buf, const char * const names[] )
static void print_csp_names( int longhelp )
static void help( x264_param_t *defaults, int longhelp )
typedef enum
OptionsOPT;
static char short_options[] = "8A:B:b:f:hI:i:m:o:p:q:r:t:Vvw";
static struct option long_options[] =
;
static int select_output( const char *muxer, char *filename, x264_param_t *param )
static int select_input( const char *demuxer, char *used_demuxer, char *filename,
hnd_t *p_handle, video_info_t *info, cli_input_opt_t *opt )
static int init_vid_filters( char *sequence, hnd_t *handle, video_info_t *info, x264_param_t *param, int output_csp )
static int parse_enum_name( const char *arg, const char * const *names, const char **dst )
static int parse_enum_value( const char *arg, const char * const *names, int *dst )
static int parse( int argc, char **argv, x264_param_t *param, cli_opt_t *opt )
static void parse_qpfile( cli_opt_t *opt, x264_picture_t *pic, int i_frame )
static int encode_frame( x264_t *h, hnd_t hout, x264_picture_t *pic, int64_t *last_dts )
static int64_t print_status( int64_t i_start, int64_t i_previous, int i_frame, int i_frame_total, int64_t i_file, x264_param_t *param, int64_t last_ts )
static void convert_cli_to_lib_pic( x264_picture_t *lib, cli_pic_t *cli )
#define FAIL_IF_ERROR2( cond, ... )\
do\
while( 0 )
static int encode( x264_param_t *param, cli_opt_t *opt )
