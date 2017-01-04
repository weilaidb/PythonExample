static const char *hfcsx_revision = "$Revision: 1.12.2.5 $";
#undef CCD_DEMO_BOARD
static u_char ccd_sp_irqtab[16] = ;
static u_char ccd_sp_irqtab[16] = ;
#define NT_T1_COUNT 20
#define byteout(addr,val) outb(val,addr)
#define bytein(addr) inb(addr)
static inline void
Write_hfc(struct IsdnCardState *cs, u_char regnum, u_char val)
static inline u_char
Read_hfc(struct IsdnCardState *cs, u_char regnum)
static void
fifo_select(struct IsdnCardState *cs, u_char fifo)
static void
reset_fifo(struct IsdnCardState *cs, u_char fifo)
static int
write_fifo(struct IsdnCardState *cs, struct sk_buff *skb, u_char fifo, int trans_max)
static struct sk_buff *
read_fifo(struct IsdnCardState *cs, u_char fifo, int trans_max)
static void
release_io_hfcsx(struct IsdnCardState *cs)
static int set_fifo_size(struct IsdnCardState *cs)
static void
reset_hfcsx(struct IsdnCardState *cs)
static void
hfcsx_Timer(struct IsdnCardState *cs)
static
struct BCState *
Sel_BCS(struct IsdnCardState *cs, int channel)
static
int
receive_dmsg(struct IsdnCardState *cs)
static void
main_rec_hfcsx(struct BCState *bcs)
static void
hfcsx_fill_dfifo(struct IsdnCardState *cs)
static void
hfcsx_fill_fifo(struct BCState *bcs)
static void
dch_nt_l2l1(struct PStack *st, int pr, void *arg)
static int
hfcsx_auxcmd(struct IsdnCardState *cs, isdn_ctrl * ic)
static void
receive_emsg(struct IsdnCardState *cs)
static irqreturn_t
hfcsx_interrupt(int intno, void *dev_id)
static void
hfcsx_dbusy_timer(struct IsdnCardState *cs)
static void
HFCSX_l1hw(struct PStack *st, int pr, void *arg)
static void
setstack_hfcsx(struct PStack *st, struct IsdnCardState *cs)
static void
hfcsx_send_data(struct BCState *bcs)
static void
mode_hfcsx(struct BCState *bcs, int mode, int bc)
static void
hfcsx_l2l1(struct PStack *st, int pr, void *arg)
static void
close_hfcsx(struct BCState *bcs)
static int
open_hfcsxstate(struct IsdnCardState *cs, struct BCState *bcs)
static int
setstack_2b(struct PStack *st, struct BCState *bcs)
static void
hfcsx_bh(struct work_struct *work)
static void inithfcsx(struct IsdnCardState *cs)
static int
hfcsx_card_msg(struct IsdnCardState *cs, int mt, void *arg)
static struct isapnp_device_id hfc_ids[] __devinitdata = ;
static struct isapnp_device_id *ipid __devinitdata = &hfc_ids[0];
static struct pnp_card *pnp_c __devinitdata = NULL;
int __devinit
setup_hfcsx(struct IsdnCard *card)
