void r100_cs_dump_packet(struct radeon_cs_parser *p,
struct radeon_cs_packet *pkt);
int radeon_cs_parser_relocs(struct radeon_cs_parser *p)
int radeon_cs_parser_init(struct radeon_cs_parser *p, void *data)
static void radeon_cs_parser_fini(struct radeon_cs_parser *parser, int error)
int radeon_cs_ioctl(struct drm_device *dev, void *data, struct drm_file *filp)
int radeon_cs_finish_pages(struct radeon_cs_parser *p)
int radeon_cs_update_pages(struct radeon_cs_parser *p, int pg_idx)
