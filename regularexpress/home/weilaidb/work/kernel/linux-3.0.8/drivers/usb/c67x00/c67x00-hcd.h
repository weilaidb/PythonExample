#define _USB_C67X00_HCD_H
#define TOTAL_FRAME_BW		12000
#define DEFAULT_EOT		2250
#define MAX_FRAME_BW_STD	(TOTAL_FRAME_BW - DEFAULT_EOT)
#define MAX_FRAME_BW_ISO	2400
#define MAX_PERIODIC_BW(full_bw)	full_bw
struct c67x00_hcd ;
static inline struct c67x00_hcd *hcd_to_c67x00_hcd(struct usb_hcd *hcd)
static inline struct usb_hcd *c67x00_hcd_to_hcd(struct c67x00_hcd *c67x00)
int c67x00_hcd_probe(struct c67x00_sie *sie);
void c67x00_hcd_remove(struct c67x00_sie *sie);
int c67x00_urb_enqueue(struct usb_hcd *hcd, struct urb *urb, gfp_t mem_flags);
int c67x00_urb_dequeue(struct usb_hcd *hcd, struct urb *urb, int status);
void c67x00_endpoint_disable(struct usb_hcd *hcd,
struct usb_host_endpoint *ep);
void c67x00_hcd_msg_received(struct c67x00_sie *sie, u16 msg);
void c67x00_sched_kick(struct c67x00_hcd *c67x00);
int c67x00_sched_start_scheduler(struct c67x00_hcd *c67x00);
void c67x00_sched_stop_scheduler(struct c67x00_hcd *c67x00);
#define c67x00_hcd_dev(x)	(c67x00_hcd_to_hcd(x)->self.controller)
