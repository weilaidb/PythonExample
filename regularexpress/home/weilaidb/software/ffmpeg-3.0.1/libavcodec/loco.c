enum LOCO_MODE ;
typedef struct LOCOContext  LOCOContext;
typedef struct RICEContext  RICEContext;
static int loco_get_rice_param(RICEContext *r)
static inline void loco_update_rice_param(RICEContext *r, int val)
static inline int loco_get_rice(RICEContext *r)
static inline int loco_predict(uint8_t* data, int stride, int step)
static int loco_decode_plane(LOCOContext *l, uint8_t *data, int width, int height,
int stride, const uint8_t *buf, int buf_size, int step)
static void rotate_faulty_loco(uint8_t *data, int width, int height, int stride, int step)
static int decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int decode_init(AVCodecContext *avctx)
AVCodec ff_loco_decoder = ;
