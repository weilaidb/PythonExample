#define PD_COMMON_H
#define SBUF_NUM	8
#define MAX_BUFFER_NUM	6
#define PK_PER_URB	32
#define ISO_PKT_SIZE	3072
#define POSEIDON_STATE_NONE		(0x0000)
#define POSEIDON_STATE_ANALOG		(0x0001)
#define POSEIDON_STATE_FM		(0x0002)
#define POSEIDON_STATE_DVBT		(0x0004)
#define POSEIDON_STATE_VBI		(0x0008)
#define POSEIDON_STATE_DISCONNECT	(0x0080)
#define PM_SUSPEND_DELAY	3
#define V4L_PAL_VBI_LINES	18
#define V4L_NTSC_VBI_LINES	12
#define V4L_PAL_VBI_FRAMESIZE	(V4L_PAL_VBI_LINES * 1440 * 2)
#define V4L_NTSC_VBI_FRAMESIZE	(V4L_NTSC_VBI_LINES * 1440 * 2)
#define TUNER_FREQ_MIN		(45000000)
#define TUNER_FREQ_MAX		(862000000)
struct vbi_data ;
struct running_context ;
struct video_data ;
enum pcm_stream_state ;
#define AUDIO_BUFS (3)
#define CAPTURE_STREAM_EN 1
struct poseidon_audio ;
struct radio_data ;
#define DVB_SBUF_NUM		4
#define DVB_URB_BUF_SIZE	0x2000
struct pd_dvb_adapter ;
struct front_face ;
struct poseidon ;
struct poseidon_format ;
struct poseidon_tvnorm ;
int pd_video_init(struct poseidon *);
void pd_video_exit(struct poseidon *);
int stop_all_video_stream(struct poseidon *);
int poseidon_audio_init(struct poseidon *);
int poseidon_audio_free(struct poseidon *);
int pm_alsa_suspend(struct poseidon *);
int pm_alsa_resume(struct poseidon *);
int pd_dvb_usb_device_init(struct poseidon *);
void pd_dvb_usb_device_exit(struct poseidon *);
void pd_dvb_usb_device_cleanup(struct poseidon *);
int pd_dvb_get_adapter_num(struct pd_dvb_adapter *);
void dvb_stop_streaming(struct pd_dvb_adapter *);
int poseidon_fm_init(struct poseidon *);
int poseidon_fm_exit(struct poseidon *);
struct video_device *vdev_init(struct poseidon *, struct video_device *);
int send_set_req(struct poseidon*, u8, s32, s32*);
int send_get_req(struct poseidon*, u8, s32, void*, s32*, s32);
s32 set_tuner_mode(struct poseidon*, unsigned char);
int alloc_bulk_urbs_generic(struct urb **urb_array, int num,
struct usb_device *udev, u8 ep_addr,
int buf_size, gfp_t gfp_flags,
usb_complete_t complete_fn, void *context);
void free_all_urb_generic(struct urb **urb_array, int num);
void poseidon_delete(struct kref *kref);
void destroy_video_device(struct video_device **v_dev);
extern int debug_mode;
void set_debug_mode(struct video_device *vfd, int debug_mode);
#define in_hibernation(pd) (pd->msg.event == PM_EVENT_FREEZE)
#define in_hibernation(pd) (0)
#define get_pm_count(p) (atomic_read(&(p)->interface->pm_usage_cnt))
#define log(a, ...) printk(KERN_DEBUG "\t[ %s : %.3d ] "a"\n", \
__func__, __LINE__,  ## __VA_ARGS__)
#define logpm(pd) do  while (0)
#define logs(f) do  while (0)
