#define fptpos 31
#define fpr1pos 10
#define extru(r,pos,len) (((r) >> (31-(pos))) & (( 1 << (len)) - 1))
#define FPUDEBUG 0
struct exc_reg ;
#define FP0CE_UID(i) (((i) >> 6) & 3)
#define FP0CE_CLASS(i) (((i) >> 9) & 3)
#define FP0CE_SUBOP(i) (((i) >> 13) & 7)
#define FP0CE_SUBOP1(i) (((i) >> 15) & 7)
#define FP0C_FORMAT(i) (((i) >> 11) & 3)
#define FP0E_FORMAT(i) (((i) >> 11) & 1)
#define FPPM_SUBOP(i) (((i) >> 9) & 0x1f)
#define FP2E_SUBOP(i)  (((i) >> 5) & 1)
#define FP2E_FORMAT(i) (((i) >> 11) & 1)
#define FPx6_FORMAT(i) ((i) & 0x1f)
#define FPSW_FLAGS(w) ((w) >> 27)
#define FPSW_ENABLE(w) ((w) & 0x1f)
#define FPSW_V (1<<4)
#define FPSW_Z (1<<3)
#define FPSW_O (1<<2)
#define FPSW_U (1<<1)
#define FPSW_I (1<<0)
int
handle_fpe(struct pt_regs *regs)
