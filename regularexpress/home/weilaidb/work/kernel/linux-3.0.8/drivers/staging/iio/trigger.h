#define _IIO_TRIGGER_H_
struct iio_subirq ;
struct iio_trigger ;
static inline struct iio_trigger *to_iio_trigger(struct device *d)
;
static inline void iio_put_trigger(struct iio_trigger *trig)
;
static inline void iio_get_trigger(struct iio_trigger *trig)
;
int iio_trigger_register(struct iio_trigger *trig_info);
void iio_trigger_unregister(struct iio_trigger *trig_info);
int iio_trigger_attach_poll_func(struct iio_trigger *trig,
struct iio_poll_func *pf);
int iio_trigger_dettach_poll_func(struct iio_trigger *trig,
struct iio_poll_func *pf);
void iio_trigger_poll(struct iio_trigger *trig, s64 time);
void iio_trigger_poll_chained(struct iio_trigger *trig, s64 time);
void iio_trigger_notify_done(struct iio_trigger *trig);
irqreturn_t iio_trigger_generic_data_rdy_poll(int irq, void *private);
static inline int iio_trigger_get_irq(struct iio_trigger *trig)
;
static inline void iio_trigger_put_irq(struct iio_trigger *trig, int irq)
;
struct iio_poll_func ;
struct iio_poll_func
*iio_alloc_pollfunc(irqreturn_t (*h)(int irq, void *p),
irqreturn_t (*thread)(int irq, void *p),
int type,
void *private,
const char *fmt,
...);
void iio_dealloc_pollfunc(struct iio_poll_func *pf);
irqreturn_t iio_pollfunc_store_time(int irq, void *p);
int iio_triggered_ring_postenable(struct iio_dev *indio_dev);
int iio_triggered_ring_predisable(struct iio_dev *indio_dev);
struct iio_trigger *iio_allocate_trigger(const char *fmt, ...)
__attribute__((format(printf, 1, 2)));
void iio_free_trigger(struct iio_trigger *trig);
