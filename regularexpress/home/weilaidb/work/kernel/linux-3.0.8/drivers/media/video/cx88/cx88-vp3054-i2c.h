struct vp3054_i2c_state ;
#if defined(CONFIG_VIDEO_CX88_VP3054) || (defined(CONFIG_VIDEO_CX88_VP3054_MODULE) && defined(MODULE))
int  vp3054_i2c_probe(struct cx8802_dev *dev);
void vp3054_i2c_remove(struct cx8802_dev *dev);
static inline int  vp3054_i2c_probe(struct cx8802_dev *dev)
static inline void vp3054_i2c_remove(struct cx8802_dev *dev)
