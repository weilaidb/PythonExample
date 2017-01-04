#define _LINUX_MEI_H
#define IOCTL_MEI_CONNECT_CLIENT \
_IOWR('H' , 0x01, struct mei_connect_client_data)
struct mei_client ;
struct mei_connect_client_data ;
