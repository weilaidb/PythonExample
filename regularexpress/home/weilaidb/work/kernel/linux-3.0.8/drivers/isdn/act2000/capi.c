static actcapi_msgdsc valid_msg[] = ;
#define num_valid_imsg 27
int
actcapi_chkhdr(act2000_card * card, actcapi_msghdr *hdr)
#define ACTCAPI_MKHDR(l, c, s)
#define ACTCAPI_CHKSKB if (!skb)
#define ACTCAPI_QUEUE_TX
int
actcapi_listen_req(act2000_card *card)
int
actcapi_connect_req(act2000_card *card, act2000_chan *chan, char *phone,
char eaz, int si1, int si2)
static void
actcapi_connect_b3_req(act2000_card *card, act2000_chan *chan)
int
actcapi_manufacturer_req_net(act2000_card *card)
int
actcapi_manufacturer_req_errh(act2000_card *card)
int
actcapi_manufacturer_req_msn(act2000_card *card)
void
actcapi_select_b2_protocol_req(act2000_card *card, act2000_chan *chan)
static void
actcapi_select_b3_protocol_req(act2000_card *card, act2000_chan *chan)
static void
actcapi_listen_b3_req(act2000_card *card, act2000_chan *chan)
static void
actcapi_disconnect_req(act2000_card *card, act2000_chan *chan)
void
actcapi_disconnect_b3_req(act2000_card *card, act2000_chan *chan)
void
actcapi_connect_resp(act2000_card *card, act2000_chan *chan, __u8 cause)
static void
actcapi_connect_active_resp(act2000_card *card, act2000_chan *chan)
static void
actcapi_connect_b3_resp(act2000_card *card, act2000_chan *chan, __u8 rejectcause)
static void
actcapi_connect_b3_active_resp(act2000_card *card, act2000_chan *chan)
static void
actcapi_info_resp(act2000_card *card, act2000_chan *chan)
static void
actcapi_disconnect_b3_resp(act2000_card *card, act2000_chan *chan)
static void
actcapi_disconnect_resp(act2000_card *card, act2000_chan *chan)
static int
new_plci(act2000_card *card, __u16 plci)
static int
find_plci(act2000_card *card, __u16 plci)
static int
find_ncci(act2000_card *card, __u16 ncci)
static int
find_dialing(act2000_card *card, __u16 callref)
static int
actcapi_data_b3_ind(act2000_card *card, struct sk_buff *skb)
static int
handle_ack(act2000_card *card, act2000_chan *chan, __u8 blocknr)
void
actcapi_dispatch(struct work_struct *work)
static void
actcapi_debug_caddr(actcapi_addr *addr)
static void
actcapi_debug_ncpi(actcapi_ncpi *ncpi)
static void
actcapi_debug_dlpd(actcapi_dlpd *dlpd)
static void dump_skb(struct sk_buff *skb)
void
actcapi_debug_msg(struct sk_buff *skb, int direction)
