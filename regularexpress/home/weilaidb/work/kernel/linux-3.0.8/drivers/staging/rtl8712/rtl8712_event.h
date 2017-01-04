#define _RTL8712_EVENT_H_
void r8712_event_handle(struct _adapter *padapter, uint *peventbuf);
void r8712_got_addbareq_event_callback(struct _adapter *adapter , u8 *pbuf);
enum rtl8712_c2h_event ;
static struct fwevent wlanevents[] = ;
