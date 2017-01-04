static const char *hfcs_revision = "$Revision: 1.10.2.4 $";
static irqreturn_t
hfcs_interrupt(int intno, void *dev_id)
static void
hfcs_Timer(struct IsdnCardState *cs)
static void
release_io_hfcs(struct IsdnCardState *cs)
static void
reset_hfcs(struct IsdnCardState *cs)
static int
hfcs_card_msg(struct IsdnCardState *cs, int mt, void *arg)
static struct isapnp_device_id hfc_ids[] __devinitdata = ;
static struct isapnp_device_id *ipid __devinitdata = &hfc_ids[0];
static struct pnp_card *pnp_c __devinitdata = NULL;
int __devinit
setup_hfcs(struct IsdnCard *card)
