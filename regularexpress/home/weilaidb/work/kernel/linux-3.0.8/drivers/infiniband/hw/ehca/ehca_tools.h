#define EHCA_TOOLS_H
extern int ehca_debug_level;
#define ehca_dbg(ib_dev, format, arg...) \
do  while (0)
#define ehca_info(ib_dev, format, arg...) \
dev_info((ib_dev)->dma_device, "PU%04x EHCA_INFO:%s " format "\n", \
raw_smp_processor_id(), __func__, ## arg)
#define ehca_warn(ib_dev, format, arg...) \
dev_warn((ib_dev)->dma_device, "PU%04x EHCA_WARN:%s " format "\n", \
raw_smp_processor_id(), __func__, ## arg)
#define ehca_err(ib_dev, format, arg...) \
dev_err((ib_dev)->dma_device, "PU%04x EHCA_ERR:%s " format "\n", \
raw_smp_processor_id(), __func__, ## arg)
#define ehca_gen_dbg(format, arg...) \
do  while (0)
#define ehca_gen_warn(format, arg...) \
printk(KERN_INFO "PU%04x EHCA_WARN:%s " format "\n", \
raw_smp_processor_id(), __func__, ## arg)
#define ehca_gen_err(format, arg...) \
printk(KERN_ERR "PU%04x EHCA_ERR:%s " format "\n", \
raw_smp_processor_id(), __func__, ## arg)
#define ehca_dmp(adr, len, format, args...) \
do  while (0)
#define EHCA_BMASK(pos, length) (((pos) << 16) + (length))
#define EHCA_BMASK_IBM(from, to) (((63 - to) << 16) + ((to) - (from) + 1))
#define EHCA_BMASK_SHIFTPOS(mask) (((mask) >> 16) & 0xffff)
#define EHCA_BMASK_MASK(mask) (~0ULL >> ((64 - (mask)) & 0xffff))
#define EHCA_BMASK_SET(mask, value) \
((EHCA_BMASK_MASK(mask) & ((u64)(value))) << EHCA_BMASK_SHIFTPOS(mask))
#define EHCA_BMASK_GET(mask, value) \
(EHCA_BMASK_MASK(mask) & (((u64)(value)) >> EHCA_BMASK_SHIFTPOS(mask)))
int ehca2ib_return_code(u64 ehca_rc);
