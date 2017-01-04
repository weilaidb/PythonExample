static const char driver_name[] = "electra-cf";
struct electra_cf_socket ;
#define	POLL_INTERVAL		(2 * HZ)
static int electra_cf_present(struct electra_cf_socket *cf)
static int electra_cf_ss_init(struct pcmcia_socket *s)
static void electra_cf_timer(unsigned long _cf)
static irqreturn_t electra_cf_irq(int irq, void *_cf)
static int electra_cf_get_status(struct pcmcia_socket *s, u_int *sp)
static int electra_cf_set_socket(struct pcmcia_socket *sock,
struct socket_state_t *s)
static int electra_cf_set_io_map(struct pcmcia_socket *s,
struct pccard_io_map *io)
static int electra_cf_set_mem_map(struct pcmcia_socket *s,
struct pccard_mem_map *map)
static struct pccard_operations electra_cf_ops = ;
static int __devinit electra_cf_probe(struct platform_device *ofdev)
static int __devexit electra_cf_remove(struct platform_device *ofdev)
static const struct of_device_id electra_cf_match[] = ;
MODULE_DEVICE_TABLE(of, electra_cf_match);
static struct platform_driver electra_cf_driver = ;
static int __init electra_cf_init(void)
module_init(electra_cf_init);
static void __exit electra_cf_exit(void)
module_exit(electra_cf_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR ("Olof Johansson <olof@lixom.net>");
MODULE_DESCRIPTION("PA Semi Electra CF driver");
