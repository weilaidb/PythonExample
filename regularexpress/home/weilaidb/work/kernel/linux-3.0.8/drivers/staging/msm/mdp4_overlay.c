struct mdp4_overlay_ctrl  mdp4_overlay_db;
static struct mdp4_overlay_ctrl *ctrl = &mdp4_overlay_db;
void mdp4_overlay_dmap_cfg(struct msm_fb_data_type *mfd, int lcdc)
void mdp4_overlay_dmap_xy(struct mdp4_overlay_pipe *pipe)
#define MDP4_VG_PHASE_STEP_DEFAULT	0x20000000
#define MDP4_VG_PHASE_STEP_SHIFT	29
static int mdp4_leading_0(uint32 num)
static uint32 mdp4_scale_phase_step(int f_num, uint32 src, uint32 dst)
static void mdp4_scale_setup(struct mdp4_overlay_pipe *pipe)
void mdp4_overlay_rgb_setup(struct mdp4_overlay_pipe *pipe)
void mdp4_overlay_vg_setup(struct mdp4_overlay_pipe *pipe)
int mdp4_overlay_format2type(uint32 format)
#define C3_ALPHA	3
#define C2_R_Cr		2
#define C1_B_Cb		1
#define C0_G_Y		0
int mdp4_overlay_format2pipe(struct mdp4_overlay_pipe *pipe)
static uint32 color_key_convert(int start, int num, uint32 color)
void transp_color_key(int format, uint32 transp,
uint32 *c0, uint32 *c1, uint32 *c2)
uint32 mdp4_overlay_format(struct mdp4_overlay_pipe *pipe)
uint32 mdp4_overlay_unpack_pattern(struct mdp4_overlay_pipe *pipe)
void mdp4_overlayproc_cfg(struct mdp4_overlay_pipe *pipe)
int mdp4_overlay_active(int mixer)
void mdp4_mixer_stage_up(struct mdp4_overlay_pipe *pipe)
void mdp4_mixer_stage_down(struct mdp4_overlay_pipe *pipe)
void mdp4_mixer_blend_setup(struct mdp4_overlay_pipe *pipe)
void mdp4_overlay_reg_flush(struct mdp4_overlay_pipe *pipe, int all)
struct mdp4_overlay_pipe *mdp4_overlay_ndx2pipe(int ndx)
struct mdp4_overlay_pipe *mdp4_overlay_pipe_alloc(void)
void mdp4_overlay_pipe_free(struct mdp4_overlay_pipe *pipe)
static int get_pipe_num(int ptype, int stage)
int mdp4_overlay_req_check(uint32 id, uint32 z_order, uint32 mixer)
static int mdp4_overlay_req2pipe(struct mdp_overlay *req, int mixer,
struct mdp4_overlay_pipe **ppipe)
int get_img(struct msmfb_data *img, struct fb_info *info,
unsigned long *start, unsigned long *len, struct file **pp_file)
int mdp4_overlay_get(struct fb_info *info, struct mdp_overlay *req)
int mdp4_overlay_set(struct fb_info *info, struct mdp_overlay *req)
int mdp4_overlay_unset(struct fb_info *info, int ndx)
struct tile_desc ;
void tile_samsung(struct tile_desc *tp)
uint32 tile_mem_size(struct mdp4_overlay_pipe *pipe, struct tile_desc *tp)
int mdp4_overlay_play(struct fb_info *info, struct msmfb_overlay_data *req,
struct file **pp_src_file)
