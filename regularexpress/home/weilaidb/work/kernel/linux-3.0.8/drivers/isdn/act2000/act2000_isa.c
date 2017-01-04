static int
act2000_isa_reset(unsigned short portbase)
int
act2000_isa_detect(unsigned short portbase)
static irqreturn_t
act2000_isa_interrupt(int dummy, void *dev_id)
static void
act2000_isa_select_irq(act2000_card * card)
static void
act2000_isa_enable_irq(act2000_card * card)
int
act2000_isa_config_irq(act2000_card * card, short irq)
int
act2000_isa_config_port(act2000_card * card, unsigned short portbase)
void
act2000_isa_release(act2000_card * card)
static int
act2000_isa_writeb(act2000_card * card, u_char data)
static int
act2000_isa_readb(act2000_card * card, u_char * data)
void
act2000_isa_receive(act2000_card *card)
void
act2000_isa_send(act2000_card * card)
static int
act2000_isa_getid(act2000_card * card)
int
act2000_isa_download(act2000_card * card, act2000_ddef __user * cb)
