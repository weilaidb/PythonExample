struct ev7_lf_subpackets *
ev7_collect_logout_frame_subpackets(struct el_subpacket *el_ptr,
struct ev7_lf_subpackets *lf_subpackets)
void
ev7_machine_check(unsigned long vector, unsigned long la_ptr)
static char *el_ev7_processor_subpacket_annotation[] = ;
static char *el_ev7_zbox_subpacket_annotation[] = ;
static char *el_ev7_rbox_subpacket_annotation[] = ;
static char *el_ev7_io_subpacket_annotation[] = ;
static struct el_subpacket_annotation el_ev7_pal_annotations[] = ;
static struct el_subpacket *
ev7_process_pal_subpacket(struct el_subpacket *header)
struct el_subpacket_handler ev7_pal_subpacket_handler =
SUBPACKET_HANDLER_INIT(EL_CLASS__PAL, ev7_process_pal_subpacket);
void __init
ev7_register_error_handlers(void)
