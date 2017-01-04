#define START_STREAMING
#define STOP_STREAMING
#define SEND_COMMAND
struct nvec_ps2
;
static struct nvec_ps2 ps2_dev;
static int ps2_startstreaming(struct serio *ser_dev)
static void ps2_stopstreaming(struct serio *ser_dev)
static int ps2_sendcommand(struct serio *ser_dev, unsigned char cmd)
static int nvec_ps2_notifier(struct notifier_block *nb,
unsigned long event_type, void *data)
int __init nvec_ps2(struct nvec_chip *nvec)
