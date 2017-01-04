#define pr_fmt(fmt) KBUILD_MODNAME ":%s: " fmt, __func__
#undef WAIT_FOR_DEMON
struct atm_vcc *sigd = NULL;
static DECLARE_WAIT_QUEUE_HEAD(sigd_sleep);
static void sigd_put_skb(struct sk_buff *skb)
static void modify_qos(struct atm_vcc *vcc, struct atmsvc_msg *msg)
static int sigd_send(struct atm_vcc *vcc, struct sk_buff *skb)
void sigd_enq2(struct atm_vcc *vcc, enum atmsvc_msg_type type,
struct atm_vcc *listen_vcc, const struct sockaddr_atmpvc *pvc,
const struct sockaddr_atmsvc *svc, const struct atm_qos *qos,
int reply)
void sigd_enq(struct atm_vcc *vcc, enum atmsvc_msg_type type,
struct atm_vcc *listen_vcc, const struct sockaddr_atmpvc *pvc,
const struct sockaddr_atmsvc *svc)
static void purge_vcc(struct atm_vcc *vcc)
static void sigd_close(struct atm_vcc *vcc)
static struct atmdev_ops sigd_dev_ops = ;
static struct atm_dev sigd_dev = ;
int sigd_attach(struct atm_vcc *vcc)
