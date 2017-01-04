static int m5mols_capture_error_handler(struct m5mols_info *info,
int timeout)
static int m5mols_read_rational(struct v4l2_subdev *sd, u32 addr_num,
u32 addr_den, u32 *val)
static int m5mols_capture_info(struct m5mols_info *info)
int m5mols_start_capture(struct m5mols_info *info)
