#define __LINUX_USB_IOWARRIOR_H
#define CODEMERCS_MAGIC_NUMBER	0xC0
#define IOW_WRITE	_IOW(CODEMERCS_MAGIC_NUMBER, 1, __u8 *)
#define IOW_READ	_IOW(CODEMERCS_MAGIC_NUMBER, 2, __u8 *)
struct iowarrior_info ;
#define IOW_GETINFO _IOR(CODEMERCS_MAGIC_NUMBER, 3, struct iowarrior_info)
