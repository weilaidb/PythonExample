static int otg_set_protocol(struct otg_fsm *fsm, int protocol)
static int state_changed;
void otg_leave_state(struct otg_fsm *fsm, enum usb_otg_state old_state)
int otg_set_state(struct otg_fsm *fsm, enum usb_otg_state new_state)
int otg_statemachine(struct otg_fsm *fsm)
