#define APPLDATA_MAX_REC_SIZE	  4024
#define APPLDATA_MAX_PROCS 100
#define APPLDATA_PROC_NAME_LENGTH 16
#define APPLDATA_RECORD_MEM_ID		0x01
#define APPLDATA_RECORD_OS_ID		0x02
#define APPLDATA_RECORD_NET_SUM_ID	0x03
#define APPLDATA_RECORD_PROC_ID		0x04
#define CTL_APPLDATA_TIMER 	2121
#define CTL_APPLDATA_INTERVAL 	2122
#define CTL_APPLDATA_MEM	2123
#define CTL_APPLDATA_OS		2124
#define CTL_APPLDATA_NET_SUM	2125
#define CTL_APPLDATA_PROC	2126
struct appldata_ops ;
extern int appldata_register_ops(struct appldata_ops *ops);
extern void appldata_unregister_ops(struct appldata_ops *ops);
extern int appldata_diag(char record_nr, u16 function, unsigned long buffer,
u16 length, char *mod_lvl);
