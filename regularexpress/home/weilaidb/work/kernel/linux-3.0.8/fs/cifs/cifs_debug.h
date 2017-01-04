#define CIFS_DEBUG
#define _H_CIFS_DEBUG
void cifs_dump_mem(char *label, void *data, int length);
#define DBG2 2
void cifs_dump_detail(struct smb_hdr *);
void cifs_dump_mids(struct TCP_Server_Info *);
#define DBG2 0
extern int traceSMB;
void dump_smb(struct smb_hdr *, int);
#define CIFS_INFO	0x01
#define CIFS_RC		0x02
#define CIFS_TIMER	0x04
extern int cifsFYI;
#define cifsfyi(fmt, arg...)						\
do  while (0)
#define cFYI(set, fmt, arg...)			\
do  while (0)
#define cifswarn(fmt, arg...)			\
printk(KERN_WARNING fmt "\n", ##arg)
extern int cifsERROR;
#define cEVENT(fmt, arg...)						\
do  while (0)
#define cifserror(fmt, arg...)					\
do  while (0)
#define cERROR(set, fmt, arg...)		\
do  while (0)
#define cERROR(set, fmt, arg...)
#define cEVENT(fmt, arg...)
#define cFYI(set, fmt, arg...)
#define cifserror(fmt, arg...)
