static void smart4_submit_command(ctlr_info_t *h, cmdlist_t *c)
static void smart4_intr_mask(ctlr_info_t *h, unsigned long val)
static unsigned long smart4_fifo_full(ctlr_info_t *h)
static unsigned long smart4_completed(ctlr_info_t *h)
static unsigned long smart4_intr_pending(ctlr_info_t *h)
static struct access_method smart4_access = ;
static void smart2_submit_command(ctlr_info_t *h, cmdlist_t *c)
static void smart2_intr_mask(ctlr_info_t *h, unsigned long val)
static unsigned long smart2_fifo_full(ctlr_info_t *h)
static unsigned long smart2_completed(ctlr_info_t *h)
static unsigned long smart2_intr_pending(ctlr_info_t *h)
static struct access_method smart2_access = ;
static void smart2e_submit_command(ctlr_info_t *h, cmdlist_t *c)
static void smart2e_intr_mask(ctlr_info_t *h, unsigned long val)
static unsigned long smart2e_fifo_full(ctlr_info_t *h)
static unsigned long smart2e_completed(ctlr_info_t *h)
static unsigned long smart2e_intr_pending(ctlr_info_t *h)
static struct access_method smart2e_access = ;
#define SMART1_SYSTEM_MASK		0xC8E
#define SMART1_SYSTEM_DOORBELL		0xC8F
#define SMART1_LOCAL_MASK		0xC8C
#define SMART1_LOCAL_DOORBELL		0xC8D
#define SMART1_INTR_MASK		0xC89
#define SMART1_LISTADDR			0xC90
#define SMART1_LISTLEN			0xC94
#define SMART1_TAG			0xC97
#define SMART1_COMPLETE_ADDR		0xC98
#define SMART1_LISTSTATUS		0xC9E
#define CHANNEL_BUSY			0x01
#define CHANNEL_CLEAR			0x02
static void smart1_submit_command(ctlr_info_t *h, cmdlist_t *c)
static void smart1_intr_mask(ctlr_info_t *h, unsigned long val)
static unsigned long smart1_fifo_full(ctlr_info_t *h)
static unsigned long smart1_completed(ctlr_info_t *h)
static unsigned long smart1_intr_pending(ctlr_info_t *h)
static struct access_method smart1_access = ;
