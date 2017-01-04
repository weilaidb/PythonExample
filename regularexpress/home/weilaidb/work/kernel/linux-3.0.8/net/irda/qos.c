int sysctl_max_baud_rate = 16000000;
int sysctl_max_noreply_time = 12;
unsigned sysctl_min_tx_turn_time = 10;
unsigned sysctl_max_tx_data_size = 2042;
unsigned sysctl_max_tx_window = 7;
static int irlap_param_baud_rate(void *instance, irda_param_t *param, int get);
static int irlap_param_link_disconnect(void *instance, irda_param_t *parm,
int get);
static int irlap_param_max_turn_time(void *instance, irda_param_t *param,
int get);
static int irlap_param_data_size(void *instance, irda_param_t *param, int get);
static int irlap_param_window_size(void *instance, irda_param_t *param,
int get);
static int irlap_param_additional_bofs(void *instance, irda_param_t *parm,
int get);
static int irlap_param_min_turn_time(void *instance, irda_param_t *param,
int get);
static __u32 irlap_requested_line_capacity(struct qos_info *qos);
static __u32 min_turn_times[]  = ;
static __u32 baud_rates[]      = ;
static __u32 data_sizes[]      = ;
static __u32 add_bofs[]        = ;
static __u32 max_turn_times[]  = ;
static __u32 link_disc_times[] = ;
static __u32 max_line_capacities[10][4] = ;
static pi_minor_info_t pi_minor_call_table_type_0[] = ;
static pi_minor_info_t pi_minor_call_table_type_1[] = ;
static pi_major_info_t pi_major_call_table[] = ;
static pi_param_info_t irlap_param_info = ;
static inline int value_index(__u32 value, __u32 *array, int size)
static inline __u32 index_value(int index, __u32 *array)
static int msb_index (__u16 word)
static inline int value_lower_bits(__u32 value, __u32 *array, int size, __u16 *field)
static inline int value_highest_bit(__u32 value, __u32 *array, int size, __u16 *field)
void irda_qos_compute_intersection(struct qos_info *qos, struct qos_info *new)
void irda_init_max_qos_capabilies(struct qos_info *qos)
EXPORT_SYMBOL(irda_init_max_qos_capabilies);
static void irlap_adjust_qos_settings(struct qos_info *qos)
int irlap_qos_negotiate(struct irlap_cb *self, struct sk_buff *skb)
int irlap_insert_qos_negotiation_params(struct irlap_cb *self,
struct sk_buff *skb)
static int irlap_param_baud_rate(void *instance, irda_param_t *param, int get)
static int irlap_param_link_disconnect(void *instance, irda_param_t *param,
int get)
static int irlap_param_max_turn_time(void *instance, irda_param_t *param,
int get)
static int irlap_param_data_size(void *instance, irda_param_t *param, int get)
static int irlap_param_window_size(void *instance, irda_param_t *param,
int get)
static int irlap_param_additional_bofs(void *instance, irda_param_t *param, int get)
static int irlap_param_min_turn_time(void *instance, irda_param_t *param,
int get)
__u32 irlap_max_line_capacity(__u32 speed, __u32 max_turn_time)
static __u32 irlap_requested_line_capacity(struct qos_info *qos)
void irda_qos_bits_to_value(struct qos_info *qos)
EXPORT_SYMBOL(irda_qos_bits_to_value);
