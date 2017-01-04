#define KMSG_COMPONENT "dasd-eckd"
#define PRINTK_HEADER "dasd_erp(3990): "
struct DCTL_data  __attribute__ ((packed));
static struct dasd_ccw_req *
dasd_3990_erp_cleanup(struct dasd_ccw_req * erp, char final_status)
static void dasd_3990_erp_block_queue(struct dasd_ccw_req *erp, int expires)
static struct dasd_ccw_req *
dasd_3990_erp_int_req(struct dasd_ccw_req * erp)
static void
dasd_3990_erp_alternate_path(struct dasd_ccw_req * erp)
static struct dasd_ccw_req *
dasd_3990_erp_DCTL(struct dasd_ccw_req * erp, char modifier)
static struct dasd_ccw_req *dasd_3990_erp_action_1_sec(struct dasd_ccw_req *erp)
static struct dasd_ccw_req *dasd_3990_erp_action_1(struct dasd_ccw_req *erp)
static struct dasd_ccw_req *
dasd_3990_erp_action_4(struct dasd_ccw_req * erp, char *sense)
static struct dasd_ccw_req *
dasd_3990_erp_action_5(struct dasd_ccw_req * erp)
static void
dasd_3990_handle_env_data(struct dasd_ccw_req * erp, char *sense)
static struct dasd_ccw_req *
dasd_3990_erp_com_rej(struct dasd_ccw_req * erp, char *sense)
static struct dasd_ccw_req *
dasd_3990_erp_bus_out(struct dasd_ccw_req * erp)
static struct dasd_ccw_req *
dasd_3990_erp_equip_check(struct dasd_ccw_req * erp, char *sense)
static struct dasd_ccw_req *
dasd_3990_erp_data_check(struct dasd_ccw_req * erp, char *sense)
static struct dasd_ccw_req *
dasd_3990_erp_overrun(struct dasd_ccw_req * erp, char *sense)
static struct dasd_ccw_req *
dasd_3990_erp_inv_format(struct dasd_ccw_req * erp, char *sense)
static struct dasd_ccw_req *
dasd_3990_erp_EOC(struct dasd_ccw_req * default_erp, char *sense)
static struct dasd_ccw_req *
dasd_3990_erp_env_data(struct dasd_ccw_req * erp, char *sense)
static struct dasd_ccw_req *
dasd_3990_erp_no_rec(struct dasd_ccw_req * default_erp, char *sense)
static struct dasd_ccw_req *
dasd_3990_erp_file_prot(struct dasd_ccw_req * erp)
static struct dasd_ccw_req *dasd_3990_erp_inspect_alias(
struct dasd_ccw_req *erp)
static struct dasd_ccw_req *
dasd_3990_erp_inspect_24(struct dasd_ccw_req * erp, char *sense)
static struct dasd_ccw_req *
dasd_3990_erp_action_10_32(struct dasd_ccw_req * erp, char *sense)
static struct dasd_ccw_req *
dasd_3990_erp_action_1B_32(struct dasd_ccw_req * default_erp, char *sense)
static struct dasd_ccw_req *
dasd_3990_update_1B(struct dasd_ccw_req * previous_erp, char *sense)
static void
dasd_3990_erp_compound_retry(struct dasd_ccw_req * erp, char *sense)
static void
dasd_3990_erp_compound_path(struct dasd_ccw_req * erp, char *sense)
static struct dasd_ccw_req *
dasd_3990_erp_compound_code(struct dasd_ccw_req * erp, char *sense)
static void
dasd_3990_erp_compound_config(struct dasd_ccw_req * erp, char *sense)
static struct dasd_ccw_req *
dasd_3990_erp_compound(struct dasd_ccw_req * erp, char *sense)
void
dasd_3990_erp_handle_sim(struct dasd_device *device, char *sense)
static struct dasd_ccw_req *
dasd_3990_erp_inspect_32(struct dasd_ccw_req * erp, char *sense)
static struct dasd_ccw_req *
dasd_3990_erp_control_check(struct dasd_ccw_req *erp)
static struct dasd_ccw_req *
dasd_3990_erp_inspect(struct dasd_ccw_req *erp)
static struct dasd_ccw_req *dasd_3990_erp_add_erp(struct dasd_ccw_req *cqr)
static struct dasd_ccw_req *
dasd_3990_erp_additional_erp(struct dasd_ccw_req * cqr)
static int dasd_3990_erp_error_match(struct dasd_ccw_req *cqr1,
struct dasd_ccw_req *cqr2)
static struct dasd_ccw_req *
dasd_3990_erp_in_erp(struct dasd_ccw_req *cqr)
static struct dasd_ccw_req *
dasd_3990_erp_further_erp(struct dasd_ccw_req *erp)
static struct dasd_ccw_req *
dasd_3990_erp_handle_match_erp(struct dasd_ccw_req *erp_head,
struct dasd_ccw_req *erp)
struct dasd_ccw_req *
dasd_3990_erp_action(struct dasd_ccw_req * cqr)
