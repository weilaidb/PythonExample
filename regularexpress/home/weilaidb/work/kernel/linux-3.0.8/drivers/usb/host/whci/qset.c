struct whc_qset *qset_alloc(struct whc *whc, gfp_t mem_flags)
static void qset_fill_qh(struct whc *whc, struct whc_qset *qset, struct urb *urb)
void qset_clear(struct whc *whc, struct whc_qset *qset)
void qset_reset(struct whc *whc, struct whc_qset *qset)
struct whc_qset *get_qset(struct whc *whc, struct urb *urb,
gfp_t mem_flags)
void qset_remove_complete(struct whc *whc, struct whc_qset *qset)
enum whc_update qset_add_qtds(struct whc *whc, struct whc_qset *qset)
static void qset_remove_qtd(struct whc *whc, struct whc_qset *qset)
static void qset_copy_bounce_to_sg(struct whc *whc, struct whc_std *std)
void qset_free_std(struct whc *whc, struct whc_std *std)
static void qset_remove_qtds(struct whc *whc, struct whc_qset *qset,
struct urb *urb)
static void qset_free_stds(struct whc_qset *qset, struct urb *urb)
static int qset_fill_page_list(struct whc *whc, struct whc_std *std, gfp_t mem_flags)
static void urb_dequeue_work(struct work_struct *work)
static struct whc_std *qset_new_std(struct whc *whc, struct whc_qset *qset,
struct urb *urb, gfp_t mem_flags)
static int qset_add_urb_sg(struct whc *whc, struct whc_qset *qset, struct urb *urb,
gfp_t mem_flags)
static int qset_add_urb_sg_linearize(struct whc *whc, struct whc_qset *qset,
struct urb *urb, gfp_t mem_flags)
int qset_add_urb(struct whc *whc, struct whc_qset *qset, struct urb *urb,
gfp_t mem_flags)
void qset_remove_urb(struct whc *whc, struct whc_qset *qset,
struct urb *urb, int status)
static int get_urb_status_from_qtd(struct urb *urb, u32 status)
void process_inactive_qtd(struct whc *whc, struct whc_qset *qset,
struct whc_qtd *qtd)
void process_halted_qtd(struct whc *whc, struct whc_qset *qset,
struct whc_qtd *qtd)
void qset_free(struct whc *whc, struct whc_qset *qset)
void qset_delete(struct whc *whc, struct whc_qset *qset)
