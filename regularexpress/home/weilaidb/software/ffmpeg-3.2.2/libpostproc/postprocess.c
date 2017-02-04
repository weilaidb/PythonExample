const char postproc_ffversion[] =  FFMPEG_VERSION;
postproc_version
*postproc_configuration
*postproc_license
#if HAVE_ALTIVEC_H
#define GET_MODE_BUFFER_SIZE 500
#define OPTIONS_ARRAY_SIZE 10
#define BLOCK_SIZE 8
#define TEMP_STRIDE 8
DECLARE_ASM_CONST= 0x0005000500050005LL;
DECLARE_ASM_CONST(8, uint64_t, w04)= 0x0004000400040004LL;
DECLARE_ASM_CONST(8, uint64_t, w20)= 0x0020002000200020LL;
DECLARE_ASM_CONST(8, uint64_t, b00)= 0x0000000000000000LL;
DECLARE_ASM_CONST(8, uint64_t, b01)= 0x0101010101010101LL;
DECLARE_ASM_CONST(8, uint64_t, b02)= 0x0202020202020202LL;
DECLARE_ASM_CONST(8, uint64_t, b08)= 0x0808080808080808LL;
DECLARE_ASM_CONST(8, uint64_t, b80)= 0x8080808080808080LL;
DECLARE_ASM_CONST= 20;
static const struct PPFilter filters[]=
;
static const char * const replaceTable[]=
;
isHorizDC_C
isVertDC_C
isHorizMinMaxOk_C
isVertMinMaxOk_C
horizClassify_C
vertClassify_C
doHorizDefFilter_C
doHorizLowPass_C
horizX1Filter
do_a_deblock_C
#define TEMPLATE_PP_C 1
#if HAVE_ALTIVEC
#   define TEMPLATE_PP_ALTIVEC 1
#   include
#   include
#if ARCH_X86 && HAVE_INLINE_ASM
#    if CONFIG_RUNTIME_CPUDETECT
#        define TEMPLATE_PP_MMX 1
#        include
#        define TEMPLATE_PP_MMXEXT 1
#        include
#        define TEMPLATE_PP_3DNOW 1
#        include
#        define TEMPLATE_PP_SSE2 1
#        include
#    else
#        if HAVE_SSE2_INLINE
#            define TEMPLATE_PP_SSE2 1
#            include
#        elif HAVE_MMXEXT_INLINE
#            define TEMPLATE_PP_MMXEXT 1
#            include
#        elif HAVE_AMD3DNOW_INLINE
#            define TEMPLATE_PP_3DNOW 1
#            include
#        elif HAVE_MMX_INLINE
#            define TEMPLATE_PP_MMX 1
#            include
#        endif
#    endif
typedef void (*pp_fn)(const uint8_t src[], int srcStride, uint8_t dst[], int dstStride, int width, int height,
const QP_STORE_T QPs[], int QPStride, int isColor, PPContext *c2);
postProcess
const char pp_help[] =
;
*pp_get_mode_by_name_and_quality
pp_free_mode
reallocAlign
reallocBuffers
context_to_name
static const AVClass av_codec_context_class = ;
*pp_get_context
pp_free_context
pp_postprocess
