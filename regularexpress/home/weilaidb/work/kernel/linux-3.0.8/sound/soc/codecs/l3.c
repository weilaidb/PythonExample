static void sendbyte(struct l3_pins *adap, unsigned int byte)
static void sendbytes(struct l3_pins *adap, const u8 *buf,
int len)
int l3_write(struct l3_pins *adap, u8 addr, u8 *data, int len)
EXPORT_SYMBOL_GPL(l3_write);
MODULE_DESCRIPTION("L3 bit-banging driver");
MODULE_AUTHOR("Christian Pellegrin <chripell@evolware.org>");
MODULE_LICENSE("GPL");
