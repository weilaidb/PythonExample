static u32 freq[4] = ;
static unsigned int ac3_bitrates[32] =
;
static u32 ac3_frames[3][32] =
;
int dvb_filter_get_ac3info(u8 *mbuf, int count, struct dvb_audio_info *ai, int pr)
EXPORT_SYMBOL(dvb_filter_get_ac3info);
void dvb_filter_pes2ts_init(struct dvb_filter_pes2ts *p2ts, unsigned short pid,
dvb_filter_pes2ts_cb_t *cb, void *priv)
EXPORT_SYMBOL(dvb_filter_pes2ts_init);
int dvb_filter_pes2ts(struct dvb_filter_pes2ts *p2ts, unsigned char *pes,
int len, int payload_start)
EXPORT_SYMBOL(dvb_filter_pes2ts);
