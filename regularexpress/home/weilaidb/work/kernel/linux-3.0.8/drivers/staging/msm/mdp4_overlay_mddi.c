static struct mdp4_overlay_pipe *mddi_pipe;
static struct mdp4_overlay_pipe *pending_pipe;
static struct msm_fb_data_type *mddi_mfd;
#define WHOLESCREEN
void mdp4_overlay_update_lcd(struct msm_fb_data_type *mfd)
void mdp4_overlay0_done_mddi()
void mdp4_mddi_overlay_restore(void)
void mdp4_mddi_overlay_kickoff(struct msm_fb_data_type *mfd,
struct mdp4_overlay_pipe *pipe)
void mdp4_mddi_overlay(struct msm_fb_data_type *mfd)
