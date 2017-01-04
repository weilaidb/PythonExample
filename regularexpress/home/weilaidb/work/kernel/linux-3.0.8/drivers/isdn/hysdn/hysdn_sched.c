int
hysdn_sched_rx(hysdn_card *card, unsigned char *buf, unsigned short len,
unsigned short chan)
int
hysdn_sched_tx(hysdn_card *card, unsigned char *buf,
unsigned short volatile *len, unsigned short volatile *chan,
unsigned short maxlen)
int
hysdn_tx_cfgline(hysdn_card *card, unsigned char *line, unsigned short chan)
