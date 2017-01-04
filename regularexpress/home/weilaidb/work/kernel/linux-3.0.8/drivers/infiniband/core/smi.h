#define __SMI_H_
enum smi_action ;
enum smi_forward_action ;
enum smi_action smi_handle_dr_smp_recv(struct ib_smp *smp, u8 node_type,
int port_num, int phys_port_cnt);
int smi_get_fwd_port(struct ib_smp *smp);
extern enum smi_forward_action smi_check_forward_dr_smp(struct ib_smp *smp);
extern enum smi_action smi_handle_dr_smp_send(struct ib_smp *smp,
u8 node_type, int port_num);
static inline enum smi_action smi_check_local_smp(struct ib_smp *smp,
struct ib_device *device)
static inline enum smi_action smi_check_local_returning_smp(struct ib_smp *smp,
struct ib_device *device)
