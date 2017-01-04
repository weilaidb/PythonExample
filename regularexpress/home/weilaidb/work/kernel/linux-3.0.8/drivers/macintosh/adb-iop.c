extern void iop_ism_irq(int, void *);
static struct adb_request *current_req;
static struct adb_request *last_req;
static enum adb_iop_state  adb_iop_state;
static void adb_iop_start(void);
static int adb_iop_probe(void);
static int adb_iop_init(void);
static int adb_iop_send_request(struct adb_request *, int);
static int adb_iop_write(struct adb_request *);
static int adb_iop_autopoll(int);
static void adb_iop_poll(void);
static int adb_iop_reset_bus(void);
struct adb_driver adb_iop_driver = ;
static void adb_iop_end_req(struct adb_request *req, int state)
static void adb_iop_complete(struct iop_msg *msg)
static void adb_iop_listen(struct iop_msg *msg)
static void adb_iop_start(void)
int adb_iop_probe(void)
int adb_iop_init(void)
int adb_iop_send_request(struct adb_request *req, int sync)
static int adb_iop_write(struct adb_request *req)
int adb_iop_autopoll(int devs)
void adb_iop_poll(void)
int adb_iop_reset_bus(void)
