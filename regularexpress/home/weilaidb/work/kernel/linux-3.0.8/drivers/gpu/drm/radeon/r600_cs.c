static int r600_cs_packet_next_reloc_mm(struct radeon_cs_parser *p,
struct radeon_cs_reloc **cs_reloc);
static int r600_cs_packet_next_reloc_nomm(struct radeon_cs_parser *p,
struct radeon_cs_reloc **cs_reloc);
typedef int (*next_reloc_t)(struct radeon_cs_parser*, struct radeon_cs_reloc**);
static next_reloc_t r600_cs_packet_next_reloc = &r600_cs_packet_next_reloc_mm;
extern void r600_cs_legacy_get_tiling_conf(struct drm_device *dev, u32 *npipes, u32 *nbanks, u32 *group_size);
struct r600_cs_track ;
#define FMT_8_BIT(fmt, vc)   [fmt] =
#define FMT_16_BIT(fmt, vc)  [fmt] =
#define FMT_24_BIT(fmt)      [fmt] =
#define FMT_32_BIT(fmt, vc)  [fmt] =
#define FMT_48_BIT(fmt)      [fmt] =
#define FMT_64_BIT(fmt, vc)  [fmt] =
#define FMT_96_BIT(fmt)      [fmt] =
#define FMT_128_BIT(fmt, vc) [fmt] =
struct gpu_formats ;
static const struct gpu_formats color_formats_table[] = ;
static inline bool fmt_is_valid_color(u32 format)
static inline bool fmt_is_valid_texture(u32 format, enum radeon_family family)
static inline int fmt_get_blocksize(u32 format)
static inline int fmt_get_nblocksx(u32 format, u32 w)
static inline int fmt_get_nblocksy(u32 format, u32 h)
static inline int r600_bpe_from_format(u32 *bpe, u32 format)
struct array_mode_checker ;
static inline int r600_get_array_mode_alignment(struct array_mode_checker *values,
u32 *pitch_align,
u32 *height_align,
u32 *depth_align,
u64 *base_align)
static void r600_cs_track_init(struct r600_cs_track *track)
static inline int r600_cs_track_validate_cb(struct radeon_cs_parser *p, int i)
static int r600_cs_track_check(struct radeon_cs_parser *p)
int r600_cs_packet_parse(struct radeon_cs_parser *p,
struct radeon_cs_packet *pkt,
unsigned idx)
static int r600_cs_packet_next_reloc_mm(struct radeon_cs_parser *p,
struct radeon_cs_reloc **cs_reloc)
static int r600_cs_packet_next_reloc_nomm(struct radeon_cs_parser *p,
struct radeon_cs_reloc **cs_reloc)
static inline int r600_cs_packet_next_is_pkt3_nop(struct radeon_cs_parser *p)
static int r600_cs_packet_parse_vline(struct radeon_cs_parser *p)
static int r600_packet0_check(struct radeon_cs_parser *p,
struct radeon_cs_packet *pkt,
unsigned idx, unsigned reg)
static int r600_cs_parse_packet0(struct radeon_cs_parser *p,
struct radeon_cs_packet *pkt)
static inline int r600_cs_check_reg(struct radeon_cs_parser *p, u32 reg, u32 idx)
static inline unsigned mip_minify(unsigned size, unsigned level)
static void r600_texture_size(unsigned nfaces, unsigned blevel, unsigned llevel,
unsigned w0, unsigned h0, unsigned d0, unsigned format,
unsigned block_align, unsigned height_align, unsigned base_align,
unsigned *l0_size, unsigned *mipmap_size)
static inline int r600_check_texture_resource(struct radeon_cs_parser *p,  u32 idx,
struct radeon_bo *texture,
struct radeon_bo *mipmap,
u64 base_offset,
u64 mip_offset,
u32 tiling_flags)
static int r600_packet3_check(struct radeon_cs_parser *p,
struct radeon_cs_packet *pkt)
int r600_cs_parse(struct radeon_cs_parser *p)
static int r600_cs_parser_relocs_legacy(struct radeon_cs_parser *p)
static void r600_cs_parser_fini(struct radeon_cs_parser *parser, int error)
int r600_cs_legacy(struct drm_device *dev, void *data, struct drm_file *filp,
unsigned family, u32 *ib, int *l)
void r600_cs_legacy_init(void)
