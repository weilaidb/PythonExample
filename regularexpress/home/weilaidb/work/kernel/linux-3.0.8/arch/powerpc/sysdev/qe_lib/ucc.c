int ucc_set_qe_mux_mii_mng(unsigned int ucc_num)
EXPORT_SYMBOL(ucc_set_qe_mux_mii_mng);
int ucc_set_type(unsigned int ucc_num, enum ucc_speed_type speed)
static void get_cmxucr_reg(unsigned int ucc_num, __be32 __iomem **cmxucr,
unsigned int *reg_num, unsigned int *shift)
int ucc_mux_set_grant_tsa_bkpt(unsigned int ucc_num, int set, u32 mask)
int ucc_set_qe_mux_rxtx(unsigned int ucc_num, enum qe_clock clock,
enum comm_dir mode)
