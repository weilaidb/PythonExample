static struct m5mols_scenemode m5mols_default_scenemode[] = ;
int m5mols_do_scenemode(struct m5mols_info *info, u8 mode)
static int m5mols_lock_ae(struct m5mols_info *info, bool lock)
static int m5mols_lock_awb(struct m5mols_info *info, bool lock)
int m5mols_lock_3a(struct m5mols_info *info, bool lock)
int m5mols_set_ctrl(struct v4l2_ctrl *ctrl)
