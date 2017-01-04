struct hppb_card ;
static struct hppb_card hppb_card_head = ;
#define IO_IO_LOW  offsetof(struct bc_module, io_io_low)
#define IO_IO_HIGH offsetof(struct bc_module, io_io_high)
static int hppb_probe(struct parisc_device *dev)
static struct parisc_device_id hppb_tbl[] = ;
static struct parisc_driver hppb_driver = ;
void __init hppb_init(void)
