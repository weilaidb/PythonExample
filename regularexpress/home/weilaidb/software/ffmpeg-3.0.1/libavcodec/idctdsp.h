#define AVCODEC_IDCTDSP_H
typedef struct ScanTable  ScanTable;
enum idct_permutation_type ;
void ff_init_scantable(uint8_t *permutation, ScanTable *st,
const uint8_t *src_scantable);
void ff_init_scantable_permutation(uint8_t *idct_permutation,
enum idct_permutation_type perm_type);
int ff_init_scantable_permutation_x86(uint8_t *idct_permutation,
enum idct_permutation_type perm_type);
typedef struct IDCTDSPContext  IDCTDSPContext;
extern void (*ff_put_pixels_clamped)(const int16_t *block, uint8_t *pixels, ptrdiff_t line_size);
extern void (*ff_add_pixels_clamped)(const int16_t *block, uint8_t *pixels, ptrdiff_t line_size);
void ff_idctdsp_init(IDCTDSPContext *c, AVCodecContext *avctx);
void ff_idctdsp_init_alpha(IDCTDSPContext *c, AVCodecContext *avctx,
unsigned high_bit_depth);
void ff_idctdsp_init_arm(IDCTDSPContext *c, AVCodecContext *avctx,
unsigned high_bit_depth);
void ff_idctdsp_init_ppc(IDCTDSPContext *c, AVCodecContext *avctx,
unsigned high_bit_depth);
void ff_idctdsp_init_x86(IDCTDSPContext *c, AVCodecContext *avctx,
unsigned high_bit_depth);
void ff_idctdsp_init_mips(IDCTDSPContext *c, AVCodecContext *avctx,
unsigned high_bit_depth);
