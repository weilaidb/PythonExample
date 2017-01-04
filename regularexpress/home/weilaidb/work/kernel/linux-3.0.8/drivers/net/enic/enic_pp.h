#define _ENIC_PP_H_
int enic_process_set_pp_request(struct enic *enic,
struct enic_port_profile *prev_pp, int *restore_pp);
int enic_process_get_pp_request(struct enic *enic, int request,
u16 *response);
