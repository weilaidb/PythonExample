#define AVCODEC_CAVS_H
#define SLICE_MAX_START_CODE    0x000001af
#define EXT_START_CODE          0x000001b5
#define USER_START_CODE         0x000001b2
#define CAVS_START_CODE         0x000001b0
#define PIC_I_START_CODE        0x000001b3
#define PIC_PB_START_CODE       0x000001b6
#define A_AVAIL                          1
#define B_AVAIL                          2
#define C_AVAIL                          4
#define D_AVAIL                          8
#define NOT_AVAIL                       -1
#define REF_INTRA                       -2
#define REF_DIR                         -3
#define ESCAPE_CODE                     59
#define FWD0                          0x01
#define FWD1                          0x02
#define BWD0                          0x04
#define BWD1                          0x08
#define SYM0                          0x10
#define SYM1                          0x20
#define SPLITH                        0x40
#define SPLITV                        0x80
#define MV_BWD_OFFS                     12
#define MV_STRIDE                        4
enum cavs_mb ;
enum cavs_sub_mb ;
enum cavs_intra_luma ;
enum cavs_intra_chroma ;
enum cavs_mv_pred ;
enum cavs_block ;
enum cavs_mv_loc ;
DECLARE_ALIGNED(8, typedef, struct)  cavs_vector;
struct dec_2dvlc ;
typedef struct AVSFrame  AVSFrame;
typedef struct AVSContext  AVSContext;
extern const uint8_t     ff_cavs_chroma_qp[64];
extern const uint8_t     ff_cavs_partition_flags[30];
extern const cavs_vector ff_cavs_intra_mv;
extern const cavs_vector ff_cavs_dir_mv;
static inline void set_mvs(cavs_vector *mv, enum cavs_block size)
void ff_cavs_filter(AVSContext *h, enum cavs_mb mb_type);
void ff_cavs_load_intra_pred_luma(AVSContext *h, uint8_t *top, uint8_t **left,
int block);
void ff_cavs_load_intra_pred_chroma(AVSContext *h);
void ff_cavs_modify_mb_i(AVSContext *h, int *pred_mode_uv);
void ff_cavs_inter(AVSContext *h, enum cavs_mb mb_type);
void ff_cavs_mv(AVSContext *h, enum cavs_mv_loc nP, enum cavs_mv_loc nC,
enum cavs_mv_pred mode, enum cavs_block size, int ref);
void ff_cavs_init_mb(AVSContext *h);
int  ff_cavs_next_mb(AVSContext *h);
int ff_cavs_init_pic(AVSContext *h);
int ff_cavs_init_top_lines(AVSContext *h);
int ff_cavs_init(AVCodecContext *avctx);
int ff_cavs_end (AVCodecContext *avctx);
