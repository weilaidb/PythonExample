#define _MSM_MDP_H_
#define MSMFB_IOCTL_MAGIC 'm'
#define MSMFB_GRP_DISP          _IOW(MSMFB_IOCTL_MAGIC, 1, unsigned int)
#define MSMFB_BLIT              _IOW(MSMFB_IOCTL_MAGIC, 2, unsigned int)
enum ;
enum ;
#define MDP_ROT_NOP	0
#define MDP_FLIP_LR	0x1
#define MDP_FLIP_UD	0x2
#define MDP_ROT_90	0x4
#define MDP_ROT_180	(MDP_FLIP_UD|MDP_FLIP_LR)
#define MDP_ROT_270	(MDP_ROT_90|MDP_FLIP_UD|MDP_FLIP_LR)
#define MDP_DITHER	0x8
#define MDP_BLUR	0x10
#define MDP_TRANSP_NOP	0xffffffff
#define MDP_ALPHA_NOP	0xff
struct mdp_rect ;
struct mdp_img ;
struct mdp_blit_req ;
struct mdp_blit_req_list ;
