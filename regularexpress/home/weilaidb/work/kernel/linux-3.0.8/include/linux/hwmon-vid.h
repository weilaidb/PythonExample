#define _LINUX_HWMON_VID_H
int vid_from_reg(int val, u8 vrm);
u8 vid_which_vrm(void);
static inline int vid_to_reg(int val, u8 vrm)
