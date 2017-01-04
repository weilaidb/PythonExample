#define D_SUBMODULE debugfs
#define __debugfs_register(prefix, name, parent)			\
do  while (0)
int wimax_debugfs_add(struct wimax_dev *wimax_dev)
void wimax_debugfs_rm(struct wimax_dev *wimax_dev)
