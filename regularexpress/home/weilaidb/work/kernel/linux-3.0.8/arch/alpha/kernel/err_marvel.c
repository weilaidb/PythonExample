static void
marvel_print_680_frame(struct ev7_lf_subpackets *lf_subpackets)
static int
marvel_process_680_frame(struct ev7_lf_subpackets *lf_subpackets, int print)
static void
marvel_print_err_cyc(u64 err_cyc)
static void
marvel_print_po7_crrct_sym(u64 crrct_sym)
static void
marvel_print_po7_uncrr_sym(u64 uncrr_sym, u64 valid_mask)
static void
marvel_print_po7_ugbge_sym(u64 ugbge_sym)
static void
marvel_print_po7_err_sum(struct ev7_pal_io_subpacket *io)
static void
marvel_print_pox_tlb_err(u64 tlb_err)
static  void
marvel_print_pox_spl_cmplt(u64 spl_cmplt)
static void
marvel_print_pox_trans_sum(u64 trans_sum)
static void
marvel_print_pox_err(u64 err_sum, struct ev7_pal_io_one_port *port)
static struct ev7_pal_io_subpacket *
marvel_find_io7_with_error(struct ev7_lf_subpackets *lf_subpackets)
static int
marvel_process_io_error(struct ev7_lf_subpackets *lf_subpackets, int print)
static int
marvel_process_logout_frame(struct ev7_lf_subpackets *lf_subpackets, int print)
void
marvel_machine_check(unsigned long vector, unsigned long la_ptr)
void __init
marvel_register_error_handlers(void)
