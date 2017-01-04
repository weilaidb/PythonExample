static int ircomm_param_service_type(void *instance, irda_param_t *param,
int get);
static int ircomm_param_port_type(void *instance, irda_param_t *param,
int get);
static int ircomm_param_port_name(void *instance, irda_param_t *param,
int get);
static int ircomm_param_service_type(void *instance, irda_param_t *param,
int get);
static int ircomm_param_data_rate(void *instance, irda_param_t *param,
int get);
static int ircomm_param_data_format(void *instance, irda_param_t *param,
int get);
static int ircomm_param_flow_control(void *instance, irda_param_t *param,
int get);
static int ircomm_param_xon_xoff(void *instance, irda_param_t *param, int get);
static int ircomm_param_enq_ack(void *instance, irda_param_t *param, int get);
static int ircomm_param_line_status(void *instance, irda_param_t *param,
int get);
static int ircomm_param_dte(void *instance, irda_param_t *param, int get);
static int ircomm_param_dce(void *instance, irda_param_t *param, int get);
static int ircomm_param_poll(void *instance, irda_param_t *param, int get);
static pi_minor_info_t pi_minor_call_table_common[] = ;
static pi_minor_info_t pi_minor_call_table_non_raw[] = ;
static pi_minor_info_t pi_minor_call_table_9_wire[] = ;
static pi_major_info_t pi_major_call_table[] = ;
pi_param_info_t ircomm_param_info = ;
int ircomm_param_request(struct ircomm_tty_cb *self, __u8 pi, int flush)
static int ircomm_param_service_type(void *instance, irda_param_t *param,
int get)
static int ircomm_param_port_type(void *instance, irda_param_t *param, int get)
static int ircomm_param_port_name(void *instance, irda_param_t *param, int get)
static int ircomm_param_data_rate(void *instance, irda_param_t *param, int get)
static int ircomm_param_data_format(void *instance, irda_param_t *param,
int get)
static int ircomm_param_flow_control(void *instance, irda_param_t *param,
int get)
static int ircomm_param_xon_xoff(void *instance, irda_param_t *param, int get)
static int ircomm_param_enq_ack(void *instance, irda_param_t *param, int get)
static int ircomm_param_line_status(void *instance, irda_param_t *param,
int get)
static int ircomm_param_dte(void *instance, irda_param_t *param, int get)
static int ircomm_param_dce(void *instance, irda_param_t *param, int get)
static int ircomm_param_poll(void *instance, irda_param_t *param, int get)
