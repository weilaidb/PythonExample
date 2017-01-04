#define AVFILTER_PULLUP_H
typedef struct PullupBuffer  PullupBuffer;
typedef struct PullupField  PullupField;
typedef struct PullupFrame  PullupFrame;
typedef struct PullupContext  PullupContext;
void ff_pullup_init_x86(PullupContext *s);
