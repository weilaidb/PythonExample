static struct input_dev *pmu_input_dev;
static int __init via_pmu_event_init(void)
void via_pmu_event(int key, int down)
late_initcall(via_pmu_event_init);
