#define AVCODEC_IDCTDSP_H
typedef struct ScanTable  ScanTable;
enum idct_permutation_type ;
ff_init_scantable;
ff_init_scantable_permutation;
ff_init_scantable_permutation_x86;
typedef struct IDCTDSPContext  IDCTDSPContext;
extern void (*ff_put_pixels_clamped)(const int16_t *block, uint8_t *pixels, ptrdiff_t line_size);
extern void (*ff_add_pixels_clamped)(const int16_t *block, uint8_t *pixels, ptrdiff_t line_size);
ff_idctdsp_init;
ff_idctdsp_init_alpha;
ff_idctdsp_init_arm;
ff_idctdsp_init_ppc;
ff_idctdsp_init_x86;
ff_idctdsp_init_mips;
