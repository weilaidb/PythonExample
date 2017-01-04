static int
titan_parse_c_misc(u64 c_misc, int print)
static int
titan_parse_p_serror(int which, u64 serror, int print)
static int
titan_parse_p_perror(int which, int port, u64 perror, int print)
static int
titan_parse_p_agperror(int which, u64 agperror, int print)
static int
titan_parse_p_chip(int which, u64 serror, u64 gperror,
u64 aperror, u64 agperror, int print)
int
titan_process_logout_frame(struct el_common *mchk_header, int print)
void
titan_machine_check(unsigned long vector, unsigned long la_ptr)
static char *el_titan_pchip0_extended_annotation[] = ;
static char *el_titan_pchip1_extended_annotation[] = ;
static char *el_titan_memory_extended_annotation[] = ;
static struct el_subpacket_annotation el_titan_annotations[] = ;
static struct el_subpacket *
el_process_regatta_subpacket(struct el_subpacket *header)
static struct el_subpacket_handler titan_subpacket_handler =
SUBPACKET_HANDLER_INIT(EL_CLASS__REGATTA_FAMILY,
el_process_regatta_subpacket);
void __init
titan_register_error_handlers(void)
static int
privateer_process_680_frame(struct el_common *mchk_header, int print)
int
privateer_process_logout_frame(struct el_common *mchk_header, int print)
void
privateer_machine_check(unsigned long vector, unsigned long la_ptr)
