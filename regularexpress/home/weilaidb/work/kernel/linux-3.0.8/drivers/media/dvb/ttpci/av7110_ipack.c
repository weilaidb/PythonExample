void av7110_ipack_reset(struct ipack *p)
int av7110_ipack_init(struct ipack *p, int size,
void (*func)(u8 *buf, int size, void *priv))
void av7110_ipack_free(struct ipack *p)
static void send_ipack(struct ipack *p)
void av7110_ipack_flush(struct ipack *p)
static void write_ipack(struct ipack *p, const u8 *data, int count)
int av7110_ipack_instant_repack (const u8 *buf, int count, struct ipack *p)
