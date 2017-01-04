#define REGISTER_HWACCEL(X, x)                                          \
#define REGISTER_ENCODER(X, x)                                          \
#define REGISTER_DECODER(X, x)                                          \
#define REGISTER_ENCDEC(X, x) REGISTER_ENCODER(X, x); REGISTER_DECODER(X, x)
#define REGISTER_PARSER(X, x)                                           \
#define REGISTER_BSF(X, x)                                              \
void avcodec_register_all(void)
