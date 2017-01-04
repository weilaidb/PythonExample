#define pr_fmt(fmt) "(stll) :" fmt
static void send_ll_cmd(struct st_data_s *st_data,
unsigned char cmd)
static void ll_device_want_to_sleep(struct st_data_s *st_data)
static void ll_device_want_to_wakeup(struct st_data_s *st_data)
void st_ll_enable(struct st_data_s *ll)
void st_ll_disable(struct st_data_s *ll)
void st_ll_wakeup(struct st_data_s *ll)
unsigned long st_ll_getstate(struct st_data_s *ll)
unsigned long st_ll_sleep_state(struct st_data_s *st_data,
unsigned char cmd)
long st_ll_init(struct st_data_s *ll)
long st_ll_deinit(struct st_data_s *ll)
