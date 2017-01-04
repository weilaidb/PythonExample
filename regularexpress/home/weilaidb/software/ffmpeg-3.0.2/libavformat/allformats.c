#define REGISTER_MUXER(X, x)                                            \
#define REGISTER_DEMUXER(X, x)                                          \
#define REGISTER_MUXDEMUX(X, x) REGISTER_MUXER(X, x); REGISTER_DEMUXER(X, x)
#define REGISTER_PROTOCOL(X, x)                                         \
void av_register_all(void)
