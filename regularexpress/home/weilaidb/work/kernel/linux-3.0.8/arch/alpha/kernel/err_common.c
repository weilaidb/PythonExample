char *err_print_prefix = KERN_NOTICE;
void
mchk_dump_mem(void *data, size_t length, char **annotation)
void
mchk_dump_logout_frame(struct el_common *mchk_header)
static struct el_subpacket_handler *subpacket_handler_list = NULL;
static struct el_subpacket_annotation *subpacket_annotation_list = NULL;
static struct el_subpacket *
el_process_header_subpacket(struct el_subpacket *header)
static struct el_subpacket *
el_process_subpacket_reg(struct el_subpacket *header)
void
el_print_timestamp(union el_timestamp *timestamp)
void
el_process_subpackets(struct el_subpacket *header, int packet_count)
struct el_subpacket *
el_process_subpacket(struct el_subpacket *header)
void
el_annotate_subpacket(struct el_subpacket *header)
static void __init
cdl_process_console_data_log(int cpu, struct percpu_struct *pcpu)
void __init
cdl_check_console_data_log(void)
int __init
cdl_register_subpacket_annotation(struct el_subpacket_annotation *new)
int __init
cdl_register_subpacket_handler(struct el_subpacket_handler *new)
