static int
ev6_parse_ibox(u64 i_stat, int print)
static int
ev6_parse_mbox(u64 mm_stat, u64 d_stat, u64 c_stat, int print)
static int
ev6_parse_cbox(u64 c_addr, u64 c1_syn, u64 c2_syn,
u64 c_stat, u64 c_sts, int print)
void
ev6_register_error_handlers(void)
int
ev6_process_logout_frame(struct el_common *mchk_header, int print)
void
ev6_machine_check(unsigned long vector, unsigned long la_ptr)
