#define _FP_EMU_H
#define IS_INF(a) ((a)->exp == 0x7fff)
#define IS_ZERO(a) ((a)->mant.m64 == 0)
#define fp_set_sr(bit) ()
#define fp_set_quotient(quotient) ()
#define fp_normalize_ext(fpreg) ()
#define fp_copy_ext(dest, src) ()
#define fp_monadic_check(dest, src) ()
#define fp_dyadic_check(dest, src) ()
extern const struct fp_ext fp_QNaN;
extern const struct fp_ext fp_Inf;
#define fp_set_nan(dest) ()
#define fp_set_ovrflw(dest) ()
#define fp_conv_ext2long(src) ()
#define fp_conv_long2ext(dest, src) ()
.macro	fp_set_sr	bit
bset	#(\bit&7),(FPD_FPSR+3-(\bit/8),FPDATA)
.endm
.macro	fp_clr_sr	bit
bclr	#(\bit&7),(FPD_FPSR+3-(\bit/8),FPDATA)
.endm
.macro	fp_tst_sr	bit
btst	#(\bit&7),(FPD_FPSR+3-(\bit/8),FPDATA)
.endm
