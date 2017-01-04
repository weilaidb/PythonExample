static LIST_HEAD (rslist);
static DEFINE_MUTEX(rslistlock);
static struct rs_control *rs_init(int symsize, int gfpoly, int (*gffunc)(int),
int fcr, int prim, int nroots)
void free_rs(struct rs_control *rs)
static struct rs_control *init_rs_internal(int symsize, int gfpoly,
int (*gffunc)(int), int fcr,
int prim, int nroots)
struct rs_control *init_rs(int symsize, int gfpoly, int fcr, int prim,
int nroots)
struct rs_control *init_rs_non_canonical(int symsize, int (*gffunc)(int),
int fcr, int prim, int nroots)
int encode_rs8(struct rs_control *rs, uint8_t *data, int len, uint16_t *par,
uint16_t invmsk)
EXPORT_SYMBOL_GPL(encode_rs8);
int decode_rs8(struct rs_control *rs, uint8_t *data, uint16_t *par, int len,
uint16_t *s, int no_eras, int *eras_pos, uint16_t invmsk,
uint16_t *corr)
EXPORT_SYMBOL_GPL(decode_rs8);
int encode_rs16(struct rs_control *rs, uint16_t *data, int len, uint16_t *par,
uint16_t invmsk)
EXPORT_SYMBOL_GPL(encode_rs16);
int decode_rs16(struct rs_control *rs, uint16_t *data, uint16_t *par, int len,
uint16_t *s, int no_eras, int *eras_pos, uint16_t invmsk,
uint16_t *corr)
EXPORT_SYMBOL_GPL(decode_rs16);
EXPORT_SYMBOL_GPL(init_rs);
EXPORT_SYMBOL_GPL(init_rs_non_canonical);
EXPORT_SYMBOL_GPL(free_rs);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Reed Solomon encoder/decoder");
MODULE_AUTHOR("Phil Karn, Thomas Gleixner");
