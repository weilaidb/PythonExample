#define X264_INPUT_H
typedef struct
cli_input_opt_t;
typedef struct
video_info_t;
typedef struct
cli_image_t;
typedef struct
cli_pic_t;
typedef struct
cli_input_t;
extern const cli_input_t raw_input;
extern const cli_input_t y4m_input;
extern const cli_input_t avs_input;
extern const cli_input_t thread_input;
extern const cli_input_t lavf_input;
extern const cli_input_t ffms_input;
extern const cli_input_t timecode_input;
extern cli_input_t cli_input;
#define X264_CSP_CLI_MAX        X264_CSP_MAX
#define X264_CSP_OTHER          0x4000
typedef struct
x264_cli_csp_t;
extern const x264_cli_csp_t x264_cli_csps[];
int      x264_cli_csp_is_invalid( int csp );
int      x264_cli_csp_depth_factor( int csp );
int      x264_cli_pic_alloc( cli_pic_t *pic, int csp, int width, int height );
int      x264_cli_pic_alloc_aligned( cli_pic_t *pic, int csp, int width, int height );
int      x264_cli_pic_init_noalloc( cli_pic_t *pic, int csp, int width, int height );
void     x264_cli_pic_clean( cli_pic_t *pic );
uint64_t x264_cli_pic_plane_size( int csp, int width, int height, int plane );
uint64_t x264_cli_pic_size( int csp, int width, int height );
const x264_cli_csp_t *x264_cli_get_csp( int csp );
typedef struct
cli_mmap_t;
int x264_cli_mmap_init( cli_mmap_t *h, FILE *fh );
void *x264_cli_mmap( cli_mmap_t *h, int64_t offset, size_t size );
int x264_cli_munmap( cli_mmap_t *h, void *addr, size_t size );
void x264_cli_mmap_close( cli_mmap_t *h );
