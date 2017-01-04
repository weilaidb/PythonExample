int capi_conn_req(const char * calledPN, struct sk_buff **skb, int proto)
int capi_conn_resp(struct pcbit_chan* chan, struct sk_buff **skb)
int capi_conn_active_req(struct pcbit_chan* chan, struct sk_buff **skb)
int capi_conn_active_resp(struct pcbit_chan* chan, struct sk_buff **skb)
int capi_select_proto_req(struct pcbit_chan *chan, struct sk_buff **skb,
int outgoing)
int capi_activate_transp_req(struct pcbit_chan *chan, struct sk_buff **skb)
int capi_tdata_req(struct pcbit_chan* chan, struct sk_buff *skb)
int capi_tdata_resp(struct pcbit_chan *chan, struct sk_buff ** skb)
int capi_disc_req(ushort callref, struct sk_buff **skb, u_char cause)
int capi_disc_resp(struct pcbit_chan *chan, struct sk_buff **skb)
int capi_decode_conn_ind(struct pcbit_chan * chan,
struct sk_buff *skb,
struct callb_data *info)
int capi_decode_conn_conf(struct pcbit_chan * chan, struct sk_buff *skb,
int *complete)
int capi_decode_conn_actv_ind(struct pcbit_chan * chan, struct sk_buff *skb)
int capi_decode_conn_actv_conf(struct pcbit_chan * chan, struct sk_buff *skb)
int capi_decode_sel_proto_conf(struct pcbit_chan *chan, struct sk_buff *skb)
int capi_decode_actv_trans_conf(struct pcbit_chan *chan, struct sk_buff *skb)
int capi_decode_disc_ind(struct pcbit_chan *chan, struct sk_buff *skb)
int capi_decode_debug_188(u_char *hdr, ushort hdrlen)
