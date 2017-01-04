struct dove_mpp_grp ;
static const struct dove_mpp_grp dove_mpp_grp[] = ;
static void dove_mpp_gpio_mode(int start, int end, int gpio_mode)
static void dove_mpp_dump_regs(void)
static void dove_mpp_cfg_nfc(int sel)
static void dove_mpp_cfg_au1(int sel)
static void dove_mpp_conf_grp(unsigned int *mpp_grp_list)
void __init dove_mpp_conf(unsigned int *mpp_list,
unsigned int *mpp_grp_list,
unsigned int grp_au1_52_57,
unsigned int grp_nfc_64_71)
