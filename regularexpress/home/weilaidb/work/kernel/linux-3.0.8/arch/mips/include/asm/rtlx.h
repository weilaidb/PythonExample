#define __ASM_RTLX_H_
#define LX_NODE_BASE 10
#define MIPS_CPU_RTLX_IRQ 0
#define RTLX_VERSION 2
#define RTLX_xID 0x12345600
#define RTLX_ID (RTLX_xID | RTLX_VERSION)
#define RTLX_CHANNELS 8
#define RTLX_CHANNEL_STDIO	0
#define RTLX_CHANNEL_DBG	1
#define RTLX_CHANNEL_SYSIO	2
extern int rtlx_open(int index, int can_sleep);
extern int rtlx_release(int index);
extern ssize_t rtlx_read(int index, void __user *buff, size_t count);
extern ssize_t rtlx_write(int index, const void __user *buffer, size_t count);
extern unsigned int rtlx_read_poll(int index, int can_sleep);
extern unsigned int rtlx_write_poll(int index);
enum rtlx_state ;
#define RTLX_BUFFER_SIZE 2048
struct rtlx_channel ;
struct rtlx_info ;
