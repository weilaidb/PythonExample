#define REGISTER_OUTDEV(X, x)                                           \
#define REGISTER_INDEV(X, x)                                            \
#define REGISTER_INOUTDEV(X, x) REGISTER_OUTDEV(X, x); REGISTER_INDEV(X, x)
void avdevice_register_all(void)
