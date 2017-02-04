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
ff_ffv1_common_init;
ff_ffv1_init_slice_state;
ff_ffv1_init_slices_state;
ff_ffv1_init_slice_contexts;
ff_ffv1_allocate_initial_states;
ff_ffv1_clear_slice_state;
ff_ffv1_close;
fold
update_vlc_state
#define TYPE int16_t
RENAME name
#undef TYPE
#undef RENAME
#define TYPE int32_t
RENAME name ## 32
#undef TYPE
#undef RENAME
