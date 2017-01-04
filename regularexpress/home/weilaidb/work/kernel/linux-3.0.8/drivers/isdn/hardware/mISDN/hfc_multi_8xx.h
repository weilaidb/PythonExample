#define IMAP_ADDR	0xFFF00000
static void
HFC_outb_embsd(struct hfc_multi *hc, u_char reg, u_char val,
const char *function, int line)
HFC_outb_embsd(struct hfc_multi *hc, u_char reg, u_char val)
static u_char
HFC_inb_embsd(struct hfc_multi *hc, u_char reg, const char *function, int line)
HFC_inb_embsd(struct hfc_multi *hc, u_char reg)
static u_short
HFC_inw_embsd(struct hfc_multi *hc, u_char reg, const char *function, int line)
HFC_inw_embsd(struct hfc_multi *hc, u_char reg)
static void
HFC_wait_embsd(struct hfc_multi *hc, const char *function, int line)
HFC_wait_embsd(struct hfc_multi *hc)
void
write_fifo_embsd(struct hfc_multi *hc, u_char *data, int len)
void
read_fifo_embsd(struct hfc_multi *hc, u_char *data, int len)
static int
setup_embedded(struct hfc_multi *hc, struct hm_map *m)
