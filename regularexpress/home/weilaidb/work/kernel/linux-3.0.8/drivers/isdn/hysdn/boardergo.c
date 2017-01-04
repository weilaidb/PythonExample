#define byteout(addr,val) outb(val,addr)
#define bytein(addr) inb(addr)
static irqreturn_t
ergo_interrupt(int intno, void *dev_id)
static void
ergo_irq_bh(struct work_struct *ugli_api)
static void
ergo_stopcard(hysdn_card * card)
static void
ergo_set_errlog_state(hysdn_card * card, int on)
static const char TestText[36] = "This Message is filler, why read it";
static int
ergo_testram(hysdn_card * card)
static int
ergo_writebootimg(struct HYSDN_CARD *card, unsigned char *buf,
unsigned long offs)
static int
ergo_writebootseq(struct HYSDN_CARD *card, unsigned char *buf, int len)
static int
ergo_waitpofready(struct HYSDN_CARD *card)
static void
ergo_releasehardware(hysdn_card * card)
int
ergo_inithardware(hysdn_card * card)
