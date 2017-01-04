static struct mISDN_dsp_element_arg args[] = ;
static struct mISDN_dsp_element dsp_hwec_p = ;
struct mISDN_dsp_element *dsp_hwec = &dsp_hwec_p;
void dsp_hwec_enable(struct dsp *dsp, const char *arg)
void dsp_hwec_disable(struct dsp *dsp)
int dsp_hwec_init(void)
void dsp_hwec_exit(void)
