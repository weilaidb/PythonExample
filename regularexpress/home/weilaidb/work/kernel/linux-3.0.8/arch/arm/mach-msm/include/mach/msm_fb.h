#define _MSM_FB_H_
struct mddi_info;
struct msm_fb_data ;
struct msmfb_callback ;
enum ;
#define MSMFB_CAP_PARTIAL_UPDATES	(1 << 0)
struct msm_panel_data ;
struct msm_mddi_client_data ;
struct msm_mddi_platform_data ;
struct mdp_blit_req;
struct fb_info;
struct mdp_device ;
struct class_interface;
int register_mdp_client(struct class_interface *class_intf);
struct msm_mddi_bridge_platform_data ;
