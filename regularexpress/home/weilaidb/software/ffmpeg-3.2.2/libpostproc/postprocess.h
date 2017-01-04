#define POSTPROC_POSTPROCESS_H
unsigned postproc_version(void);
const char *postproc_configuration(void);
const char *postproc_license(void);
#define PP_QUALITY_MAX 6
#if FF_API_QP_TYPE
#define QP_STORE_T int8_t
typedef void pp_context;
typedef void pp_mode;
#if LIBPOSTPROC_VERSION_INT < (52<<16)
typedef pp_context pp_context_t;
typedef pp_mode pp_mode_t;
extern const char *const pp_help;
extern const char pp_help[];
void  pp_postprocess(const uint8_t * src[3], const int srcStride[3],
uint8_t * dst[3], const int dstStride[3],
int horizontalSize, int verticalSize,
const int8_t *QP_store,  int QP_stride,
pp_mode *mode, pp_context *ppContext, int pict_type);
pp_mode *pp_get_mode_by_name_and_quality(const char *name, int quality);
void pp_free_mode(pp_mode *mode);
pp_context *pp_get_context(int width, int height, int flags);
void pp_free_context(pp_context *ppContext);
#define PP_CPU_CAPS_MMX   0x80000000
#define PP_CPU_CAPS_MMX2  0x20000000
#define PP_CPU_CAPS_3DNOW 0x40000000
#define PP_CPU_CAPS_ALTIVEC 0x10000000
#define PP_CPU_CAPS_AUTO  0x00080000
#define PP_FORMAT         0x00000008
#define PP_FORMAT_420    (0x00000011|PP_FORMAT)
#define PP_FORMAT_422    (0x00000001|PP_FORMAT)
#define PP_FORMAT_411    (0x00000002|PP_FORMAT)
#define PP_FORMAT_444    (0x00000000|PP_FORMAT)
#define PP_FORMAT_440    (0x00000010|PP_FORMAT)
#define PP_PICT_TYPE_QP2  0x00000010
