#define AVCODEC_FFV1_H
#undef av_flatten
#define av_flatten
#define MAX_PLANES 4
#define CONTEXT_SIZE 32
#define MAX_QUANT_TABLES 8
#define MAX_CONTEXT_INPUTS 5
#define AC_GOLOMB_RICE          0
#define AC_RANGE_DEFAULT_TAB    1
#define AC_RANGE_CUSTOM_TAB     2
#define AC_RANGE_DEFAULT_TAB_FORCE -2
typedef struct VlcState  VlcState;
typedef struct PlaneContext  PlaneContext;
#define MAX_SLICES 256
typedef struct FFV1Context  FFV1Context;
int ff_ffv1_common_init(AVCodecContext *avctx);
int ff_ffv1_init_slice_state(FFV1Context *f, FFV1Context *fs);
int ff_ffv1_init_slices_state(FFV1Context *f);
int ff_ffv1_init_slice_contexts(FFV1Context *f);
int ff_ffv1_allocate_initial_states(FFV1Context *f);
void ff_ffv1_clear_slice_state(FFV1Context *f, FFV1Context *fs);
int ff_ffv1_close(AVCodecContext *avctx);
static av_always_inline int fold(int diff, int bits)
static inline int predict(int16_t *src, int16_t *last)
static inline int get_context(PlaneContext *p, int16_t *src,
int16_t *last, int16_t *last2)
static inline void update_vlc_state(VlcState *const state, const int v)
