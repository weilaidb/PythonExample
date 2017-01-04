#define __PVRUSB2_IO_H
typedef void (*pvr2_stream_callback)(void *);
enum pvr2_buffer_state ;
struct pvr2_stream;
struct pvr2_buffer;
struct pvr2_stream_stats ;
struct pvr2_stream *pvr2_stream_create(void);
void pvr2_stream_destroy(struct pvr2_stream *);
void pvr2_stream_setup(struct pvr2_stream *,
struct usb_device *dev,int endpoint,
unsigned int tolerance);
void pvr2_stream_set_callback(struct pvr2_stream *,
pvr2_stream_callback func,
void *data);
void pvr2_stream_get_stats(struct pvr2_stream *,
struct pvr2_stream_stats *,
int zero_counts);
int pvr2_stream_get_buffer_count(struct pvr2_stream *);
int pvr2_stream_set_buffer_count(struct pvr2_stream *,unsigned int);
struct pvr2_buffer *pvr2_stream_get_idle_buffer(struct pvr2_stream *);
struct pvr2_buffer *pvr2_stream_get_ready_buffer(struct pvr2_stream *);
struct pvr2_buffer *pvr2_stream_get_buffer(struct pvr2_stream *sp,int id);
int pvr2_stream_get_ready_count(struct pvr2_stream *);
void pvr2_stream_kill(struct pvr2_stream *);
int pvr2_buffer_set_buffer(struct pvr2_buffer *,void *ptr,unsigned int cnt);
unsigned int pvr2_buffer_get_count(struct pvr2_buffer *);
int pvr2_buffer_get_status(struct pvr2_buffer *);
int pvr2_buffer_get_id(struct pvr2_buffer *);
int pvr2_buffer_queue(struct pvr2_buffer *);
