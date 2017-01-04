const ax25_address ax25_bcast =
;
const ax25_address ax25_defaddr =
;
const ax25_address null_ax25_address =
;
EXPORT_SYMBOL_GPL(ax25_bcast);
EXPORT_SYMBOL_GPL(ax25_defaddr);
EXPORT_SYMBOL(null_ax25_address);
char *ax2asc(char *buf, const ax25_address *a)
EXPORT_SYMBOL(ax2asc);
void asc2ax(ax25_address *addr, const char *callsign)
EXPORT_SYMBOL(asc2ax);
int ax25cmp(const ax25_address *a, const ax25_address *b)
EXPORT_SYMBOL(ax25cmp);
int ax25digicmp(const ax25_digi *digi1, const ax25_digi *digi2)
const unsigned char *ax25_addr_parse(const unsigned char *buf, int len,
ax25_address *src, ax25_address *dest, ax25_digi *digi, int *flags,
int *dama)
int ax25_addr_build(unsigned char *buf, const ax25_address *src,
const ax25_address *dest, const ax25_digi *d, int flag, int modulus)
int ax25_addr_size(const ax25_digi *dp)
void ax25_digi_invert(const ax25_digi *in, ax25_digi *out)
