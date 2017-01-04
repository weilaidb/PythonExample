#define __LINUX__AIO_H
#define AIO_MAXSEGS		4
#define AIO_KIOGRP_NR_ATOMIC	8
struct kioctx;
#define KIOCB_C_CANCELLED	0x01
#define KIOCB_C_COMPLETE	0x02
#define KIOCB_SYNC_KEY		(~0U)
#define KIF_KICKED		1
#define KIF_CANCELLED		2
#define kiocbTryLock(iocb)	test_and_set_bit(KIF_LOCKED, &(iocb)->ki_flags)
#define kiocbTryKick(iocb)	test_and_set_bit(KIF_KICKED, &(iocb)->ki_flags)
#define kiocbSetLocked(iocb)	set_bit(KIF_LOCKED, &(iocb)->ki_flags)
#define kiocbSetKicked(iocb)	set_bit(KIF_KICKED, &(iocb)->ki_flags)
#define kiocbSetCancelled(iocb)	set_bit(KIF_CANCELLED, &(iocb)->ki_flags)
#define kiocbClearLocked(iocb)	clear_bit(KIF_LOCKED, &(iocb)->ki_flags)
#define kiocbClearKicked(iocb)	clear_bit(KIF_KICKED, &(iocb)->ki_flags)
#define kiocbClearCancelled(iocb)	clear_bit(KIF_CANCELLED, &(iocb)->ki_flags)
#define kiocbIsLocked(iocb)	test_bit(KIF_LOCKED, &(iocb)->ki_flags)
#define kiocbIsKicked(iocb)	test_bit(KIF_KICKED, &(iocb)->ki_flags)
#define kiocbIsCancelled(iocb)	test_bit(KIF_CANCELLED, &(iocb)->ki_flags)
struct kiocb ;
#define is_sync_kiocb(iocb)	((iocb)->ki_key == KIOCB_SYNC_KEY)
#define init_sync_kiocb(x, filp)			\
do  while (0)
#define AIO_RING_MAGIC			0xa10a10a1
#define AIO_RING_COMPAT_FEATURES	1
#define AIO_RING_INCOMPAT_FEATURES	0
struct aio_ring ;
#define aio_ring_avail(info, ring)	(((ring)->head + (info)->nr - 1 - (ring)->tail) % (info)->nr)
#define AIO_RING_PAGES	8
struct aio_ring_info ;
struct kioctx ;
extern unsigned aio_max_size;
extern ssize_t wait_on_sync_kiocb(struct kiocb *iocb);
extern int aio_put_req(struct kiocb *iocb);
extern void kick_iocb(struct kiocb *iocb);
extern int aio_complete(struct kiocb *iocb, long res, long res2);
struct mm_struct;
extern void exit_aio(struct mm_struct *mm);
extern long do_io_submit(aio_context_t ctx_id, long nr,
struct iocb __user *__user *iocbpp, bool compat);
static inline ssize_t wait_on_sync_kiocb(struct kiocb *iocb)
static inline int aio_put_req(struct kiocb *iocb)
static inline void kick_iocb(struct kiocb *iocb)
static inline int aio_complete(struct kiocb *iocb, long res, long res2)
struct mm_struct;
static inline void exit_aio(struct mm_struct *mm)
static inline long do_io_submit(aio_context_t ctx_id, long nr,
struct iocb __user * __user *iocbpp,
bool compat)
static inline struct kiocb *list_kiocb(struct list_head *h)
extern unsigned long aio_nr;
extern unsigned long aio_max_nr;
