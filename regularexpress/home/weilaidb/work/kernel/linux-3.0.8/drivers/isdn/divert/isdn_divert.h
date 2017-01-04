#define DIVERT_IIOC_VERSION 0x01
#define IIOCGETVER   _IO('I', 1)
#define IIOCGETDRV   _IO('I', 2)
#define IIOCGETNAM   _IO('I', 3)
#define IIOCGETRULE  _IO('I', 4)
#define IIOCMODRULE  _IO('I', 5)
#define IIOCINSRULE  _IO('I', 6)
#define IIOCDELRULE  _IO('I', 7)
#define IIOCDODFACT  _IO('I', 8)
#define IIOCDOCFACT  _IO('I', 9)
#define IIOCDOCFDIS  _IO('I',10)
#define IIOCDOCFINT  _IO('I',11)
#define DEFLECT_IGNORE    0
#define DEFLECT_REPORT    1
#define DEFLECT_PROCEED   2
#define DEFLECT_ALERT     3
#define DEFLECT_REJECT    4
#define DIVERT_ACTIVATE   5
#define DIVERT_DEACTIVATE 6
#define DIVERT_REPORT     7
#define DEFLECT_AUTODEL 255
#define DEFLECT_ALL_IDS   0xFFFFFFFF
typedef struct
divert_rule;
typedef union
divert_ioctl;
#define AUTODEL_TIME 30
struct divert_info
;
extern spinlock_t divert_lock;
extern ulong if_used;
extern int divert_dev_deinit(void);
extern int divert_dev_init(void);
extern void put_info_buffer(char *);
extern int ll_callback(isdn_ctrl *);
extern isdn_divert_if divert_if;
extern divert_rule *getruleptr(int);
extern int insertrule(int, divert_rule *);
extern int deleterule(int);
extern void deleteprocs(void);
extern int deflect_extern_action(u_char, ulong, char *);
extern int cf_command(int, int, u_char, char *, u_char, char *, ulong *);
