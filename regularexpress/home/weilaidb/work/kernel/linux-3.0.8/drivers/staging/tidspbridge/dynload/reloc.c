#if TMS32060
static const char bsssymbol[] = ;
#if TMS32060
#if TMS32060
#define R_C60ALIGN     0x76
#define R_C60FPHEAD    0x77
#define R_C60NOCMP    0x100
rvalue dload_unpack(struct dload_state *dlthis, tgt_au_t * data, int fieldsz,
int offset, unsigned sgn)
static const unsigned char ovf_limit[] = ;
int dload_repack(struct dload_state *dlthis, rvalue val, tgt_au_t * data,
int fieldsz, int offset, unsigned sgn)
#if TMS32060
#define SCALE_BITS 4
#define SCALE_MASK 0x7
static const u8 c60_scale[SCALE_MASK + 1] = ;
void dload_relocate(struct dload_state *dlthis, tgt_au_t * data,
struct reloc_record_t *rp, bool *tramps_generated,
bool second_pass)
