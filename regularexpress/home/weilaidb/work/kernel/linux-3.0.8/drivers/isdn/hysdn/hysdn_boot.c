#define POF_READ_FILE_HEAD  0
#define POF_READ_TAG_HEAD   1
#define POF_READ_TAG_DATA   2
struct boot_data ;
static void
StartDecryption(struct boot_data *boot)
static void
DecryptBuf(struct boot_data *boot, int cnt)
static int
pof_handle_data(hysdn_card * card, int datlen)
int
pof_write_buffer(hysdn_card * card, int datlen)
int
pof_write_open(hysdn_card * card, unsigned char **bufp)
int
pof_write_close(hysdn_card * card)
int
EvalSysrTokData(hysdn_card *card, unsigned char *cp, int len)
