struct dsp_pipeline_entry ;
struct dsp_element_entry ;
static LIST_HEAD(dsp_elements);
static struct class *elements_class;
static ssize_t
attr_show_args(struct device *dev, struct device_attribute *attr, char *buf)
static struct device_attribute element_attributes[] = ;
static void
mISDN_dsp_dev_release(struct device *dev)
int mISDN_dsp_element_register(struct mISDN_dsp_element *elem)
EXPORT_SYMBOL(mISDN_dsp_element_register);
void mISDN_dsp_element_unregister(struct mISDN_dsp_element *elem)
EXPORT_SYMBOL(mISDN_dsp_element_unregister);
int dsp_pipeline_module_init(void)
void dsp_pipeline_module_exit(void)
int dsp_pipeline_init(struct dsp_pipeline *pipeline)
static inline void _dsp_pipeline_destroy(struct dsp_pipeline *pipeline)
void dsp_pipeline_destroy(struct dsp_pipeline *pipeline)
int dsp_pipeline_build(struct dsp_pipeline *pipeline, const char *cfg)
void dsp_pipeline_process_tx(struct dsp_pipeline *pipeline, u8 *data, int len)
void dsp_pipeline_process_rx(struct dsp_pipeline *pipeline, u8 *data, int len,
unsigned int txlen)
