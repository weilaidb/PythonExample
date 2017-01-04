#define __MACH_U300_PADMUX_H
enum pmx_settings ;
struct pmx_onmask ;
struct pmx ;
struct pmx *pmx_get(struct device *dev, enum pmx_settings setting);
int pmx_put(struct device *dev, struct pmx *pmx);
int pmx_activate(struct device *dev, struct pmx *pmx);
int pmx_deactivate(struct device *dev, struct pmx *pmx);
