#define	SZ_1K	0x00000400
#define	SZ_8K	0x00002000
#define	SZ_2K	(2 * SZ_1K)
#define	POLL_INTERVAL	(2 * HZ)
#define	CF_ATASEL_ENA 	0x20311802
#define	CF_ATASEL_DIS 	0x20311800
#define bfin_cf_present(pfx) (gpio_get_value(pfx))
static const char driver_name[] = "bfin_cf_pcmcia";
struct bfin_cf_socket ;
static int bfin_cf_reset(void)
static int bfin_cf_ss_init(struct pcmcia_socket *s)
static void bfin_cf_timer(unsigned long _cf)
static int bfin_cf_get_status(struct pcmcia_socket *s, u_int *sp)
static int
bfin_cf_set_socket(struct pcmcia_socket *sock, struct socket_state_t *s)
static int bfin_cf_ss_suspend(struct pcmcia_socket *s)
static int bfin_cf_set_io_map(struct pcmcia_socket *s, struct pccard_io_map *io)
static int
bfin_cf_set_mem_map(struct pcmcia_socket *s, struct pccard_mem_map *map)
static struct pccard_operations bfin_cf_ops = ;
static int __devinit bfin_cf_probe(struct platform_device *pdev)
static int __devexit bfin_cf_remove(struct platform_device *pdev)
static struct platform_driver bfin_cf_driver = ;
static int __init bfin_cf_init(void)
static void __exit bfin_cf_exit(void)
module_init(bfin_cf_init);
module_exit(bfin_cf_exit);
MODULE_AUTHOR("Michael Hennerich <hennerich@blackfin.uclinux.org>");
MODULE_DESCRIPTION("BFIN CF/PCMCIA Driver");
MODULE_LICENSE("GPL");
