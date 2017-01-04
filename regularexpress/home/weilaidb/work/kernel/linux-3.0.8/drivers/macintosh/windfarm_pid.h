#define WF_PID_MAX_HISTORY	32
struct wf_pid_param ;
struct wf_pid_state ;
extern void wf_pid_init(struct wf_pid_state *st, struct wf_pid_param *param);
extern s32 wf_pid_run(struct wf_pid_state *st, s32 sample);
#define WF_CPU_PID_MAX_HISTORY	32
struct wf_cpu_pid_param ;
struct wf_cpu_pid_state ;
extern void wf_cpu_pid_init(struct wf_cpu_pid_state *st,
struct wf_cpu_pid_param *param);
extern s32 wf_cpu_pid_run(struct wf_cpu_pid_state *st, s32 power, s32 temp);
