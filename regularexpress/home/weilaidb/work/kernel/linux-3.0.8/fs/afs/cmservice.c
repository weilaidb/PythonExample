static int afs_deliver_cb_init_call_back_state(struct afs_call *,
struct sk_buff *, bool);
static int afs_deliver_cb_init_call_back_state3(struct afs_call *,
struct sk_buff *, bool);
static int afs_deliver_cb_probe(struct afs_call *, struct sk_buff *, bool);
static int afs_deliver_cb_callback(struct afs_call *, struct sk_buff *, bool);
static int afs_deliver_cb_probe_uuid(struct afs_call *, struct sk_buff *, bool);
static int afs_deliver_cb_tell_me_about_yourself(struct afs_call *,
struct sk_buff *, bool);
static void afs_cm_destructor(struct afs_call *);
static const struct afs_call_type afs_SRXCBCallBack = ;
static const struct afs_call_type afs_SRXCBInitCallBackState = ;
static const struct afs_call_type afs_SRXCBInitCallBackState3 = ;
static const struct afs_call_type afs_SRXCBProbe = ;
static const struct afs_call_type afs_SRXCBProbeUuid = ;
static const struct afs_call_type afs_SRXCBTellMeAboutYourself = ;
bool afs_cm_incoming_call(struct afs_call *call)
static void afs_cm_destructor(struct afs_call *call)
static void SRXAFSCB_CallBack(struct work_struct *work)
static int afs_deliver_cb_callback(struct afs_call *call, struct sk_buff *skb,
bool last)
static void SRXAFSCB_InitCallBackState(struct work_struct *work)
static int afs_deliver_cb_init_call_back_state(struct afs_call *call,
struct sk_buff *skb,
bool last)
static int afs_deliver_cb_init_call_back_state3(struct afs_call *call,
struct sk_buff *skb,
bool last)
static void SRXAFSCB_Probe(struct work_struct *work)
static int afs_deliver_cb_probe(struct afs_call *call, struct sk_buff *skb,
bool last)
static void SRXAFSCB_ProbeUuid(struct work_struct *work)
static int afs_deliver_cb_probe_uuid(struct afs_call *call, struct sk_buff *skb,
bool last)
static void SRXAFSCB_TellMeAboutYourself(struct work_struct *work)
static int afs_deliver_cb_tell_me_about_yourself(struct afs_call *call,
struct sk_buff *skb, bool last)
