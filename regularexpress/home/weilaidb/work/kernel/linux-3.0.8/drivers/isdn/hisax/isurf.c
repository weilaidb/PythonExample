static const char *ISurf_revision = "$Revision: 1.12.2.4 $";
#define byteout(addr,val) outb(val,addr)
#define bytein(addr) inb(addr)
#define ISURF_ISAR_RESET	1
#define ISURF_ISAC_RESET	2
#define ISURF_ISAR_EA		4
#define ISURF_ARCOFI_RESET	8
#define ISURF_RESET (ISURF_ISAR_RESET | ISURF_ISAC_RESET | ISURF_ARCOFI_RESET)
#define ISURF_ISAR_OFFSET	0
#define ISURF_ISAC_OFFSET	0x100
#define ISURF_IOMEM_SIZE	0x400
static u_char
ReadISAC(struct IsdnCardState *cs, u_char offset)
static void
WriteISAC(struct IsdnCardState *cs, u_char offset, u_char value)
static void
ReadISACfifo(struct IsdnCardState *cs, u_char * data, int size)
static void
WriteISACfifo(struct IsdnCardState *cs, u_char * data, int size)
static u_char
ReadISAR(struct IsdnCardState *cs, int mode, u_char offset)
static void
WriteISAR(struct IsdnCardState *cs, int mode, u_char offset, u_char value)
static irqreturn_t
isurf_interrupt(int intno, void *dev_id)
static void
release_io_isurf(struct IsdnCardState *cs)
static void
reset_isurf(struct IsdnCardState *cs, u_char chips)
static int
ISurf_card_msg(struct IsdnCardState *cs, int mt, void *arg)
static int
isurf_auxcmd(struct IsdnCardState *cs, isdn_ctrl *ic)
static struct pnp_card *pnp_c __devinitdata = NULL;
int __devinit
setup_isurf(struct IsdnCard *card)
