#define AVCODEC_TWINVQ_H
enum TwinVQCodec ;
enum TwinVQFrameType ;
#define TWINVQ_PPC_SHAPE_CB_SIZE 64
#define TWINVQ_PPC_SHAPE_LEN_MAX 60
#define TWINVQ_SUB_AMP_MAX       4500.0
#define TWINVQ_MULAW_MU          100.0
#define TWINVQ_GAIN_BITS         8
#define TWINVQ_AMP_MAX           13000.0
#define TWINVQ_SUB_GAIN_BITS     5
#define TWINVQ_WINDOW_TYPE_BITS  4
#define TWINVQ_PGAIN_MU          200
#define TWINVQ_LSP_COEFS_MAX     20
#define TWINVQ_LSP_SPLIT_MAX     4
#define TWINVQ_CHANNELS_MAX      2
#define TWINVQ_SUBBLOCKS_MAX     16
#define TWINVQ_BARK_N_COEF_MAX   4
#define TWINVQ_MAX_FRAMES_PER_PACKET 2
struct TwinVQFrameMode ;
typedef struct TwinVQFrameData  TwinVQFrameData;
typedef struct TwinVQModeTab  TwinVQModeTab;
typedef struct TwinVQContext  TwinVQContext;
extern const enum TwinVQFrameType ff_twinvq_wtype_to_ftype_table[];
twinvq_memset_float
twinvq_mulawinv
ff_twinvq_decode_frame;
ff_twinvq_decode_close;
ff_twinvq_decode_init;
