#define __AGENT_H_
extern int ib_agent_port_open(struct ib_device *device, int port_num);
extern int ib_agent_port_close(struct ib_device *device, int port_num);
extern void agent_send_response(struct ib_mad *mad, struct ib_grh *grh,
struct ib_wc *wc, struct ib_device *device,
int port_num, int qpn);
