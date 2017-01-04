static DEFINE_MUTEX(mem_ctls_mutex);
static LIST_HEAD(mc_devices);
static void edac_mc_dump_channel(struct channel_info *chan)
static void edac_mc_dump_csrow(struct csrow_info *csrow)
static void edac_mc_dump_mci(struct mem_ctl_info *mci)
const char *edac_mem_types[] = ;
EXPORT_SYMBOL_GPL(edac_mem_types);
void *edac_align_ptr(void *ptr, unsigned size)
struct mem_ctl_info *edac_mc_alloc(unsigned sz_pvt, unsigned nr_csrows,
unsigned nr_chans, int edac_index)
EXPORT_SYMBOL_GPL(edac_mc_alloc);
void edac_mc_free(struct mem_ctl_info *mci)
EXPORT_SYMBOL_GPL(edac_mc_free);
struct mem_ctl_info *find_mci_by_dev(struct device *dev)
EXPORT_SYMBOL_GPL(find_mci_by_dev);
static int edac_mc_assert_error_check_and_clear(void)
static void edac_mc_workq_function(struct work_struct *work_req)
static void edac_mc_workq_setup(struct mem_ctl_info *mci, unsigned msec)
static void edac_mc_workq_teardown(struct mem_ctl_info *mci)
void edac_mc_reset_delay_period(int value)
static int add_mc_to_global_list(struct mem_ctl_info *mci)
static void del_mc_from_global_list(struct mem_ctl_info *mci)
struct mem_ctl_info *edac_mc_find(int idx)
EXPORT_SYMBOL(edac_mc_find);
int edac_mc_add_mc(struct mem_ctl_info *mci)
EXPORT_SYMBOL_GPL(edac_mc_add_mc);
struct mem_ctl_info *edac_mc_del_mc(struct device *dev)
EXPORT_SYMBOL_GPL(edac_mc_del_mc);
static void edac_mc_scrub_block(unsigned long page, unsigned long offset,
u32 size)
int edac_mc_find_csrow_by_page(struct mem_ctl_info *mci, unsigned long page)
EXPORT_SYMBOL_GPL(edac_mc_find_csrow_by_page);
if (row >= mci->nr_csrows || row < 0)
if (channel >= mci->csrows[row].nr_channels || channel < 0)
if (edac_mc_get_log_ce())
edac_mc_printk(mci, KERN_WARNING,
"CE page 0x%lx, offset 0x%lx, grain %d, syndrome "
"0x%lx, row %d, channel %d, label \"%s\": %s\n",
page_frame_number, offset_in_page,
mci->csrows[row].grain, syndrome, row, channel,
mci->csrows[row].channels[channel].label, msg);
mci->ce_count++;
mci->csrows[row].ce_count++;
mci->csrows[row].channels[channel].ce_count++;
if (mci->scrub_mode & SCRUB_SW_SRC)
}
EXPORT_SYMBOL_GPL(edac_mc_handle_ce);
void edac_mc_handle_ce_no_info(struct mem_ctl_info *mci, const char *msg)
EXPORT_SYMBOL_GPL(edac_mc_handle_ce_no_info);
void edac_mc_handle_ue(struct mem_ctl_info *mci,
unsigned long page_frame_number,
unsigned long offset_in_page, int row, const char *msg)
EXPORT_SYMBOL_GPL(edac_mc_handle_ue);
void edac_mc_handle_ue_no_info(struct mem_ctl_info *mci, const char *msg)
EXPORT_SYMBOL_GPL(edac_mc_handle_ue_no_info);
void edac_mc_handle_fbd_ue(struct mem_ctl_info *mci,
unsigned int csrow,
unsigned int channela,
unsigned int channelb, char *msg)
EXPORT_SYMBOL(edac_mc_handle_fbd_ue);
void edac_mc_handle_fbd_ce(struct mem_ctl_info *mci,
unsigned int csrow, unsigned int channel, char *msg)
EXPORT_SYMBOL(edac_mc_handle_fbd_ce);
