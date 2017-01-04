#if defined(USX2Y_NRPACKS_VARIABLE) || USX2Y_NRPACKS == 1
static int usX2Y_usbpcm_urb_capt_retire(struct snd_usX2Y_substream *subs)
static inline int usX2Y_iso_frames_per_buffer(struct snd_pcm_runtime *runtime,
struct usX2Ydev * usX2Y)
static int usX2Y_hwdep_urb_play_prepare(struct snd_usX2Y_substream *subs,
struct urb *urb)
static inline void usX2Y_usbpcm_urb_capt_iso_advance(struct snd_usX2Y_substream *subs,
struct urb *urb)
static inline int usX2Y_usbpcm_usbframe_complete(struct snd_usX2Y_substream *capsubs,
struct snd_usX2Y_substream *capsubs2,
struct snd_usX2Y_substream *playbacksubs,
int frame)
static void i_usX2Y_usbpcm_urb_complete(struct urb *urb)
static void usX2Y_hwdep_urb_release(struct urb **urb)
static void usX2Y_usbpcm_urbs_release(struct snd_usX2Y_substream *subs)
static void usX2Y_usbpcm_subs_startup_finish(struct usX2Ydev * usX2Y)
static void i_usX2Y_usbpcm_subs_startup(struct urb *urb)
static int usX2Y_usbpcm_urbs_allocate(struct snd_usX2Y_substream *subs)
static int snd_usX2Y_usbpcm_hw_free(struct snd_pcm_substream *substream)
static void usX2Y_usbpcm_subs_startup(struct snd_usX2Y_substream *subs)
static int usX2Y_usbpcm_urbs_start(struct snd_usX2Y_substream *subs)
static int snd_usX2Y_usbpcm_prepare(struct snd_pcm_substream *substream)
static struct snd_pcm_hardware snd_usX2Y_4c =
;
static int snd_usX2Y_usbpcm_open(struct snd_pcm_substream *substream)
static int snd_usX2Y_usbpcm_close(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_usX2Y_usbpcm_ops =
;
static int usX2Y_pcms_lock_check(struct snd_card *card)
static void usX2Y_pcms_unlock(struct snd_card *card)
static int snd_usX2Y_hwdep_pcm_open(struct snd_hwdep *hw, struct file *file)
static int snd_usX2Y_hwdep_pcm_release(struct snd_hwdep *hw, struct file *file)
static void snd_usX2Y_hwdep_pcm_vm_open(struct vm_area_struct *area)
static void snd_usX2Y_hwdep_pcm_vm_close(struct vm_area_struct *area)
static int snd_usX2Y_hwdep_pcm_vm_fault(struct vm_area_struct *area,
struct vm_fault *vmf)
static const struct vm_operations_struct snd_usX2Y_hwdep_pcm_vm_ops = ;
static int snd_usX2Y_hwdep_pcm_mmap(struct snd_hwdep * hw, struct file *filp, struct vm_area_struct *area)
static void snd_usX2Y_hwdep_pcm_private_free(struct snd_hwdep *hwdep)
int usX2Y_hwdep_pcm_new(struct snd_card *card)
int usX2Y_hwdep_pcm_new(struct snd_card *card)
