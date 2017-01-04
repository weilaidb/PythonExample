enum smi_action smi_handle_dr_smp_send(struct ib_smp *smp,
u8 node_type, int port_num)
enum smi_action smi_handle_dr_smp_recv(struct ib_smp *smp, u8 node_type,
int port_num, int phys_port_cnt)
enum smi_forward_action smi_check_forward_dr_smp(struct ib_smp *smp)
int smi_get_fwd_port(struct ib_smp *smp)
