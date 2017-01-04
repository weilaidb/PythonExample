static int gpio_set_dir(struct wm8350 *wm8350, int gpio, int dir)
static int gpio_set_debounce(struct wm8350 *wm8350, int gpio, int db)
static int gpio_set_func(struct wm8350 *wm8350, int gpio, int func)
static int gpio_set_pull_up(struct wm8350 *wm8350, int gpio, int up)
static int gpio_set_pull_down(struct wm8350 *wm8350, int gpio, int down)
static int gpio_set_polarity(struct wm8350 *wm8350, int gpio, int pol)
static int gpio_set_invert(struct wm8350 *wm8350, int gpio, int invert)
int wm8350_gpio_config(struct wm8350 *wm8350, int gpio, int dir, int func,
int pol, int pull, int invert, int debounce)
EXPORT_SYMBOL_GPL(wm8350_gpio_config);
