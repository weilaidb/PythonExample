struct clock_board ;
struct fhc ;
static int __devinit clock_board_calc_nslots(struct clock_board *p)
static int __devinit clock_board_probe(struct platform_device *op)
static const struct of_device_id clock_board_match[] = ;
static struct platform_driver clock_board_driver = ;
static int __devinit fhc_probe(struct platform_device *op)
static const struct of_device_id fhc_match[] = ;
static struct platform_driver fhc_driver = ;
static int __init sunfire_init(void)
subsys_initcall(sunfire_init);
