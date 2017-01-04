#define AVCODEC_X86_INLINE_ASM_H
#define MOVQ_WONE(regd) \
__asm__ volatile ( \
"pcmpeqd %%" #regd ", %%" #regd " \n\t" \
"psrlw $15, %%" #regd ::)
#define JUMPALIGN()     __asm__ volatile (".p2align 3"::)
#define MOVQ_ZERO(regd) __asm__ volatile ("pxor %%"#regd", %%"#regd ::)
#define MOVQ_BFE(regd)                                  \
__asm__ volatile (                                  \
"pcmpeqd %%"#regd", %%"#regd"   \n\t"           \
"paddb   %%"#regd", %%"#regd"   \n\t" ::)
#define MOVQ_WTWO(regd) __asm__ volatile ("movq %0, %%"#regd" \n\t" :: "m"(ff_pw_2))
#define MOVQ_WTWO(regd)                                 \
__asm__ volatile (                                  \
"pcmpeqd %%"#regd", %%"#regd"   \n\t"           \
"psrlw         $15, %%"#regd"   \n\t"           \
"psllw          $1, %%"#regd"   \n\t"::)
#define PAVGB_MMX_NO_RND(rega, regb, regr, regfe)                \
"movq   "#rega", "#regr"            \n\t"                    \
"pand   "#regb", "#regr"            \n\t"                    \
"pxor   "#rega", "#regb"            \n\t"                    \
"pand  "#regfe", "#regb"            \n\t"                    \
"psrlq       $1, "#regb"            \n\t"                    \
"paddb  "#regb", "#regr"            \n\t"
#define PAVGB_MMX(rega, regb, regr, regfe)                       \
"movq   "#rega", "#regr"            \n\t"                    \
"por    "#regb", "#regr"            \n\t"                    \
"pxor   "#rega", "#regb"            \n\t"                    \
"pand  "#regfe", "#regb"            \n\t"                    \
"psrlq       $1, "#regb"            \n\t"                    \
"psubb  "#regb", "#regr"            \n\t"
#define PAVGBP_MMX_NO_RND(rega, regb, regr,  regc, regd, regp)   \
"movq  "#rega", "#regr"             \n\t"                    \
"movq  "#regc", "#regp"             \n\t"                    \
"pand  "#regb", "#regr"             \n\t"                    \
"pand  "#regd", "#regp"             \n\t"                    \
"pxor  "#rega", "#regb"             \n\t"                    \
"pxor  "#regc", "#regd"             \n\t"                    \
"pand    %%mm6, "#regb"             \n\t"                    \
"pand    %%mm6, "#regd"             \n\t"                    \
"psrlq      $1, "#regb"             \n\t"                    \
"psrlq      $1, "#regd"             \n\t"                    \
"paddb "#regb", "#regr"             \n\t"                    \
"paddb "#regd", "#regp"             \n\t"
#define PAVGBP_MMX(rega, regb, regr, regc, regd, regp)           \
"movq  "#rega", "#regr"             \n\t"                    \
"movq  "#regc", "#regp"             \n\t"                    \
"por   "#regb", "#regr"             \n\t"                    \
"por   "#regd", "#regp"             \n\t"                    \
"pxor  "#rega", "#regb"             \n\t"                    \
"pxor  "#regc", "#regd"             \n\t"                    \
"pand    %%mm6, "#regb"             \n\t"                    \
"pand    %%mm6, "#regd"             \n\t"                    \
"psrlq      $1, "#regd"             \n\t"                    \
"psrlq      $1, "#regb"             \n\t"                    \
"psubb "#regb", "#regr"             \n\t"                    \
"psubb "#regd", "#regp"             \n\t"
