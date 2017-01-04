#define V4L2_EVENT_H
struct v4l2_fh;
struct video_device;
struct v4l2_kevent ;
struct v4l2_subscribed_event ;
struct v4l2_events ;
int v4l2_event_init(struct v4l2_fh *fh);
int v4l2_event_alloc(struct v4l2_fh *fh, unsigned int n);
void v4l2_event_free(struct v4l2_fh *fh);
int v4l2_event_dequeue(struct v4l2_fh *fh, struct v4l2_event *event,
int nonblocking);
void v4l2_event_queue(struct video_device *vdev, const struct v4l2_event *ev);
int v4l2_event_pending(struct v4l2_fh *fh);
int v4l2_event_subscribe(struct v4l2_fh *fh,
struct v4l2_event_subscription *sub);
int v4l2_event_unsubscribe(struct v4l2_fh *fh,
struct v4l2_event_subscription *sub);
