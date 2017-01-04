static int snd_us428ctls_vm_fault(struct vm_area_struct *area,
struct vm_fault *vmf)
static const struct vm_operations_struct us428ctls_vm_ops = ;
static int snd_us428ctls_mmap(struct snd_hwdep * hw, struct file *filp, struct vm_area_struct *area)
static unsigned int snd_us428ctls_poll(struct snd_hwdep *hw, struct file *file, poll_table *wait)
static int snd_usX2Y_hwdep_dsp_status(struct snd_hwdep *hw,
struct snd_hwdep_dsp_status *info)
static int usX2Y_create_usbmidi(struct snd_card *card)
static int usX2Y_create_alsa_devices(struct snd_card *card)
static int snd_usX2Y_hwdep_dsp_load(struct snd_hwdep *hw,
struct snd_hwdep_dsp_image *dsp)
int usX2Y_hwdep_new(struct snd_card *card, struct usb_device* device)
