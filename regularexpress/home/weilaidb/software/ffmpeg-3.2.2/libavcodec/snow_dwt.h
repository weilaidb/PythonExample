#define AVCODEC_SNOW_DWT_H
typedef int DWTELEM;
typedef short IDWTELEM;
#define MAX_DECOMPOSITIONS 8
typedef struct DWTCompose  DWTCompose;
typedef struct slice_buffer_s  slice_buffer;
struct SnowDWTContext;
typedef struct SnowDWTContext  SnowDWTContext;
#define DWT_97 0
#define DWT_53 1
#define liftS lift
#define W_AM 3
#define W_AO 0
#define W_AS 1
#undef liftS
#define W_BM 1
#define W_BO 8
#define W_BS 4
#define W_CM 1
#define W_CO 0
#define W_CS 0
#define W_DM 3
#define W_DO 4
#define W_DS 3
slice_buffer_get_line                          \
((slice_buf)->line[line_num] ? (slice_buf)->line[line_num]              \
: ff_slice_buffer_load_line((slice_buf),   \
(line_num)))
ff_slice_buffer_init;
ff_slice_buffer_release;
ff_slice_buffer_flush;
ff_slice_buffer_destroy;
*ff_slice_buffer_load_line;
ff_snow_vertical_compose97i;
ff_snow_horizontal_compose97i;
ff_snow_inner_add_yblock;
ff_w53_32_c;
ff_w97_32_c;
ff_spatial_dwt;
ff_spatial_idwt_buffered_init;
ff_spatial_idwt_buffered_slice;
ff_spatial_idwt;
ff_dwt_init;
ff_dwt_init_x86;
