#define X264_CLI_H
#define UPDATE_INTERVAL 250000
typedef void *hnd_t;
static inline uint64_t gcd( uint64_t a, uint64_t b )
static inline uint64_t lcm( uint64_t a, uint64_t b )
static inline char *get_filename_extension( char *filename )
void x264_cli_log( const char *name, int i_level, const char *fmt, ... );
void x264_cli_printf( int i_level, const char *fmt, ... );
void x264_cli_set_console_title( const char *title );
int x264_ansi_filename( const char *filename, char *ansi_filename, int size, int create_file );
#define x264_cli_set_console_title( title )
#define RETURN_IF_ERR( cond, name, ret, ... )\
do\
while( 0 )
#define FAIL_IF_ERR( cond, name, ... ) RETURN_IF_ERR( cond, name, -1, __VA_ARGS__ )
typedef enum
range_enum;
