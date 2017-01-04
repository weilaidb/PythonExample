#define R100_TRACK_MAX_TEXTURE 3
#define R200_TRACK_MAX_TEXTURE 6
#define R300_TRACK_MAX_TEXTURE 16
#define R100_MAX_CB 1
#define R300_MAX_CB 4
struct r100_cs_track_cb ;
struct r100_cs_track_array ;
struct r100_cs_cube_info ;
#define R100_TRACK_COMP_NONE   0
#define R100_TRACK_COMP_DXT1   1
#define R100_TRACK_COMP_DXT35  2
struct r100_cs_track_texture ;
struct r100_cs_track ;
int r100_cs_track_check(struct radeon_device *rdev, struct r100_cs_track *track);
void r100_cs_track_clear(struct radeon_device *rdev, struct r100_cs_track *track);
int r100_cs_packet_next_reloc(struct radeon_cs_parser *p,
struct radeon_cs_reloc **cs_reloc);
void r100_cs_dump_packet(struct radeon_cs_parser *p,
struct radeon_cs_packet *pkt);
int r100_cs_packet_parse_vline(struct radeon_cs_parser *p);
int r200_packet0_check(struct radeon_cs_parser *p,
struct radeon_cs_packet *pkt,
unsigned idx, unsigned reg);
static inline int r100_reloc_pitch_offset(struct radeon_cs_parser *p,
struct radeon_cs_packet *pkt,
unsigned idx,
unsigned reg)
static inline int r100_packet3_load_vbpntr(struct radeon_cs_parser *p,
struct radeon_cs_packet *pkt,
int idx)
