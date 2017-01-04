#define IDX_IRQ_S0_READY_NINT	(0)
#define IDX_IRQ_S0_CD_VALID	(1)
#define IDX_IRQ_S0_BVD1_STSCHG	(2)
#define IDX_IRQ_S1_READY_NINT	(3)
#define IDX_IRQ_S1_CD_VALID	(4)
#define IDX_IRQ_S1_BVD1_STSCHG	(5)
static struct pcmcia_irqs irqs[] = ;
static int sa1111_pcmcia_hw_init(struct soc_pcmcia_socket *skt)
static void sa1111_pcmcia_hw_shutdown(struct soc_pcmcia_socket *skt)
void sa1111_pcmcia_socket_state(struct soc_pcmcia_socket *skt, struct pcmcia_state *state)
int sa1111_pcmcia_configure_socket(struct soc_pcmcia_socket *skt, const socket_state_t *state)
void sa1111_pcmcia_socket_init(struct soc_pcmcia_socket *skt)
static void sa1111_pcmcia_socket_suspend(struct soc_pcmcia_socket *skt)
int sa1111_pcmcia_add(struct sa1111_dev *dev, struct pcmcia_low_level *ops,
int (*add)(struct soc_pcmcia_socket *))
static int pcmcia_probe(struct sa1111_dev *dev)
static int __devexit pcmcia_remove(struct sa1111_dev *dev)
static struct sa1111_driver pcmcia_driver = ;
static int __init sa1111_drv_pcmcia_init(void)
static void __exit sa1111_drv_pcmcia_exit(void)
fs_initcall(sa1111_drv_pcmcia_init);
module_exit(sa1111_drv_pcmcia_exit);
MODULE_DESCRIPTION("SA1111 PCMCIA card socket driver");
MODULE_LICENSE("GPL");
