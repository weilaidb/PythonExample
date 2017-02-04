#define AVCODEC_RV34_H
#define MB_TYPE_SEPARATE_DC 0x01000000
IS_SEPARATE_DC   ((a) & MB_TYPE_SEPARATE_DC)
enum RV40BlockTypes;
typedef struct RV34VLCRV34VLC;
typedef struct SliceInfoSliceInfo;
typedef struct RV34DecContextRV34DecContext;
ff_rv34_get_start_offset;
ff_rv34_decode_init;
ff_rv34_decode_frame;
ff_rv34_decode_end;
ff_rv34_decode_init_thread_copy;
ff_rv34_decode_update_thread_context;
