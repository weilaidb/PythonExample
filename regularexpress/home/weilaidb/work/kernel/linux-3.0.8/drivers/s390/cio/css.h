#define _CSS_H
#define SPID_FUNC_SINGLE_PATH	   0x00
#define SPID_FUNC_MULTI_PATH	   0x80
#define SPID_FUNC_ESTABLISH	   0x00
#define SPID_FUNC_RESIGN	   0x40
#define SPID_FUNC_DISBAND	   0x20
#define SNID_STATE1_RESET	   0
#define SNID_STATE1_UNGROUPED	   2
#define SNID_STATE1_GROUPED	   3
#define SNID_STATE2_NOT_RESVD	   0
#define SNID_STATE2_RESVD_ELSE	   2
#define SNID_STATE2_RESVD_SELF	   3
#define SNID_STATE3_MULTI_PATH	   1
#define SNID_STATE3_SINGLE_PATH	   0
struct path_state  __attribute__ ((packed));
struct extended_cssid  __attribute__ ((packed));
struct pgid  __attribute__ ((packed));
struct subchannel;
struct chp_link;
struct css_driver ;
#define to_cssdriver(n) container_of(n, struct css_driver, drv)
extern int css_driver_register(struct css_driver *);
extern void css_driver_unregister(struct css_driver *);
extern void css_sch_device_unregister(struct subchannel *);
extern int css_probe_device(struct subchannel_id);
extern struct subchannel *get_subchannel_by_schid(struct subchannel_id);
extern int css_init_done;
extern int max_ssid;
int for_each_subchannel_staged(int (*fn_known)(struct subchannel *, void *),
int (*fn_unknown)(struct subchannel_id,
void *), void *data);
extern int for_each_subchannel(int(*fn)(struct subchannel_id, void *), void *);
extern void css_reiterate_subchannels(void);
void css_update_ssd_info(struct subchannel *sch);
#define __MAX_SUBCHANNEL 65535
#define __MAX_SSID 3
struct channel_subsystem ;
#define to_css(dev) container_of(dev, struct channel_subsystem, device)
extern struct channel_subsystem *channel_subsystems[];
void css_schedule_eval(struct subchannel_id schid);
void css_schedule_eval_all(void);
int css_complete_work(void);
int sch_is_pseudo_sch(struct subchannel *);
struct schib;
int css_sch_is_valid(struct schib *);
extern struct workqueue_struct *cio_work_q;
void css_wait_for_slow_path(void);
void css_sched_sch_todo(struct subchannel *sch, enum sch_todo todo);
