static int evergreen_cs_packet_next_reloc(struct radeon_cs_parser *p,
struct radeon_cs_reloc **cs_reloc);
struct evergreen_cs_track ;
static void evergreen_cs_track_init(struct evergreen_cs_track *track)
static inline int evergreen_cs_track_validate_cb(struct radeon_cs_parser *p, int i)
static int evergreen_cs_track_check(struct radeon_cs_parser *p)
int evergreen_cs_packet_parse(struct radeon_cs_parser *p,
struct radeon_cs_packet *pkt,
unsigned idx)
static int evergreen_cs_packet_next_reloc(struct radeon_cs_parser *p,
struct radeon_cs_reloc **cs_reloc)
static inline int evergreen_cs_packet_next_is_pkt3_nop(struct radeon_cs_parser *p)
static int evergreen_cs_packet_parse_vline(struct radeon_cs_parser *p)
static int evergreen_packet0_check(struct radeon_cs_parser *p,
struct radeon_cs_packet *pkt,
unsigned idx, unsigned reg)
static int evergreen_cs_parse_packet0(struct radeon_cs_parser *p,
struct radeon_cs_packet *pkt)
static inline int evergreen_cs_check_reg(struct radeon_cs_parser *p, u32 reg, u32 idx)
static inline int evergreen_check_texture_resource(struct radeon_cs_parser *p,  u32 idx,
struct radeon_bo *texture,
struct radeon_bo *mipmap)
static int evergreen_packet3_check(struct radeon_cs_parser *p,
struct radeon_cs_packet *pkt)
int evergreen_cs_parse(struct radeon_cs_parser *p)
