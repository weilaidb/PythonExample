#define __INC_STE_MBOX_H
#define MBOX_BUF_SIZE 16
#define MBOX_NAME_SIZE 8
typedef void mbox_recv_cb_t (u32 mbox_msg, void *priv);
struct mbox ;
struct mbox *mbox_setup(u8 mbox_id, mbox_recv_cb_t *mbox_cb, void *priv);
int mbox_send(struct mbox *mbox, u32 mbox_msg, bool block);
