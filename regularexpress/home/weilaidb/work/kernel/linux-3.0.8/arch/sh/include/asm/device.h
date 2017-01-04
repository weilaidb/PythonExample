struct dev_archdata ;
struct platform_device;
int platform_resource_setup_memory(struct platform_device *pdev,
char *name, unsigned long memsize);
void plat_early_device_setup(void);
#define PDEV_ARCHDATA_FLAG_INIT 0
#define PDEV_ARCHDATA_FLAG_IDLE 1
#define PDEV_ARCHDATA_FLAG_SUSP 2
struct pdev_archdata ;
