#define SPFX "ib_agent: "
struct ib_agent_port_private ;
static DEFINE_SPINLOCK(ib_agent_port_list_lock);
static LIST_HEAD(ib_agent_port_list);
static struct ib_agent_port_private *
__ib_get_agent_port(struct ib_device *device, int port_num)
static struct ib_agent_port_private *
ib_get_agent_port(struct ib_device *device, int port_num)
void agent_send_response(struct ib_mad *mad, struct ib_grh *grh,
struct ib_wc *wc, struct ib_device *device,
int port_num, int qpn)
static void agent_send_handler(struct ib_mad_agent *mad_agent,
struct ib_mad_send_wc *mad_send_wc)
int ib_agent_port_open(struct ib_device *device, int port_num)
int ib_agent_port_close(struct ib_device *device, int port_num)
