#define _INC_PMCC4_SYSDEP_H_
#undef CONFIG_SBE_PMCC4_HDLC_V7
#define CONFIG_SBE_PMCC4_HDLC_V7  1
#undef CONFIG_SBE_PMCC4_NCOMM
#define CONFIG_SBE_PMCC4_NCOMM  1
#define FLUSH_PCI_READ()     rmb()
#define FLUSH_PCI_WRITE()    wmb()
#define FLUSH_MEM_READ()     rmb()
#define FLUSH_MEM_WRITE()    wmb()
void sd_recv_consume(void *token, size_t len, void *user);
void        sd_disable_xmit (void *user);
void        sd_enable_xmit (void *user);
int         sd_line_is_ok (void *user);
void        sd_line_is_up (void *user);
void        sd_line_is_down (void *user);
int         sd_queue_stopped (void *user);
