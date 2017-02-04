ff_put_pixels8_arm;
ff_put_pixels8_x2_arm;
ff_put_pixels8_y2_arm;
ff_put_pixels8_xy2_arm;
ff_put_no_rnd_pixels8_x2_arm;
ff_put_no_rnd_pixels8_y2_arm;
ff_put_no_rnd_pixels8_xy2_arm;
ff_put_pixels16_arm;
CALL_2X_PIXELS(ff_put_pixels16_x2_arm,         ff_put_pixels8_x2_arm,        8)
CALL_2X_PIXELS(ff_put_pixels16_y2_arm,         ff_put_pixels8_y2_arm,        8)
CALL_2X_PIXELS(ff_put_pixels16_xy2_arm,        ff_put_pixels8_xy2_arm,       8)
CALL_2X_PIXELS(ff_put_no_rnd_pixels16_x2_arm,  ff_put_no_rnd_pixels8_x2_arm, 8)
CALL_2X_PIXELS(ff_put_no_rnd_pixels16_y2_arm,  ff_put_no_rnd_pixels8_y2_arm, 8)
CALL_2X_PIXELS(ff_put_no_rnd_pixels16_xy2_arm, ff_put_no_rnd_pixels8_xy2_arm,8)
ff_hpeldsp_init_arm
