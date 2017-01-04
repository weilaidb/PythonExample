void line6_dump_started(struct line6_dump_request *l6dr, int dest)
void line6_invalidate_current(struct line6_dump_request *l6dr)
void line6_dump_finished(struct line6_dump_request *l6dr)
int line6_dump_request_async(struct line6_dump_request *l6dr,
struct usb_line6 *line6, int num, int dest)
int line6_dump_wait_interruptible(struct line6_dump_request *l6dr)
void line6_dump_wait(struct line6_dump_request *l6dr)
int line6_dump_wait_timeout(struct line6_dump_request *l6dr, long timeout)
int line6_dumpreq_initbuf(struct line6_dump_request *l6dr, const void *buf,
size_t len, int num)
int line6_dumpreq_init(struct line6_dump_request *l6dr, const void *buf,
size_t len)
void line6_dumpreq_destructbuf(struct line6_dump_request *l6dr, int num)
void line6_dumpreq_destruct(struct line6_dump_request *l6dr)
