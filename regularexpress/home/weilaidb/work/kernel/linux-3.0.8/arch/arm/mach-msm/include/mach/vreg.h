#define __ARCH_ARM_MACH_MSM_VREG_H
struct vreg;
struct vreg *vreg_get(struct device *dev, const char *id);
void vreg_put(struct vreg *vreg);
int vreg_enable(struct vreg *vreg);
int vreg_disable(struct vreg *vreg);
int vreg_set_level(struct vreg *vreg, unsigned mv);
