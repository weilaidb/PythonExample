#define PKT_READY 0
#define PKT_DISPOSED 1
void dvb_ringbuffer_init(struct dvb_ringbuffer *rbuf, void *data, size_t len)
int dvb_ringbuffer_empty(struct dvb_ringbuffer *rbuf)
ssize_t dvb_ringbuffer_free(struct dvb_ringbuffer *rbuf)
ssize_t dvb_ringbuffer_avail(struct dvb_ringbuffer *rbuf)
void dvb_ringbuffer_flush(struct dvb_ringbuffer *rbuf)
EXPORT_SYMBOL(dvb_ringbuffer_flush);
void dvb_ringbuffer_reset(struct dvb_ringbuffer *rbuf)
void dvb_ringbuffer_flush_spinlock_wakeup(struct dvb_ringbuffer *rbuf)
ssize_t dvb_ringbuffer_read_user(struct dvb_ringbuffer *rbuf, u8 __user *buf, size_t len)
void dvb_ringbuffer_read(struct dvb_ringbuffer *rbuf, u8 *buf, size_t len)
ssize_t dvb_ringbuffer_write(struct dvb_ringbuffer *rbuf, const u8 *buf, size_t len)
ssize_t dvb_ringbuffer_pkt_write(struct dvb_ringbuffer *rbuf, u8* buf, size_t len)
ssize_t dvb_ringbuffer_pkt_read_user(struct dvb_ringbuffer *rbuf, size_t idx,
int offset, u8 __user *buf, size_t len)
ssize_t dvb_ringbuffer_pkt_read(struct dvb_ringbuffer *rbuf, size_t idx,
int offset, u8* buf, size_t len)
void dvb_ringbuffer_pkt_dispose(struct dvb_ringbuffer *rbuf, size_t idx)
ssize_t dvb_ringbuffer_pkt_next(struct dvb_ringbuffer *rbuf, size_t idx, size_t* pktlen)
EXPORT_SYMBOL(dvb_ringbuffer_init);
EXPORT_SYMBOL(dvb_ringbuffer_empty);
EXPORT_SYMBOL(dvb_ringbuffer_free);
EXPORT_SYMBOL(dvb_ringbuffer_avail);
EXPORT_SYMBOL(dvb_ringbuffer_flush_spinlock_wakeup);
EXPORT_SYMBOL(dvb_ringbuffer_read_user);
EXPORT_SYMBOL(dvb_ringbuffer_read);
EXPORT_SYMBOL(dvb_ringbuffer_write);
