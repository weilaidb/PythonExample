static int enic_set_port_profile(struct enic *enic)
static int enic_unset_port_profile(struct enic *enic)
static int enic_are_pp_different(struct enic_port_profile *pp1,
struct enic_port_profile *pp2)
static int enic_pp_preassociate(struct enic *enic,
struct enic_port_profile *prev_pp, int *restore_pp);
static int enic_pp_disassociate(struct enic *enic,
struct enic_port_profile *prev_pp, int *restore_pp);
static int enic_pp_preassociate_rr(struct enic *enic,
struct enic_port_profile *prev_pp, int *restore_pp);
static int enic_pp_associate(struct enic *enic,
struct enic_port_profile *prev_pp, int *restore_pp);
static int (*enic_pp_handlers[])(struct enic *enic,
struct enic_port_profile *prev_state, int *restore_pp) = ;
static const int enic_pp_handlers_count =
sizeof(enic_pp_handlers)/sizeof(*enic_pp_handlers);
static int enic_pp_preassociate(struct enic *enic,
struct enic_port_profile *prev_pp, int *restore_pp)
static int enic_pp_disassociate(struct enic *enic,
struct enic_port_profile *prev_pp, int *restore_pp)
static int enic_pp_preassociate_rr(struct enic *enic,
struct enic_port_profile *prev_pp, int *restore_pp)
static int enic_pp_associate(struct enic *enic,
struct enic_port_profile *prev_pp, int *restore_pp)
int enic_process_set_pp_request(struct enic *enic,
struct enic_port_profile *prev_pp, int *restore_pp)
int enic_process_get_pp_request(struct enic *enic, int request,
u16 *response)
