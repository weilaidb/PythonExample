static unsigned short act2000_isa_ports[] =
;
static act2000_card *cards = (act2000_card *) NULL;
static int   act_bus  =  0;
static int   act_port = -1;
static int   act_irq  = -1;
static char *act_id   = "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0";
MODULE_DESCRIPTION(       "ISDN4Linux: Driver for IBM Active 2000 ISDN card");
MODULE_AUTHOR(            "Fritz Elfert");
MODULE_LICENSE(           "GPL");
MODULE_PARM_DESC(act_bus, "BusType of first card, 1=ISA, 2=MCA, 3=PCMCIA, currently only ISA");
MODULE_PARM_DESC(membase, "Base port address of first card");
MODULE_PARM_DESC(act_irq, "IRQ of first card");
MODULE_PARM_DESC(act_id,  "ID-String of first card");
module_param(act_bus,  int, 0);
module_param(act_port, int, 0);
module_param(act_irq, int, 0);
module_param(act_id, charp, 0);
static int act2000_addcard(int, int, int, char *);
static act2000_chan *
find_channel(act2000_card *card, int channel)
static void
act2000_clear_msn(act2000_card *card)
static __u16
act2000_find_msn(act2000_card *card, char *msn, int ia5)
char *
act2000_find_eaz(act2000_card *card, char eaz)
static int
act2000_set_msn(act2000_card *card, char *eazmsn)
static void
act2000_transmit(struct work_struct *work)
static void
act2000_receive(struct work_struct *work)
static void
act2000_poll(unsigned long data)
static int
act2000_command(act2000_card * card, isdn_ctrl * c)
static int
act2000_sendbuf(act2000_card *card, int channel, int ack, struct sk_buff *skb)
static int
act2000_readstatus(u_char __user * buf, int len, act2000_card * card)
static inline act2000_card *
act2000_findcard(int driverid)
static int
if_command(isdn_ctrl * c)
static int
if_writecmd(const u_char __user *buf, int len, int id, int channel)
static int
if_readstatus(u_char __user * buf, int len, int id, int channel)
static int
if_sendbuf(int id, int channel, int ack, struct sk_buff *skb)
static void
act2000_alloccard(int bus, int port, int irq, char *id)
static int
act2000_registercard(act2000_card * card)
static void
unregister_card(act2000_card * card)
static int
act2000_addcard(int bus, int port, int irq, char *id)
#define DRIVERNAME "IBM Active 2000 ISDN driver"
static int __init act2000_init(void)
static void __exit act2000_exit(void)
module_init(act2000_init);
module_exit(act2000_exit);
