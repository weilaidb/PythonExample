#define __YPORTENV_LINUX_H__
#define YCHAR char
#define YUCHAR unsigned char
#define _Y(x)     x
#define YAFFS_LOSTNFOUND_NAME		"lost+found"
#define YAFFS_LOSTNFOUND_PREFIX		"obj"
#define YAFFS_ROOT_MODE			0755
#define YAFFS_LOSTNFOUND_MODE		0700
#define Y_CURRENT_TIME CURRENT_TIME.tv_sec
#define Y_TIME_CONVERT(x) (x).tv_sec
#define compile_time_assertion(assertion) \
()
#define yaffs_printf(msk, fmt, ...) \
printk(KERN_DEBUG "yaffs: " fmt "\n", ##__VA_ARGS__)
#define yaffs_trace(msk, fmt, ...) do  while (0)
#define yaffs_trace(msk, fmt, ...) do  while (0)
