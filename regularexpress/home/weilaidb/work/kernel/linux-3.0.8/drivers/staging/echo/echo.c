#define MIN_TX_POWER_FOR_ADAPTION	64
#define MIN_RX_POWER_FOR_ADAPTION	64
#define DTD_HANGOVER			600
#define DC_LOG2BETA			3
static inline void lms_adapt_bg(struct oslec_state *ec, int clean, int shift)
static inline void lms_adapt_bg(struct oslec_state *ec, int clean, int shift)
static inline int top_bit(unsigned int bits)
struct oslec_state *oslec_create(int len, int adaption_mode)
EXPORT_SYMBOL_GPL(oslec_create);
void oslec_free(struct oslec_state *ec)
EXPORT_SYMBOL_GPL(oslec_free);
void oslec_adaption_mode(struct oslec_state *ec, int adaption_mode)
EXPORT_SYMBOL_GPL(oslec_adaption_mode);
void oslec_flush(struct oslec_state *ec)
EXPORT_SYMBOL_GPL(oslec_flush);
void oslec_snapshot(struct oslec_state *ec)
EXPORT_SYMBOL_GPL(oslec_snapshot);
int16_t oslec_update(struct oslec_state *ec, int16_t tx, int16_t rx)
EXPORT_SYMBOL_GPL(oslec_update);
int16_t oslec_hpf_tx(struct oslec_state * ec, int16_t tx)
EXPORT_SYMBOL_GPL(oslec_hpf_tx);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("David Rowe");
MODULE_DESCRIPTION("Open Source Line Echo Canceller");
MODULE_VERSION("0.3.0");
