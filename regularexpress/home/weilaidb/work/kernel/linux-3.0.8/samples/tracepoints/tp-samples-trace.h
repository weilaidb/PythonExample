#define _TP_SAMPLES_TRACE_H
DECLARE_TRACE(subsys_event,
TP_PROTO(struct inode *inode, struct file *file),
TP_ARGS(inode, file));
DECLARE_TRACE_NOARGS(subsys_eventb);
