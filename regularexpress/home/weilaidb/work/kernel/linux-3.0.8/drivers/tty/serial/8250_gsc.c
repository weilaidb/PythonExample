static int __init serial_init_chip(struct parisc_device *dev)
static struct parisc_device_id serial_tbl[] = ;
static struct parisc_device_id lasi_tbl[] = ;
MODULE_DEVICE_TABLE(parisc, serial_tbl);
static struct parisc_driver lasi_driver = ;
static struct parisc_driver serial_driver = ;
static int __init probe_serial_gsc(void)
module_init(probe_serial_gsc);
MODULE_LICENSE("GPL");
