LIST_HEAD(cpuidle_governors);
struct cpuidle_governor *cpuidle_curr_governor;
static struct cpuidle_governor * __cpuidle_find_governor(const char *str)
int cpuidle_switch_governor(struct cpuidle_governor *gov)
int cpuidle_register_governor(struct cpuidle_governor *gov)
static struct cpuidle_governor *cpuidle_replace_governor(int exclude_rating)
void cpuidle_unregister_governor(struct cpuidle_governor *gov)
