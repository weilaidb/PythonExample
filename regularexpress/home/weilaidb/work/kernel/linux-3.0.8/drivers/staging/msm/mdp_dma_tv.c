extern spinlock_t mdp_spin_lock;
extern uint32 mdp_intr_mask;
int mdp_dma3_on(struct platform_device *pdev)
int mdp_dma3_off(struct platform_device *pdev)
void mdp_dma3_update(struct msm_fb_data_type *mfd)
