#define AF_CAN_H
struct receiver ;
enum ;
struct dev_rcv_lists ;
struct s_stats ;
struct s_pstats ;
extern void can_init_proc(void);
extern void can_remove_proc(void);
extern void can_stat_update(unsigned long data);
extern struct timer_list can_stattimer;
extern struct s_stats    can_stats;
extern struct s_pstats   can_pstats;
extern struct hlist_head can_rx_dev_list;
