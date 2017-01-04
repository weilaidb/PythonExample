extern void vaddfp(vector128 *dst, vector128 *a, vector128 *b);
extern void vsubfp(vector128 *dst, vector128 *a, vector128 *b);
extern void vmaddfp(vector128 *dst, vector128 *a, vector128 *b, vector128 *c);
extern void vnmsubfp(vector128 *dst, vector128 *a, vector128 *b, vector128 *c);
extern void vrefp(vector128 *dst, vector128 *src);
extern void vrsqrtefp(vector128 *dst, vector128 *src);
extern void vexptep(vector128 *dst, vector128 *src);
static unsigned int exp2s[8] = ;
static unsigned int eexp2(unsigned int s)
static unsigned int elog2(unsigned int s)
#define VSCR_SAT	1
static int ctsxs(unsigned int x, int scale, unsigned int *vscrp)
static unsigned int ctuxs(unsigned int x, int scale, unsigned int *vscrp)
static unsigned int rfiz(unsigned int x)
static unsigned int rfii(unsigned int x)
static unsigned int rfin(unsigned int x)
int emulate_altivec(struct pt_regs *regs)
