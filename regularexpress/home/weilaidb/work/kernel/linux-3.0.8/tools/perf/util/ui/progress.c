struct ui_progress ;
struct ui_progress *ui_progress__new(const char *title, u64 total)
void ui_progress__update(struct ui_progress *self, u64 curr)
void ui_progress__delete(struct ui_progress *self)
