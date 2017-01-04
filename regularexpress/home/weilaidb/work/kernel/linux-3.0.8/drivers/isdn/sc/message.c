int receivemessage(int card, RspMessage *rspmsg)
int sendmessage(int card,
unsigned int procid,
unsigned int type,
unsigned int class,
unsigned int code,
unsigned int link,
unsigned int data_len,
unsigned int *data)
int send_and_receive(int card,
unsigned int procid,
unsigned char type,
unsigned char class,
unsigned char code,
unsigned char link,
unsigned char data_len,
unsigned char *data,
RspMessage *mesgdata,
int timeout)
