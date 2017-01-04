struct pmx ;
static struct pmx *pmx;
static int pmx_mode_set(struct pmx_mode *mode)
static int pmx_devs_enable(struct pmx_dev **devs, u8 count)
int pmx_register(struct pmx_driver *driver)
