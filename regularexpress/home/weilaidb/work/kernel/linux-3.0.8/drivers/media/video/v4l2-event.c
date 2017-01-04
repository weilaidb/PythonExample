int v4l2_event_init(struct v4l2_fh *fh)
EXPORT_SYMBOL_GPL(v4l2_event_init);
int v4l2_event_alloc(struct v4l2_fh *fh, unsigned int n)
EXPORT_SYMBOL_GPL(v4l2_event_alloc);
#define list_kfree(list, type, member)				\
while (!list_empty(list))
void v4l2_event_free(struct v4l2_fh *fh)
EXPORT_SYMBOL_GPL(v4l2_event_free);
static int __v4l2_event_dequeue(struct v4l2_fh *fh, struct v4l2_event *event)
int v4l2_event_dequeue(struct v4l2_fh *fh, struct v4l2_event *event,
int nonblocking)
EXPORT_SYMBOL_GPL(v4l2_event_dequeue);
static struct v4l2_subscribed_event *v4l2_event_subscribed(
struct v4l2_fh *fh, u32 type)
void v4l2_event_queue(struct video_device *vdev, const struct v4l2_event *ev)
EXPORT_SYMBOL_GPL(v4l2_event_queue);
int v4l2_event_pending(struct v4l2_fh *fh)
EXPORT_SYMBOL_GPL(v4l2_event_pending);
int v4l2_event_subscribe(struct v4l2_fh *fh,
struct v4l2_event_subscription *sub)
EXPORT_SYMBOL_GPL(v4l2_event_subscribe);
static void v4l2_event_unsubscribe_all(struct v4l2_fh *fh)
int v4l2_event_unsubscribe(struct v4l2_fh *fh,
struct v4l2_event_subscription *sub)
EXPORT_SYMBOL_GPL(v4l2_event_unsubscribe);
