#define EDAC_DCT_ATTR_SHOW(reg)						\
static ssize_t amd64_##reg##_show(struct mem_ctl_info *mci, char *data)	\
EDAC_DCT_ATTR_SHOW(dhar);
EDAC_DCT_ATTR_SHOW(dbam0);
EDAC_DCT_ATTR_SHOW(top_mem);
EDAC_DCT_ATTR_SHOW(top_mem2);
static ssize_t amd64_hole_show(struct mem_ctl_info *mci, char *data)
struct mcidev_sysfs_attribute amd64_dbg_attrs[] = ;
