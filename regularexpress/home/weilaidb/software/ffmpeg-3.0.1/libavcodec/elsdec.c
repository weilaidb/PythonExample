#define ELS_JOTS_PER_BYTE   36
#define ELS_MAX             (1 << 24)
#define RUNG_SPACE          (64 * sizeof(ElsRungNode))
static const struct Ladder  Ladder[174] = ;
static const uint32_t els_exp_tab[ELS_JOTS_PER_BYTE * 4 + 1] = ;
void ff_els_decoder_init(ElsDecCtx *ctx, const uint8_t *in, size_t data_size)
void ff_els_decoder_uninit(ElsUnsignedRung *rung)
static int els_import_byte(ElsDecCtx *ctx)
int ff_els_decode_bit(ElsDecCtx *ctx, uint8_t *rung)
unsigned ff_els_decode_unsigned(ElsDecCtx *ctx, ElsUnsignedRung *ur)
