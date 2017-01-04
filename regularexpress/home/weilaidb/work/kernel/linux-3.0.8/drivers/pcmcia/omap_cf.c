#define	CF_BASE	0xfffe2800
#define CF_STATUS			(CF_BASE + 0x00)
#	define	CF_STATUS_BAD_READ	(1 << 2)
#	define	CF_STATUS_BAD_WRITE	(1 << 1)
#	define	CF_STATUS_CARD_DETECT	(1 << 0)
#define CF_CFG				(CF_BASE + 0x02)
#define CF_CONTROL			(CF_BASE + 0x04)
#	define	CF_CONTROL_RESET	(1 << 0)
#define omap_cf_present() (!(omap_readw(CF_STATUS) & CF_STATUS_CARD_DETECT))
static const char driver_name[] = "omap_cf";
struct omap_cf_socket ;
#define	POLL_INTERVAL		(2 * HZ)
static int omap_cf_ss_init(struct pcmcia_socket *s)
static void omap_cf_timer(unsigned long _cf)
static irqreturn_t omap_cf_irq(int irq, void *_cf)
static int omap_cf_get_status(struct pcmcia_socket *s, u_int *sp)
static int
omap_cf_set_socket(struct pcmcia_socket *sock, struct socket_state_t *s)
static int omap_cf_ss_suspend(struct pcmcia_socket *s)
static int
omap_cf_set_io_map(struct pcmcia_socket *s, struct pccard_io_map *io)
static int
omap_cf_set_mem_map(struct pcmcia_socket *s, struct pccard_mem_map *map)
static struct pccard_operations omap_cf_ops = ;
static int __init omap_cf_probe(struct platform_device *pdev)
static int __exit omap_cf_remove(struct platform_device *pdev)
static struct platform_driver omap_cf_driver = ;
static int __init omap_cf_init(void)
static void __exit omap_cf_exit(void)
module_init(omap_cf_init);
module_exit(omap_cf_exit);
MODULE_DESCRIPTION("OMAP CF Driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:omap_cf");
