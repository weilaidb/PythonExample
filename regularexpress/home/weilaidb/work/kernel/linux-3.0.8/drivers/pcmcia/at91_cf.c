#define	CF_ATTR_PHYS	(0)
#define	CF_IO_PHYS	(1 << 23)
#define	CF_MEM_PHYS	(0x017ff800)
static const char driver_name[] = "at91_cf";
struct at91_cf_socket ;
static inline int at91_cf_present(struct at91_cf_socket *cf)
static int at91_cf_ss_init(struct pcmcia_socket *s)
static irqreturn_t at91_cf_irq(int irq, void *_cf)
static int at91_cf_get_status(struct pcmcia_socket *s, u_int *sp)
static int
at91_cf_set_socket(struct pcmcia_socket *sock, struct socket_state_t *s)
static int at91_cf_ss_suspend(struct pcmcia_socket *s)
static int at91_cf_set_io_map(struct pcmcia_socket *s, struct pccard_io_map *io)
static int
at91_cf_set_mem_map(struct pcmcia_socket *s, struct pccard_mem_map *map)
static struct pccard_operations at91_cf_ops = ;
static int __init at91_cf_probe(struct platform_device *pdev)
static int __exit at91_cf_remove(struct platform_device *pdev)
static int at91_cf_suspend(struct platform_device *pdev, pm_message_t mesg)
static int at91_cf_resume(struct platform_device *pdev)
#define	at91_cf_suspend		NULL
#define	at91_cf_resume		NULL
static struct platform_driver at91_cf_driver = ;
static int __init at91_cf_init(void)
module_init(at91_cf_init);
static void __exit at91_cf_exit(void)
module_exit(at91_cf_exit);
MODULE_DESCRIPTION("AT91 Compact Flash Driver");
MODULE_AUTHOR("David Brownell");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:at91_cf");
