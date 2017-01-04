static inline int
count_list_member(struct list_head *head)
void
dsp_cmx_debug(struct dsp *dsp)
static struct dsp_conf *
dsp_cmx_search_conf(u32 id)
static int
dsp_cmx_add_conf_member(struct dsp *dsp, struct dsp_conf *conf)
int
dsp_cmx_del_conf_member(struct dsp *dsp)
static struct dsp_conf
*dsp_cmx_new_conf(u32 id)
int
dsp_cmx_del_conf(struct dsp_conf *conf)
static void
dsp_cmx_hw_message(struct dsp *dsp, u32 message, u32 param1, u32 param2,
u32 param3, u32 param4)
void
dsp_cmx_hardware(struct dsp_conf *conf, struct dsp *dsp)
int
dsp_cmx_conf(struct dsp *dsp, u32 conf_id)
int delaycount;
static void
showdelay(struct dsp *dsp, int samples, int delay)
void
dsp_cmx_receive(struct dsp *dsp, struct sk_buff *skb)
static void
dsp_cmx_send_member(struct dsp *dsp, int len, s32 *c, int members)
static u32	jittercount;
struct timer_list dsp_spl_tl;
u32	dsp_spl_jiffies;
static u16	dsp_count;
static int	dsp_count_valid ;
void
dsp_cmx_send(void *arg)
{
struct dsp_conf *conf;
struct dsp_conf_member *member;
struct dsp *dsp;
int mustmix, members;
static s32 mixbuffer[MAX_POLL+100];
s32 *c;
u8 *p, *q;
int r, rr;
int jittercheck = 0, delay, i;
u_long flags;
u16 length, count;
spin_lock_irqsave(&dsp_lock, flags);
if (!dsp_count_valid)  else
if (length > MAX_POLL + 100)
length = MAX_POLL + 100;
jittercount += length;
if (jittercount >= 8000)
list_for_each_entry(dsp, &dsp_ilist, list)
list_for_each_entry(conf, &conf_ilist, list)
void
dsp_cmx_transmit(struct dsp *dsp, struct sk_buff *skb)
void
dsp_cmx_hdlc(struct dsp *dsp, struct sk_buff *skb)
