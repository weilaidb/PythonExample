#define MDP_PPP_DQ_H
#define MDP_PPP_DEBUG_MSG MSM_FB_DEBUG
#define MDP_PPP_ROI_NODE_SIZE 32
struct mdp_ppp_roi_cmd ;
struct mdp_ppp_roi_cmd_set ;
struct mdp_ppp_djob ;
extern struct completion mdp_ppp_comp;
extern boolean mdp_ppp_waiting;
extern unsigned long mdp_timer_duration;
unsigned int mdp_ppp_async_op_get(void);
void mdp_ppp_async_op_set(unsigned int flag);
void msm_fb_ensure_mem_coherency_after_dma(struct fb_info *info,
struct mdp_blit_req *req_list, int req_list_count);
void mdp_ppp_put_img(struct file *p_src_file, struct file *p_dst_file);
void mdp_ppp_dq_init(void);
void mdp_ppp_outdw(uint32_t addr, uint32_t data);
struct mdp_ppp_djob *mdp_ppp_new_djob(void);
void mdp_ppp_clear_curr_djob(void);
void mdp_ppp_process_curr_djob(void);
int mdp_ppp_get_ret_code(void);
void mdp_ppp_djob_done(void);
void mdp_ppp_wait(void);
