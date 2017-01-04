int __devinit tah_attach(struct platform_device *ofdev, int channel)
void tah_detach(struct platform_device *ofdev, int channel)
void tah_reset(struct platform_device *ofdev)
int tah_get_regs_len(struct platform_device *ofdev)
void *tah_dump_regs(struct platform_device *ofdev, void *buf)
static int __devinit tah_probe(struct platform_device *ofdev)
static int __devexit tah_remove(struct platform_device *ofdev)
static struct of_device_id tah_match[] =
;
static struct platform_driver tah_driver = ;
int __init tah_init(void)
void tah_exit(void)
