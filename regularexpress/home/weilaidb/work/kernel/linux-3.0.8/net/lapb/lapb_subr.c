void lapb_clear_queues(struct lapb_cb *lapb)
void lapb_frames_acked(struct lapb_cb *lapb, unsigned short nr)
void lapb_requeue_frames(struct lapb_cb *lapb)
int lapb_validate_nr(struct lapb_cb *lapb, unsigned short nr)
int lapb_decode(struct lapb_cb *lapb, struct sk_buff *skb,
struct lapb_frame *frame)
void lapb_send_control(struct lapb_cb *lapb, int frametype,
int poll_bit, int type)
void lapb_transmit_frmr(struct lapb_cb *lapb)
