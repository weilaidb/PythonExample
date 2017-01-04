#define OCOTP_WORD_OFFSET		0x20
#define OCOTP_WORD_COUNT		0x20
#define BM_OCOTP_CTRL_BUSY		(1 << 8)
#define BM_OCOTP_CTRL_ERROR		(1 << 9)
#define BM_OCOTP_CTRL_RD_BANK_OPEN	(1 << 12)
static DEFINE_MUTEX(ocotp_mutex);
static u32 ocotp_words[OCOTP_WORD_COUNT];
const u32 *mxs_get_ocotp(void)
