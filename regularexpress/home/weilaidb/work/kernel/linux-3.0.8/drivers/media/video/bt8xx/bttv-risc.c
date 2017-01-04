#define VCR_HACK_LINES 4
int
bttv_risc_packed(struct bttv *btv, struct btcx_riscmem *risc,
struct scatterlist *sglist,
unsigned int offset, unsigned int bpl,
unsigned int padding, unsigned int skip_lines,
unsigned int store_lines)
static int
bttv_risc_planar(struct bttv *btv, struct btcx_riscmem *risc,
struct scatterlist *sglist,
unsigned int yoffset,  unsigned int ybpl,
unsigned int ypadding, unsigned int ylines,
unsigned int uoffset,  unsigned int voffset,
unsigned int hshift,   unsigned int vshift,
unsigned int cpadding)
static int
bttv_risc_overlay(struct bttv *btv, struct btcx_riscmem *risc,
const struct bttv_format *fmt, struct bttv_overlay *ov,
int skip_even, int skip_odd)
static void
bttv_calc_geo_old(struct bttv *btv, struct bttv_geometry *geo,
int width, int height, int interleaved,
const struct bttv_tvnorm *tvnorm)
static void
bttv_calc_geo		(struct bttv *                  btv,
struct bttv_geometry *         geo,
unsigned int                   width,
unsigned int                   height,
int                            both_fields,
const struct bttv_tvnorm *     tvnorm,
const struct v4l2_rect *       crop)
static void
bttv_apply_geo(struct bttv *btv, struct bttv_geometry *geo, int odd)
void
bttv_set_dma(struct bttv *btv, int override)
int
bttv_risc_init_main(struct bttv *btv)
int
bttv_risc_hook(struct bttv *btv, int slot, struct btcx_riscmem *risc,
int irqflags)
void
bttv_dma_free(struct videobuf_queue *q,struct bttv *btv, struct bttv_buffer *buf)
int
bttv_buffer_activate_vbi(struct bttv *btv,
struct bttv_buffer *vbi)
int
bttv_buffer_activate_video(struct bttv *btv,
struct bttv_buffer_set *set)
int
bttv_buffer_risc(struct bttv *btv, struct bttv_buffer *buf)
int
bttv_overlay_risc(struct bttv *btv,
struct bttv_overlay *ov,
const struct bttv_format *fmt,
struct bttv_buffer *buf)
