void ath5k_hw_set_ledstate(struct ath5k_hw *ah, unsigned int state)
int ath5k_hw_set_gpio_input(struct ath5k_hw *ah, u32 gpio)
int ath5k_hw_set_gpio_output(struct ath5k_hw *ah, u32 gpio)
u32 ath5k_hw_get_gpio(struct ath5k_hw *ah, u32 gpio)
int ath5k_hw_set_gpio(struct ath5k_hw *ah, u32 gpio, u32 val)
void ath5k_hw_set_gpio_intr(struct ath5k_hw *ah, unsigned int gpio,
u32 interrupt_level)
