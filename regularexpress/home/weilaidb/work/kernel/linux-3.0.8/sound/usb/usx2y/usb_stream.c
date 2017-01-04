static unsigned usb_stream_next_packet_size(struct usb_stream_kernel *sk)
static void playback_prep_freqn(struct usb_stream_kernel *sk, struct urb *urb)
static void init_pipe_urbs(struct usb_stream_kernel *sk, unsigned use_packsize,
struct urb **urbs, char *transfer,
struct usb_device *dev, int pipe)
static void init_urbs(struct usb_stream_kernel *sk, unsigned use_packsize,
struct usb_device *dev, int in_pipe, int out_pipe)
static inline unsigned get_usb_full_speed_rate(unsigned rate)
static inline unsigned get_usb_high_speed_rate(unsigned rate)
void usb_stream_free(struct usb_stream_kernel *sk)
struct usb_stream *usb_stream_new(struct usb_stream_kernel *sk,
struct usb_device *dev,
unsigned in_endpoint, unsigned out_endpoint,
unsigned sample_rate, unsigned use_packsize,
unsigned period_frames, unsigned frame_size)
static bool balance_check(struct usb_stream_kernel *sk, struct urb *urb)
static bool balance_playback(struct usb_stream_kernel *sk, struct urb *urb)
static bool balance_capture(struct usb_stream_kernel *sk, struct urb *urb)
static void subs_set_complete(struct urb **urbs, void (*complete)(struct urb *))
static int usb_stream_prepare_playback(struct usb_stream_kernel *sk,
struct urb *inurb)
static void prepare_inurb(int number_of_packets, struct urb *iu)
static int submit_urbs(struct usb_stream_kernel *sk,
struct urb *inurb, struct urb *outurb)
static void loop_back(struct usb_stream *s)
static void loop_back(struct usb_stream *s)
static void stream_idle(struct usb_stream_kernel *sk,
struct urb *inurb, struct urb *outurb)
static void i_capture_idle(struct urb *urb)
static void i_playback_idle(struct urb *urb)
static void stream_start(struct usb_stream_kernel *sk,
struct urb *inurb, struct urb *outurb)
static void i_capture_start(struct urb *urb)
static void i_playback_start(struct urb *urb)
int usb_stream_start(struct usb_stream_kernel *sk)
void usb_stream_stop(struct usb_stream_kernel *sk)
