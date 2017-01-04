static int force_fire_and_forget = 1;
unsigned long hub_pio_map(cnodeid_t cnode, xwidgetnum_t widget,
unsigned long xtalk_addr, size_t size)
static void hub_setup_prb(nasid_t nasid, int prbnum, int credits)
static void hub_set_piomode(nasid_t nasid)
void hub_pio_init(cnodeid_t cnode)
