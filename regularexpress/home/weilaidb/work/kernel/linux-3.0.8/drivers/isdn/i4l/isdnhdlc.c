MODULE_AUTHOR("Wolfgang Mües <wolfgang@iksw-muees.de>, "
"Frode Isaksen <fisaksen@bewan.com>, "
"Kai Germaschewski <kai.germaschewski@gmx.de>");
MODULE_DESCRIPTION("General purpose ISDN HDLC decoder");
MODULE_LICENSE("GPL");
enum ;
enum ;
void isdnhdlc_rcv_init(struct isdnhdlc_vars *hdlc, u32 features)
EXPORT_SYMBOL(isdnhdlc_out_init);
void isdnhdlc_out_init(struct isdnhdlc_vars *hdlc, u32 features)
EXPORT_SYMBOL(isdnhdlc_rcv_init);
static int
check_frame(struct isdnhdlc_vars *hdlc)
int isdnhdlc_decode(struct isdnhdlc_vars *hdlc, const u8 *src, int slen,
int *count, u8 *dst, int dsize)
EXPORT_SYMBOL(isdnhdlc_decode);
int isdnhdlc_encode(struct isdnhdlc_vars *hdlc, const u8 *src, u16 slen,
int *count, u8 *dst, int dsize)
EXPORT_SYMBOL(isdnhdlc_encode);
