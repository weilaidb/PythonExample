#define POSTPROC_POSTPROCESS_H
postproc_version;
*postproc_configuration;
*postproc_license;
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
pp_postprocess;
*pp_get_mode_by_name_and_quality;
pp_free_mode;
*pp_get_context;
pp_free_context;
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
