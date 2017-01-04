MODULE_DESCRIPTION("some code shared by bttv and cx88xx drivers");
MODULE_AUTHOR("Gerd Knorr");
MODULE_LICENSE("GPL");
static unsigned int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug,"debug messages, default is 0 (no)");
static int memcnt;
void btcx_riscmem_free(struct pci_dev *pci,
struct btcx_riscmem *risc)
int btcx_riscmem_alloc(struct pci_dev *pci,
struct btcx_riscmem *risc,
unsigned int size)
int
btcx_screen_clips(int swidth, int sheight, struct v4l2_rect *win,
struct v4l2_clip *clips, unsigned int n)
int
btcx_align(struct v4l2_rect *win, struct v4l2_clip *clips, unsigned int n, int mask)
void
btcx_sort_clips(struct v4l2_clip *clips, unsigned int nclips)
void
btcx_calc_skips(int line, int width, int *maxy,
struct btcx_skiplist *skips, unsigned int *nskips,
const struct v4l2_clip *clips, unsigned int nclips)
EXPORT_SYMBOL(btcx_riscmem_alloc);
EXPORT_SYMBOL(btcx_riscmem_free);
EXPORT_SYMBOL(btcx_screen_clips);
EXPORT_SYMBOL(btcx_align);
EXPORT_SYMBOL(btcx_sort_clips);
EXPORT_SYMBOL(btcx_calc_skips);
