#define DLOG(x...) do  while (0)
#define MDP_DOWNSCALE_BLUR (MDP_DOWNSCALE_MAX + 1)
static int downscale_y_table = MDP_DOWNSCALE_MAX;
static int downscale_x_table = MDP_DOWNSCALE_MAX;
struct mdp_regs ;
static uint32_t pack_pattern[] = ;
static uint32_t src_img_cfg[] = ;
static uint32_t dst_img_cfg[] = ;
static uint32_t bytes_per_pixel[] = ;
static uint32_t dst_op_chroma[] = ;
static uint32_t src_op_chroma[] = ;
static uint32_t bg_op_chroma[] = ;
static void rotate_dst_addr_x(struct mdp_blit_req *req, struct mdp_regs *regs)
static void rotate_dst_addr_y(struct mdp_blit_req *req, struct mdp_regs *regs)
static void blit_rotate(struct mdp_blit_req *req,
struct mdp_regs *regs)
static void blit_convert(struct mdp_blit_req *req, struct mdp_regs *regs)
#define GET_BIT_RANGE(value, high, low) \
(((1 << (high - low + 1)) - 1) & (value >> low))
static uint32_t transp_convert(struct mdp_blit_req *req)
#undef GET_BIT_RANGE
static void blit_blend(struct mdp_blit_req *req, struct mdp_regs *regs)
#define ONE_HALF	(1LL << 32)
#define ONE		(1LL << 33)
#define TWO		(2LL << 33)
#define THREE		(3LL << 33)
#define FRAC_MASK (ONE - 1)
#define INT_MASK (~FRAC_MASK)
static int scale_params(uint32_t dim_in, uint32_t dim_out, uint32_t origin,
uint32_t *phase_init, uint32_t *phase_step)
static void load_scale_table(const struct mdp_info *mdp,
struct mdp_table_entry *table, int len)
enum ;
static void get_edge_info(uint32_t src, uint32_t src_coord, uint32_t dst,
uint32_t *interp1, uint32_t *interp2,
uint32_t *repeat1, uint32_t *repeat2)
static int get_edge_cond(struct mdp_blit_req *req, struct mdp_regs *regs)
static int blit_scale(const struct mdp_info *mdp, struct mdp_blit_req *req,
struct mdp_regs *regs)
static void blit_blur(const struct mdp_info *mdp, struct mdp_blit_req *req,
struct mdp_regs *regs)
#define IMG_LEN(rect_h, w, rect_w, bpp) (((rect_h) * w) * bpp)
#define Y_TO_CRCB_RATIO(format) \
((format == MDP_Y_CBCR_H2V2 || format == MDP_Y_CRCB_H2V2) ?  2 :\
(format == MDP_Y_CBCR_H2V1 || format == MDP_Y_CRCB_H2V1) ?  1 : 1)
static void get_len(struct mdp_img *img, struct mdp_rect *rect, uint32_t bpp,
uint32_t *len0, uint32_t *len1)
static int valid_src_dst(unsigned long src_start, unsigned long src_len,
unsigned long dst_start, unsigned long dst_len,
struct mdp_blit_req *req, struct mdp_regs *regs)
static void flush_imgs(struct mdp_blit_req *req, struct mdp_regs *regs,
struct file *src_file, struct file *dst_file)
static void get_chroma_addr(struct mdp_img *img, struct mdp_rect *rect,
uint32_t base, uint32_t bpp, uint32_t cfg,
uint32_t *addr, uint32_t *ystride)
static int send_blit(const struct mdp_info *mdp, struct mdp_blit_req *req,
struct mdp_regs *regs, struct file *src_file,
struct file *dst_file)
int mdp_ppp_blit(const struct mdp_info *mdp, struct mdp_blit_req *req,
struct file *src_file, unsigned long src_start, unsigned long src_len,
struct file *dst_file, unsigned long dst_start, unsigned long dst_len)
