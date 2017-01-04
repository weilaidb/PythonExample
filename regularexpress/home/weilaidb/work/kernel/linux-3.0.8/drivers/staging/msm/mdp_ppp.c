#define MDP_IS_IMGTYPE_BAD(x) (((x) >= MDP_IMGTYPE_LIMIT) && \
(((x) < MDP_IMGTYPE2_START) || \
((x) >= MDP_IMGTYPE_LIMIT2)))
static uint32_t bytes_per_pixel[] = ;
extern uint32 mdp_plv[];
extern struct semaphore mdp_ppp_mutex;
uint32_t mdp_get_bytes_per_pixel(uint32_t format)
static uint32 mdp_conv_matx_rgb2yuv(uint32 input_pixel,
uint16 *matrix_and_bias_vector,
uint32 *clamp_vector,
uint32 *look_up_table)
uint32 mdp_conv_matx_yuv2rgb(uint32 input_pixel,
uint16 *matrix_and_bias_vector,
uint32 *clamp_vector, uint32 *look_up_table)
static uint32 mdp_calc_tpval(MDPIMG *mdpImg)
static uint8 *mdp_get_chroma_addr(MDPIBUF *iBuf)
static void mdp_ppp_setbg(MDPIBUF *iBuf)
#define IS_PSEUDOPLNR(img) ((img == MDP_Y_CRCB_H2V2) | \
(img == MDP_Y_CBCR_H2V2) | \
(img == MDP_Y_CRCB_H2V1) | \
(img == MDP_Y_CBCR_H2V1))
#define IMG_LEN(rect_h, w, rect_w, bpp) (((rect_h) * w) * bpp)
#define Y_TO_CRCB_RATIO(format) \
((format == MDP_Y_CBCR_H2V2 || format == MDP_Y_CRCB_H2V2) ?  2 :\
(format == MDP_Y_CBCR_H2V1 || format == MDP_Y_CRCB_H2V1) ?  1 : 1)
static void get_len(struct mdp_img *img, struct mdp_rect *rect, uint32_t bpp,
uint32_t *len0, uint32_t *len1)
static void flush_imgs(struct mdp_blit_req *req, int src_bpp, int dst_bpp,
struct file *p_src_file, struct file *p_dst_file)
static void mdp_start_ppp(struct msm_fb_data_type *mfd, MDPIBUF *iBuf,
struct mdp_blit_req *req, struct file *p_src_file, struct file *p_dst_file)
static int mdp_ppp_verify_req(struct mdp_blit_req *req)
int get_gem_img(struct mdp_img *img, unsigned long *start, unsigned long *len)
int get_img(struct mdp_img *img, struct fb_info *info, unsigned long *start,
unsigned long *len, struct file **pp_file)
int mdp_ppp_blit(struct fb_info *info, struct mdp_blit_req *req,
struct file **pp_src_file, struct file **pp_dst_file)
