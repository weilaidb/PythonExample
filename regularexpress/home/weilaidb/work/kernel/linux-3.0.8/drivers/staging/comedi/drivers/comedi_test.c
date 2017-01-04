struct waveform_board ;
#define N_CHANS 8
static const struct waveform_board waveform_boards[] = ;
#define thisboard ((const struct waveform_board *)dev->board_ptr)
struct waveform_private ;
#define devpriv ((struct waveform_private *)dev->private)
static int waveform_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int waveform_detach(struct comedi_device *dev);
static struct comedi_driver driver_waveform = ;
static int __init driver_waveform_init_module(void)
static void __exit driver_waveform_cleanup_module(void)
module_init(driver_waveform_init_module);
module_exit(driver_waveform_cleanup_module);
static int waveform_ai_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_cmd *cmd);
static int waveform_ai_cmd(struct comedi_device *dev,
struct comedi_subdevice *s);
static int waveform_ai_cancel(struct comedi_device *dev,
struct comedi_subdevice *s);
static int waveform_ai_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int waveform_ao_insn_write(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static short fake_sawtooth(struct comedi_device *dev, unsigned int range,
unsigned long current_time);
static short fake_squarewave(struct comedi_device *dev, unsigned int range,
unsigned long current_time);
static short fake_flatline(struct comedi_device *dev, unsigned int range,
unsigned long current_time);
static short fake_waveform(struct comedi_device *dev, unsigned int channel,
unsigned int range, unsigned long current_time);
static const int nano_per_micro = 1000;
static const struct comedi_lrange waveform_ai_ranges = ;
static void waveform_ai_interrupt(unsigned long arg)
static int waveform_attach(struct comedi_device *dev,
struct comedi_devconfig *it)
static int waveform_detach(struct comedi_device *dev)
static int waveform_ai_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_cmd *cmd)
static int waveform_ai_cmd(struct comedi_device *dev,
struct comedi_subdevice *s)
static int waveform_ai_cancel(struct comedi_device *dev,
struct comedi_subdevice *s)
static short fake_sawtooth(struct comedi_device *dev, unsigned int range_index,
unsigned long current_time)
static short fake_squarewave(struct comedi_device *dev,
unsigned int range_index,
unsigned long current_time)
static short fake_flatline(struct comedi_device *dev, unsigned int range_index,
unsigned long current_time)
static short fake_waveform(struct comedi_device *dev, unsigned int channel,
unsigned int range, unsigned long current_time)
static int waveform_ai_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int waveform_ao_insn_write(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
