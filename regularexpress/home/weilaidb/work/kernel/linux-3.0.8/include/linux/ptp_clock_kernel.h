#define _PTP_CLOCK_KERNEL_H_
struct ptp_clock_request ;
struct ptp_clock_info ;
struct ptp_clock;
extern struct ptp_clock *ptp_clock_register(struct ptp_clock_info *info);
extern int ptp_clock_unregister(struct ptp_clock *ptp);
enum ptp_clock_events ;
struct ptp_clock_event ;
extern void ptp_clock_event(struct ptp_clock *ptp,
struct ptp_clock_event *event);
