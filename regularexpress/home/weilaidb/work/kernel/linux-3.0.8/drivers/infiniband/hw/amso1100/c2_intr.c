static void handle_mq(struct c2_dev *c2dev, u32 index);
static void handle_vq(struct c2_dev *c2dev, u32 mq_index);
void c2_rnic_interrupt(struct c2_dev *c2dev)
static void handle_mq(struct c2_dev *c2dev, u32 mq_index)
static void handle_vq(struct c2_dev *c2dev, u32 mq_index)
