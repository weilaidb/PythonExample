const char postproc_ffversion[] = "FFmpeg version " FFMPEG_VERSION;
unsigned postproc_version(void)
const char *postproc_configuration(void)
const char *postproc_license(void)
#if HAVE_ALTIVEC_H
#define GET_MODE_BUFFER_SIZE 500
#define OPTIONS_ARRAY_SIZE 10
#define BLOCK_SIZE 8
#define TEMP_STRIDE 8
#if ARCH_X86 && HAVE_INLINE_ASM
DECLARE_ASM_CONST(8, uint64_t, w05)= 0x0005000500050005LL;
DECLARE_ASM_CONST(8, uint64_t, w04)= 0x0004000400040004LL;
DECLARE_ASM_CONST(8, uint64_t, w20)= 0x0020002000200020LL;
DECLARE_ASM_CONST(8, uint64_t, b00)= 0x0000000000000000LL;
DECLARE_ASM_CONST(8, uint64_t, b01)= 0x0101010101010101LL;
DECLARE_ASM_CONST(8, uint64_t, b02)= 0x0202020202020202LL;
DECLARE_ASM_CONST(8, uint64_t, b08)= 0x0808080808080808LL;
DECLARE_ASM_CONST(8, uint64_t, b80)= 0x8080808080808080LL;
DECLARE_ASM_CONST(8, int, deringThreshold)= 20;
static const struct PPFilter filters[]=
;
static const char * const replaceTable[]=
;
static inline int isHorizDC_C(const uint8_t src[], int stride, const PPContext *c)
static inline int isVertDC_C(const uint8_t src[], int stride, const PPContext *c)
static inline int isHorizMinMaxOk_C(const uint8_t src[], int stride, int QP)
static inline int isVertMinMaxOk_C(const uint8_t src[], int stride, int QP)
static inline int horizClassify_C(const uint8_t src[], int stride, const PPContext *c)
static inline int vertClassify_C(const uint8_t src[], int stride, const PPContext *c)
static inline void doHorizDefFilter_C(uint8_t dst[], int stride, const PPContext *c)
static inline void doHorizLowPass_C(uint8_t dst[], int stride, const PPContext *c)
static inline void horizX1Filter(uint8_t *src, int stride, int QP)
static av_always_inline void do_a_deblock_C(uint8_t *src, int step,
int stride, const PPContext *c, int mode)
#define TEMPLATE_PP_C 1
#if HAVE_ALTIVEC
#   define TEMPLATE_PP_ALTIVEC 1
#   include "postprocess_altivec_template.c"
#   include "postprocess_template.c"
#if ARCH_X86 && HAVE_INLINE_ASM
#    if CONFIG_RUNTIME_CPUDETECT
#        define TEMPLATE_PP_MMX 1
#        include "postprocess_template.c"
#        define TEMPLATE_PP_MMXEXT 1
#        include "postprocess_template.c"
#        define TEMPLATE_PP_3DNOW 1
#        include "postprocess_template.c"
#        define TEMPLATE_PP_SSE2 1
#        include "postprocess_template.c"
#    else
#        if HAVE_SSE2_INLINE
#            define TEMPLATE_PP_SSE2 1
#            include "postprocess_template.c"
#        elif HAVE_MMXEXT_INLINE
#            define TEMPLATE_PP_MMXEXT 1
#            include "postprocess_template.c"
#        elif HAVE_AMD3DNOW_INLINE
#            define TEMPLATE_PP_3DNOW 1
#            include "postprocess_template.c"
#        elif HAVE_MMX_INLINE
#            define TEMPLATE_PP_MMX 1
#            include "postprocess_template.c"
#        endif
#    endif
typedef void (*pp_fn)(const uint8_t src[], int srcStride, uint8_t dst[], int dstStride, int width, int height,
const QP_STORE_T QPs[], int QPStride, int isColor, PPContext *c2);
static inline void postProcess(const uint8_t src[], int srcStride, uint8_t dst[], int dstStride, int width, int height,
const QP_STORE_T QPs[], int QPStride, int isColor, pp_mode *vm, pp_context *vc)
const char pp_help[] =
"Available postprocessing filters:\n"
"Filters                        Options\n"
"short  long name       short   long option     Description\n"
"*      *               a       autoq           CPU power dependent enabler\n"
"                       c       chrom           chrominance filtering enabled\n"
"                       y       nochrom         chrominance filtering disabled\n"
"                       n       noluma          luma filtering disabled\n"
"hb     hdeblock        (2 threshold)           horizontal deblocking filter\n"
"       1. difference factor: default=32, higher -> more deblocking\n"
"       2. flatness threshold: default=39, lower -> more deblocking\n"
"                       the h & v deblocking filters share these\n"
"                       so you can't set different thresholds for h / v\n"
"vb     vdeblock        (2 threshold)           vertical deblocking filter\n"
"ha     hadeblock       (2 threshold)           horizontal deblocking filter\n"
"va     vadeblock       (2 threshold)           vertical deblocking filter\n"
"h1     x1hdeblock                              experimental h deblock filter 1\n"
"v1     x1vdeblock                              experimental v deblock filter 1\n"
"dr     dering                                  deringing filter\n"
"al     autolevels                              automatic brightness / contrast\n"
"                       f        fullyrange     stretch luminance to (0..255)\n"
"lb     linblenddeint                           linear blend deinterlacer\n"
"li     linipoldeint                            linear interpolating deinterlace\n"
"ci     cubicipoldeint                          cubic interpolating deinterlacer\n"
"md     mediandeint                             median deinterlacer\n"
"fd     ffmpegdeint                             ffmpeg deinterlacer\n"
"l5     lowpass5                                FIR lowpass deinterlacer\n"
"de     default                                 hb:a,vb:a,dr:a\n"
"fa     fast                                    h1:a,v1:a,dr:a\n"
"ac                                             ha:a:128:7,va:a,dr:a\n"
"tn     tmpnoise        (3 threshold)           temporal noise reducer\n"
"                     1. <= 2. <= 3.            larger -> stronger filtering\n"
"fq     forceQuant      <quantizer>             force quantizer\n"
"Usage:\n"
"<filterName>[:<option>[:<option>...]][[,|/][-]<filterName>[:<option>...]]...\n"
"long form example:\n"
"vdeblock:autoq/hdeblock:autoq/linblenddeint    default,-vdeblock\n"
"short form example:\n"
"vb:a/hb:a/lb                                   de,-vb\n"
"more examples:\n"
"tn:64:128:256\n"
"\n"
;
pp_mode *pp_get_mode_by_name_and_quality(const char *name, int quality)
void pp_free_mode(pp_mode *mode)
static void reallocAlign(void **p, int size)
static void reallocBuffers(PPContext *c, int width, int height, int stride, int qpStride)
static const char * context_to_name(void * ptr)
static const AVClass av_codec_context_class = ;
av_cold pp_context *pp_get_context(int width, int height, int cpuCaps)
av_cold void pp_free_context(void *vc)
void  pp_postprocess(const uint8_t * src[3], const int srcStride[3],
uint8_t * dst[3], const int dstStride[3],
int width, int height,
const QP_STORE_T *QP_store,  int QPStride,
pp_mode *vm,  void *vc, int pict_type)
