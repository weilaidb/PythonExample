void hubiio_crb_error_handler(struct hubdev_info *hubdev_info);
extern void bte_crb_error_handler(cnodeid_t, int, int, ioerror_t *,
int);
static irqreturn_t hub_eint_handler(int irq, void *arg)
void hubiio_crb_free(struct hubdev_info *hubdev_info, int crbnum)
void hubiio_crb_error_handler(struct hubdev_info *hubdev_info)
void hub_error_init(struct hubdev_info *hubdev_info)
void ice_error_init(struct hubdev_info *hubdev_info)
