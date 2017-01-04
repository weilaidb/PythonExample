const struct comedi_lrange range_bipolar10 = ;
EXPORT_SYMBOL(range_bipolar10);
const struct comedi_lrange range_bipolar5 = ;
EXPORT_SYMBOL(range_bipolar5);
const struct comedi_lrange range_bipolar2_5 = ;
EXPORT_SYMBOL(range_bipolar2_5);
const struct comedi_lrange range_unipolar10 = ;
EXPORT_SYMBOL(range_unipolar10);
const struct comedi_lrange range_unipolar5 = ;
EXPORT_SYMBOL(range_unipolar5);
const struct comedi_lrange range_unknown = ;
EXPORT_SYMBOL(range_unknown);
int do_rangeinfo_ioctl(struct comedi_device *dev,
struct comedi_rangeinfo __user *arg)
static int aref_invalid(struct comedi_subdevice *s, unsigned int chanspec)
int comedi_check_chanlist(struct comedi_subdevice *s, int n,
unsigned int *chanlist)
EXPORT_SYMBOL(comedi_check_chanlist);
