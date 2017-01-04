extern int devport();
extern int textwritemask();
extern int pagewritemask();
extern int gewrite();
extern int gettp();
static PyObject *
gl_qread(PyObject *self, PyObject *args)
static PyObject *
gl_varray(PyObject *self, PyObject *args)
static PyObject *gen_nvarray();
static PyObject *
gl_nvarray(PyObject *self, PyObject *args)
static PyObject *
gl_vnarray(PyObject *self, PyObject *args)
static PyObject *
gen_nvarray(PyObject *args, int inorm)
static PyObject *
gl_nurbssurface(PyObject *self, PyObject *args)
static PyObject *
gl_nurbscurve(PyObject *self, PyObject *args)
static PyObject *
gl_pwlcurve(PyObject *self, PyObject *args)
static short *pickbuffer = NULL;
static long pickbuffersize;
static PyObject *
pick_select(PyObject *args, void (*func)())
static PyObject *
endpick_select(long (*func)())
extern void pick(), gselect();
extern long endpick(), endselect();
static PyObject *gl_pick(PyObject *self, PyObject *args)
static PyObject *gl_endpick(PyObject *self)
static PyObject *gl_gselect(PyObject *self, PyObject *args)
static PyObject *gl_endselect(PyObject *self)
static PyObject *
gl_getmatrix(PyObject *self, PyObject *args)
static PyObject *
gl_altgetmatrix(PyObject *self, PyObject *args)
static PyObject *
gl_lrectwrite(PyObject *self, PyObject *args)
static PyObject *
gl_lrectread(PyObject *self, PyObject *args)
static PyObject *
gl_readdisplay(PyObject *self, PyObject *args)
static PyObject *
gl_packrect(PyObject *self, PyObject *args)
static unsigned long unpacktab[256];
static int unpacktab_inited = 0;
static PyObject *
gl_unpackrect(PyObject *self, PyObject *args)
static PyObject *
gl_gversion(PyObject *self, PyObject *args)
static PyObject *
gl_clear(PyObject *self, PyObject *args)
static PyObject *
gl_getshade(PyObject *self, PyObject *args)
static PyObject *
gl_devport(PyObject *self, PyObject *args)
static PyObject *
gl_rdr2i(PyObject *self, PyObject *args)
static PyObject *
gl_rectfs(PyObject *self, PyObject *args)
static PyObject *
gl_rects(PyObject *self, PyObject *args)
static PyObject *
gl_rmv2i(PyObject *self, PyObject *args)
static PyObject *
gl_noport(PyObject *self, PyObject *args)
static PyObject *
gl_popviewport(PyObject *self, PyObject *args)
static PyObject *
gl_clearhitcode(PyObject *self, PyObject *args)
static PyObject *
gl_closeobj(PyObject *self, PyObject *args)
static PyObject *
gl_cursoff(PyObject *self, PyObject *args)
static PyObject *
gl_curson(PyObject *self, PyObject *args)
static PyObject *
gl_doublebuffer(PyObject *self, PyObject *args)
static PyObject *
gl_finish(PyObject *self, PyObject *args)
static PyObject *
gl_gconfig(PyObject *self, PyObject *args)
static PyObject *
gl_ginit(PyObject *self, PyObject *args)
static PyObject *
gl_greset(PyObject *self, PyObject *args)
static PyObject *
gl_multimap(PyObject *self, PyObject *args)
static PyObject *
gl_onemap(PyObject *self, PyObject *args)
static PyObject *
gl_popattributes(PyObject *self, PyObject *args)
static PyObject *
gl_popmatrix(PyObject *self, PyObject *args)
static PyObject *
gl_pushattributes(PyObject *self, PyObject *args)
static PyObject *
gl_pushmatrix(PyObject *self, PyObject *args)
static PyObject *
gl_pushviewport(PyObject *self, PyObject *args)
static PyObject *
gl_qreset(PyObject *self, PyObject *args)
static PyObject *
gl_RGBmode(PyObject *self, PyObject *args)
static PyObject *
gl_singlebuffer(PyObject *self, PyObject *args)
static PyObject *
gl_swapbuffers(PyObject *self, PyObject *args)
static PyObject *
gl_gsync(PyObject *self, PyObject *args)
static PyObject *
gl_gflush(PyObject *self, PyObject *args)
static PyObject *
gl_tpon(PyObject *self, PyObject *args)
static PyObject *
gl_tpoff(PyObject *self, PyObject *args)
static PyObject *
gl_clkon(PyObject *self, PyObject *args)
static PyObject *
gl_clkoff(PyObject *self, PyObject *args)
static PyObject *
gl_ringbell(PyObject *self, PyObject *args)
static PyObject *
gl_gbegin(PyObject *self, PyObject *args)
static PyObject *
gl_textinit(PyObject *self, PyObject *args)
static PyObject *
gl_initnames(PyObject *self, PyObject *args)
static PyObject *
gl_pclos(PyObject *self, PyObject *args)
static PyObject *
gl_popname(PyObject *self, PyObject *args)
static PyObject *
gl_spclos(PyObject *self, PyObject *args)
static PyObject *
gl_zclear(PyObject *self, PyObject *args)
static PyObject *
gl_screenspace(PyObject *self, PyObject *args)
static PyObject *
gl_reshapeviewport(PyObject *self, PyObject *args)
static PyObject *
gl_winpush(PyObject *self, PyObject *args)
static PyObject *
gl_winpop(PyObject *self, PyObject *args)
static PyObject *
gl_foreground(PyObject *self, PyObject *args)
static PyObject *
gl_endfullscrn(PyObject *self, PyObject *args)
static PyObject *
gl_endpupmode(PyObject *self, PyObject *args)
static PyObject *
gl_fullscrn(PyObject *self, PyObject *args)
static PyObject *
gl_pupmode(PyObject *self, PyObject *args)
static PyObject *
gl_winconstraints(PyObject *self, PyObject *args)
static PyObject *
gl_pagecolor(PyObject *self, PyObject *args)
static PyObject *
gl_textcolor(PyObject *self, PyObject *args)
static PyObject *
gl_color(PyObject *self, PyObject *args)
static PyObject *
gl_curveit(PyObject *self, PyObject *args)
static PyObject *
gl_font(PyObject *self, PyObject *args)
static PyObject *
gl_linewidth(PyObject *self, PyObject *args)
static PyObject *
gl_setlinestyle(PyObject *self, PyObject *args)
static PyObject *
gl_setmap(PyObject *self, PyObject *args)
static PyObject *
gl_swapinterval(PyObject *self, PyObject *args)
static PyObject *
gl_writemask(PyObject *self, PyObject *args)
static PyObject *
gl_textwritemask(PyObject *self, PyObject *args)
static PyObject *
gl_qdevice(PyObject *self, PyObject *args)
static PyObject *
gl_unqdevice(PyObject *self, PyObject *args)
static PyObject *
gl_curvebasis(PyObject *self, PyObject *args)
static PyObject *
gl_curveprecision(PyObject *self, PyObject *args)
static PyObject *
gl_loadname(PyObject *self, PyObject *args)
static PyObject *
gl_passthrough(PyObject *self, PyObject *args)
static PyObject *
gl_pushname(PyObject *self, PyObject *args)
static PyObject *
gl_setmonitor(PyObject *self, PyObject *args)
static PyObject *
gl_setshade(PyObject *self, PyObject *args)
static PyObject *
gl_setpattern(PyObject *self, PyObject *args)
static PyObject *
gl_pagewritemask(PyObject *self, PyObject *args)
static PyObject *
gl_callobj(PyObject *self, PyObject *args)
static PyObject *
gl_delobj(PyObject *self, PyObject *args)
static PyObject *
gl_editobj(PyObject *self, PyObject *args)
static PyObject *
gl_makeobj(PyObject *self, PyObject *args)
static PyObject *
gl_maketag(PyObject *self, PyObject *args)
static PyObject *
gl_chunksize(PyObject *self, PyObject *args)
static PyObject *
gl_compactify(PyObject *self, PyObject *args)
static PyObject *
gl_deltag(PyObject *self, PyObject *args)
static PyObject *
gl_lsrepeat(PyObject *self, PyObject *args)
static PyObject *
gl_objinsert(PyObject *self, PyObject *args)
static PyObject *
gl_objreplace(PyObject *self, PyObject *args)
static PyObject *
gl_winclose(PyObject *self, PyObject *args)
static PyObject *
gl_blanktime(PyObject *self, PyObject *args)
static PyObject *
gl_freepup(PyObject *self, PyObject *args)
static PyObject *
gl_backbuffer(PyObject *self, PyObject *args)
static PyObject *
gl_frontbuffer(PyObject *self, PyObject *args)
static PyObject *
gl_lsbackup(PyObject *self, PyObject *args)
static PyObject *
gl_resetls(PyObject *self, PyObject *args)
static PyObject *
gl_lampon(PyObject *self, PyObject *args)
static PyObject *
gl_lampoff(PyObject *self, PyObject *args)
static PyObject *
gl_setbell(PyObject *self, PyObject *args)
static PyObject *
gl_blankscreen(PyObject *self, PyObject *args)
static PyObject *
gl_depthcue(PyObject *self, PyObject *args)
static PyObject *
gl_zbuffer(PyObject *self, PyObject *args)
static PyObject *
gl_backface(PyObject *self, PyObject *args)
static PyObject *
gl_cmov2i(PyObject *self, PyObject *args)
static PyObject *
gl_draw2i(PyObject *self, PyObject *args)
static PyObject *
gl_move2i(PyObject *self, PyObject *args)
static PyObject *
gl_pnt2i(PyObject *self, PyObject *args)
static PyObject *
gl_patchbasis(PyObject *self, PyObject *args)
static PyObject *
gl_patchprecision(PyObject *self, PyObject *args)
static PyObject *
gl_pdr2i(PyObject *self, PyObject *args)
static PyObject *
gl_pmv2i(PyObject *self, PyObject *args)
static PyObject *
gl_rpdr2i(PyObject *self, PyObject *args)
static PyObject *
gl_rpmv2i(PyObject *self, PyObject *args)
static PyObject *
gl_xfpt2i(PyObject *self, PyObject *args)
static PyObject *
gl_objdelete(PyObject *self, PyObject *args)
static PyObject *
gl_patchcurves(PyObject *self, PyObject *args)
static PyObject *
gl_minsize(PyObject *self, PyObject *args)
static PyObject *
gl_maxsize(PyObject *self, PyObject *args)
static PyObject *
gl_keepaspect(PyObject *self, PyObject *args)
static PyObject *
gl_prefsize(PyObject *self, PyObject *args)
static PyObject *
gl_stepunit(PyObject *self, PyObject *args)
static PyObject *
gl_fudge(PyObject *self, PyObject *args)
static PyObject *
gl_winmove(PyObject *self, PyObject *args)
static PyObject *
gl_attachcursor(PyObject *self, PyObject *args)
static PyObject *
gl_deflinestyle(PyObject *self, PyObject *args)
static PyObject *
gl_noise(PyObject *self, PyObject *args)
static PyObject *
gl_picksize(PyObject *self, PyObject *args)
static PyObject *
gl_qenter(PyObject *self, PyObject *args)
static PyObject *
gl_setdepth(PyObject *self, PyObject *args)
static PyObject *
gl_cmov2s(PyObject *self, PyObject *args)
static PyObject *
gl_draw2s(PyObject *self, PyObject *args)
static PyObject *
gl_move2s(PyObject *self, PyObject *args)
static PyObject *
gl_pdr2s(PyObject *self, PyObject *args)
static PyObject *
gl_pmv2s(PyObject *self, PyObject *args)
static PyObject *
gl_pnt2s(PyObject *self, PyObject *args)
static PyObject *
gl_rdr2s(PyObject *self, PyObject *args)
static PyObject *
gl_rmv2s(PyObject *self, PyObject *args)
static PyObject *
gl_rpdr2s(PyObject *self, PyObject *args)
static PyObject *
gl_rpmv2s(PyObject *self, PyObject *args)
static PyObject *
gl_xfpt2s(PyObject *self, PyObject *args)
static PyObject *
gl_cmov2(PyObject *self, PyObject *args)
static PyObject *
gl_draw2(PyObject *self, PyObject *args)
static PyObject *
gl_move2(PyObject *self, PyObject *args)
static PyObject *
gl_pnt2(PyObject *self, PyObject *args)
static PyObject *
gl_pdr2(PyObject *self, PyObject *args)
static PyObject *
gl_pmv2(PyObject *self, PyObject *args)
static PyObject *
gl_rdr2(PyObject *self, PyObject *args)
static PyObject *
gl_rmv2(PyObject *self, PyObject *args)
static PyObject *
gl_rpdr2(PyObject *self, PyObject *args)
static PyObject *
gl_rpmv2(PyObject *self, PyObject *args)
static PyObject *
gl_xfpt2(PyObject *self, PyObject *args)
static PyObject *
gl_loadmatrix(PyObject *self, PyObject *args)
static PyObject *
gl_multmatrix(PyObject *self, PyObject *args)
static PyObject *
gl_crv(PyObject *self, PyObject *args)
static PyObject *
gl_rcrv(PyObject *self, PyObject *args)
static PyObject *
gl_addtopup(PyObject *self, PyObject *args)
static PyObject *
gl_charstr(PyObject *self, PyObject *args)
static PyObject *
gl_getport(PyObject *self, PyObject *args)
static PyObject *
gl_strwidth(PyObject *self, PyObject *args)
static PyObject *
gl_winopen(PyObject *self, PyObject *args)
static PyObject *
gl_wintitle(PyObject *self, PyObject *args)
static PyObject *
gl_polf(PyObject *self, PyObject *args)
static PyObject *
gl_polf2(PyObject *self, PyObject *args)
static PyObject *
gl_poly(PyObject *self, PyObject *args)
static PyObject *
gl_poly2(PyObject *self, PyObject *args)
static PyObject *
gl_crvn(PyObject *self, PyObject *args)
static PyObject *
gl_rcrvn(PyObject *self, PyObject *args)
static PyObject *
gl_polf2i(PyObject *self, PyObject *args)
static PyObject *
gl_polfi(PyObject *self, PyObject *args)
static PyObject *
gl_poly2i(PyObject *self, PyObject *args)
static PyObject *
gl_polyi(PyObject *self, PyObject *args)
static PyObject *
gl_polf2s(PyObject *self, PyObject *args)
static PyObject *
gl_polfs(PyObject *self, PyObject *args)
static PyObject *
gl_polys(PyObject *self, PyObject *args)
static PyObject *
gl_poly2s(PyObject *self, PyObject *args)
static PyObject *
gl_defcursor(PyObject *self, PyObject *args)
static PyObject *
gl_writepixels(PyObject *self, PyObject *args)
static PyObject *
gl_defbasis(PyObject *self, PyObject *args)
static PyObject *
gl_gewrite(PyObject *self, PyObject *args)
static PyObject *
gl_rotate(PyObject *self, PyObject *args)
static PyObject *
gl_rot(PyObject *self, PyObject *args)
static PyObject *
gl_circfi(PyObject *self, PyObject *args)
static PyObject *
gl_circi(PyObject *self, PyObject *args)
static PyObject *
gl_cmovi(PyObject *self, PyObject *args)
static PyObject *
gl_drawi(PyObject *self, PyObject *args)
static PyObject *
gl_movei(PyObject *self, PyObject *args)
static PyObject *
gl_pnti(PyObject *self, PyObject *args)
static PyObject *
gl_newtag(PyObject *self, PyObject *args)
static PyObject *
gl_pdri(PyObject *self, PyObject *args)
static PyObject *
gl_pmvi(PyObject *self, PyObject *args)
static PyObject *
gl_rdri(PyObject *self, PyObject *args)
static PyObject *
gl_rmvi(PyObject *self, PyObject *args)
static PyObject *
gl_rpdri(PyObject *self, PyObject *args)
static PyObject *
gl_rpmvi(PyObject *self, PyObject *args)
static PyObject *
gl_xfpti(PyObject *self, PyObject *args)
static PyObject *
gl_circ(PyObject *self, PyObject *args)
static PyObject *
gl_circf(PyObject *self, PyObject *args)
static PyObject *
gl_cmov(PyObject *self, PyObject *args)
static PyObject *
gl_draw(PyObject *self, PyObject *args)
static PyObject *
gl_move(PyObject *self, PyObject *args)
static PyObject *
gl_pnt(PyObject *self, PyObject *args)
static PyObject *
gl_scale(PyObject *self, PyObject *args)
static PyObject *
gl_translate(PyObject *self, PyObject *args)
static PyObject *
gl_pdr(PyObject *self, PyObject *args)
static PyObject *
gl_pmv(PyObject *self, PyObject *args)
static PyObject *
gl_rdr(PyObject *self, PyObject *args)
static PyObject *
gl_rmv(PyObject *self, PyObject *args)
static PyObject *
gl_rpdr(PyObject *self, PyObject *args)
static PyObject *
gl_rpmv(PyObject *self, PyObject *args)
static PyObject *
gl_xfpt(PyObject *self, PyObject *args)
static PyObject *
gl_RGBcolor(PyObject *self, PyObject *args)
static PyObject *
gl_RGBwritemask(PyObject *self, PyObject *args)
static PyObject *
gl_setcursor(PyObject *self, PyObject *args)
static PyObject *
gl_tie(PyObject *self, PyObject *args)
static PyObject *
gl_circfs(PyObject *self, PyObject *args)
static PyObject *
gl_circs(PyObject *self, PyObject *args)
static PyObject *
gl_cmovs(PyObject *self, PyObject *args)
static PyObject *
gl_draws(PyObject *self, PyObject *args)
static PyObject *
gl_moves(PyObject *self, PyObject *args)
static PyObject *
gl_pdrs(PyObject *self, PyObject *args)
static PyObject *
gl_pmvs(PyObject *self, PyObject *args)
static PyObject *
gl_pnts(PyObject *self, PyObject *args)
static PyObject *
gl_rdrs(PyObject *self, PyObject *args)
static PyObject *
gl_rmvs(PyObject *self, PyObject *args)
static PyObject *
gl_rpdrs(PyObject *self, PyObject *args)
static PyObject *
gl_rpmvs(PyObject *self, PyObject *args)
static PyObject *
gl_xfpts(PyObject *self, PyObject *args)
static PyObject *
gl_curorigin(PyObject *self, PyObject *args)
static PyObject *
gl_cyclemap(PyObject *self, PyObject *args)
static PyObject *
gl_patch(PyObject *self, PyObject *args)
static PyObject *
gl_splf(PyObject *self, PyObject *args)
static PyObject *
gl_splf2(PyObject *self, PyObject *args)
static PyObject *
gl_splfi(PyObject *self, PyObject *args)
static PyObject *
gl_splf2i(PyObject *self, PyObject *args)
static PyObject *
gl_splfs(PyObject *self, PyObject *args)
static PyObject *
gl_splf2s(PyObject *self, PyObject *args)
static PyObject *
gl_rpatch(PyObject *self, PyObject *args)
static PyObject *
gl_ortho2(PyObject *self, PyObject *args)
static PyObject *
gl_rect(PyObject *self, PyObject *args)
static PyObject *
gl_rectf(PyObject *self, PyObject *args)
static PyObject *
gl_xfpt4(PyObject *self, PyObject *args)
static PyObject *
gl_textport(PyObject *self, PyObject *args)
static PyObject *
gl_mapcolor(PyObject *self, PyObject *args)
static PyObject *
gl_scrmask(PyObject *self, PyObject *args)
static PyObject *
gl_setvaluator(PyObject *self, PyObject *args)
static PyObject *
gl_viewport(PyObject *self, PyObject *args)
static PyObject *
gl_shaderange(PyObject *self, PyObject *args)
static PyObject *
gl_xfpt4s(PyObject *self, PyObject *args)
static PyObject *
gl_rectfi(PyObject *self, PyObject *args)
static PyObject *
gl_recti(PyObject *self, PyObject *args)
static PyObject *
gl_xfpt4i(PyObject *self, PyObject *args)
static PyObject *
gl_prefposition(PyObject *self, PyObject *args)
static PyObject *
gl_arc(PyObject *self, PyObject *args)
static PyObject *
gl_arcf(PyObject *self, PyObject *args)
static PyObject *
gl_arcfi(PyObject *self, PyObject *args)
static PyObject *
gl_arci(PyObject *self, PyObject *args)
static PyObject *
gl_bbox2(PyObject *self, PyObject *args)
static PyObject *
gl_bbox2i(PyObject *self, PyObject *args)
static PyObject *
gl_bbox2s(PyObject *self, PyObject *args)
static PyObject *
gl_blink(PyObject *self, PyObject *args)
static PyObject *
gl_ortho(PyObject *self, PyObject *args)
static PyObject *
gl_window(PyObject *self, PyObject *args)
static PyObject *
gl_lookat(PyObject *self, PyObject *args)
static PyObject *
gl_perspective(PyObject *self, PyObject *args)
static PyObject *
gl_polarview(PyObject *self, PyObject *args)
static PyObject *
gl_arcfs(PyObject *self, PyObject *args)
static PyObject *
gl_arcs(PyObject *self, PyObject *args)
static PyObject *
gl_rectcopy(PyObject *self, PyObject *args)
static PyObject *
gl_RGBcursor(PyObject *self, PyObject *args)
static PyObject *
gl_getbutton(PyObject *self, PyObject *args)
static PyObject *
gl_getcmmode(PyObject *self, PyObject *args)
static PyObject *
gl_getlsbackup(PyObject *self, PyObject *args)
static PyObject *
gl_getresetls(PyObject *self, PyObject *args)
static PyObject *
gl_getdcm(PyObject *self, PyObject *args)
static PyObject *
gl_getzbuffer(PyObject *self, PyObject *args)
static PyObject *
gl_ismex(PyObject *self, PyObject *args)
static PyObject *
gl_isobj(PyObject *self, PyObject *args)
static PyObject *
gl_isqueued(PyObject *self, PyObject *args)
static PyObject *
gl_istag(PyObject *self, PyObject *args)
static PyObject *
gl_genobj(PyObject *self, PyObject *args)
static PyObject *
gl_gentag(PyObject *self, PyObject *args)
static PyObject *
gl_getbuffer(PyObject *self, PyObject *args)
static PyObject *
gl_getcolor(PyObject *self, PyObject *args)
static PyObject *
gl_getdisplaymode(PyObject *self, PyObject *args)
static PyObject *
gl_getfont(PyObject *self, PyObject *args)
static PyObject *
gl_getheight(PyObject *self, PyObject *args)
static PyObject *
gl_gethitcode(PyObject *self, PyObject *args)
static PyObject *
gl_getlstyle(PyObject *self, PyObject *args)
static PyObject *
gl_getlwidth(PyObject *self, PyObject *args)
static PyObject *
gl_getmap(PyObject *self, PyObject *args)
static PyObject *
gl_getplanes(PyObject *self, PyObject *args)
static PyObject *
gl_getwritemask(PyObject *self, PyObject *args)
static PyObject *
gl_qtest(PyObject *self, PyObject *args)
static PyObject *
gl_getlsrepeat(PyObject *self, PyObject *args)
static PyObject *
gl_getmonitor(PyObject *self, PyObject *args)
static PyObject *
gl_getopenobj(PyObject *self, PyObject *args)
static PyObject *
gl_getpattern(PyObject *self, PyObject *args)
static PyObject *
gl_winget(PyObject *self, PyObject *args)
static PyObject *
gl_winattach(PyObject *self, PyObject *args)
static PyObject *
gl_getothermonitor(PyObject *self, PyObject *args)
static PyObject *
gl_newpup(PyObject *self, PyObject *args)
static PyObject *
gl_getvaluator(PyObject *self, PyObject *args)
static PyObject *
gl_winset(PyObject *self, PyObject *args)
static PyObject *
gl_dopup(PyObject *self, PyObject *args)
static PyObject *
gl_getdepth(PyObject *self, PyObject *args)
static PyObject *
gl_getcpos(PyObject *self, PyObject *args)
static PyObject *
gl_getsize(PyObject *self, PyObject *args)
static PyObject *
gl_getorigin(PyObject *self, PyObject *args)
static PyObject *
gl_getviewport(PyObject *self, PyObject *args)
static PyObject *
gl_gettp(PyObject *self, PyObject *args)
static PyObject *
gl_getgpos(PyObject *self, PyObject *args)
static PyObject *
gl_winposition(PyObject *self, PyObject *args)
static PyObject *
gl_gRGBcolor(PyObject *self, PyObject *args)
static PyObject *
gl_gRGBmask(PyObject *self, PyObject *args)
static PyObject *
gl_getscrmask(PyObject *self, PyObject *args)
static PyObject *
gl_getmcolor(PyObject *self, PyObject *args)
static PyObject *
gl_mapw(PyObject *self, PyObject *args)
static PyObject *
gl_mapw2(PyObject *self, PyObject *args)
static PyObject *
gl_getcursor(PyObject *self, PyObject *args)
static PyObject *
gl_cmode(PyObject *self, PyObject *args)
static PyObject *
gl_concave(PyObject *self, PyObject *args)
static PyObject *
gl_curstype(PyObject *self, PyObject *args)
static PyObject *
gl_drawmode(PyObject *self, PyObject *args)
static PyObject *
gl_gammaramp(PyObject *self, PyObject *args)
static PyObject *
gl_getbackface(PyObject *self, PyObject *args)
static PyObject *
gl_getdescender(PyObject *self, PyObject *args)
static PyObject *
gl_getdrawmode(PyObject *self, PyObject *args)
static PyObject *
gl_getmmode(PyObject *self, PyObject *args)
static PyObject *
gl_getsm(PyObject *self, PyObject *args)
static PyObject *
gl_getvideo(PyObject *self, PyObject *args)
static PyObject *
gl_imakebackground(PyObject *self, PyObject *args)
static PyObject *
gl_lmbind(PyObject *self, PyObject *args)
static PyObject *
gl_lmdef(PyObject *self, PyObject *args)
static PyObject *
gl_mmode(PyObject *self, PyObject *args)
static PyObject *
gl_normal(PyObject *self, PyObject *args)
static PyObject *
gl_overlay(PyObject *self, PyObject *args)
static PyObject *
gl_RGBrange(PyObject *self, PyObject *args)
static PyObject *
gl_setvideo(PyObject *self, PyObject *args)
static PyObject *
gl_shademodel(PyObject *self, PyObject *args)
static PyObject *
gl_underlay(PyObject *self, PyObject *args)
static PyObject *
gl_bgnclosedline(PyObject *self, PyObject *args)
static PyObject *
gl_bgnline(PyObject *self, PyObject *args)
static PyObject *
gl_bgnpoint(PyObject *self, PyObject *args)
static PyObject *
gl_bgnpolygon(PyObject *self, PyObject *args)
static PyObject *
gl_bgnsurface(PyObject *self, PyObject *args)
static PyObject *
gl_bgntmesh(PyObject *self, PyObject *args)
static PyObject *
gl_bgntrim(PyObject *self, PyObject *args)
static PyObject *
gl_endclosedline(PyObject *self, PyObject *args)
static PyObject *
gl_endline(PyObject *self, PyObject *args)
static PyObject *
gl_endpoint(PyObject *self, PyObject *args)
static PyObject *
gl_endpolygon(PyObject *self, PyObject *args)
static PyObject *
gl_endsurface(PyObject *self, PyObject *args)
static PyObject *
gl_endtmesh(PyObject *self, PyObject *args)
static PyObject *
gl_endtrim(PyObject *self, PyObject *args)
static PyObject *
gl_blendfunction(PyObject *self, PyObject *args)
static PyObject *
gl_c3f(PyObject *self, PyObject *args)
static PyObject *
gl_c3i(PyObject *self, PyObject *args)
static PyObject *
gl_c3s(PyObject *self, PyObject *args)
static PyObject *
gl_c4f(PyObject *self, PyObject *args)
static PyObject *
gl_c4i(PyObject *self, PyObject *args)
static PyObject *
gl_c4s(PyObject *self, PyObject *args)
static PyObject *
gl_colorf(PyObject *self, PyObject *args)
static PyObject *
gl_cpack(PyObject *self, PyObject *args)
static PyObject *
gl_czclear(PyObject *self, PyObject *args)
static PyObject *
gl_dglclose(PyObject *self, PyObject *args)
static PyObject *
gl_dglopen(PyObject *self, PyObject *args)
static PyObject *
gl_getgdesc(PyObject *self, PyObject *args)
static PyObject *
gl_getnurbsproperty(PyObject *self, PyObject *args)
static PyObject *
gl_glcompat(PyObject *self, PyObject *args)
static PyObject *
gl_iconsize(PyObject *self, PyObject *args)
static PyObject *
gl_icontitle(PyObject *self, PyObject *args)
static PyObject *
gl_lRGBrange(PyObject *self, PyObject *args)
static PyObject *
gl_linesmooth(PyObject *self, PyObject *args)
static PyObject *
gl_lmcolor(PyObject *self, PyObject *args)
static PyObject *
gl_logicop(PyObject *self, PyObject *args)
static PyObject *
gl_lsetdepth(PyObject *self, PyObject *args)
static PyObject *
gl_lshaderange(PyObject *self, PyObject *args)
static PyObject *
gl_n3f(PyObject *self, PyObject *args)
static PyObject *
gl_noborder(PyObject *self, PyObject *args)
static PyObject *
gl_pntsmooth(PyObject *self, PyObject *args)
static PyObject *
gl_readsource(PyObject *self, PyObject *args)
static PyObject *
gl_rectzoom(PyObject *self, PyObject *args)
static PyObject *
gl_sbox(PyObject *self, PyObject *args)
static PyObject *
gl_sboxi(PyObject *self, PyObject *args)
static PyObject *
gl_sboxs(PyObject *self, PyObject *args)
static PyObject *
gl_sboxf(PyObject *self, PyObject *args)
static PyObject *
gl_sboxfi(PyObject *self, PyObject *args)
static PyObject *
gl_sboxfs(PyObject *self, PyObject *args)
static PyObject *
gl_setnurbsproperty(PyObject *self, PyObject *args)
static PyObject *
gl_setpup(PyObject *self, PyObject *args)
static PyObject *
gl_smoothline(PyObject *self, PyObject *args)
static PyObject *
gl_subpixel(PyObject *self, PyObject *args)
static PyObject *
gl_swaptmesh(PyObject *self, PyObject *args)
static PyObject *
gl_swinopen(PyObject *self, PyObject *args)
static PyObject *
gl_v2f(PyObject *self, PyObject *args)
static PyObject *
gl_v2i(PyObject *self, PyObject *args)
static PyObject *
gl_v2s(PyObject *self, PyObject *args)
static PyObject *
gl_v3f(PyObject *self, PyObject *args)
static PyObject *
gl_v3i(PyObject *self, PyObject *args)
static PyObject *
gl_v3s(PyObject *self, PyObject *args)
static PyObject *
gl_v4f(PyObject *self, PyObject *args)
static PyObject *
gl_v4i(PyObject *self, PyObject *args)
static PyObject *
gl_v4s(PyObject *self, PyObject *args)
static PyObject *
gl_videocmd(PyObject *self, PyObject *args)
static PyObject *
gl_windepth(PyObject *self, PyObject *args)
static PyObject *
gl_wmpack(PyObject *self, PyObject *args)
static PyObject *
gl_zdraw(PyObject *self, PyObject *args)
static PyObject *
gl_zfunction(PyObject *self, PyObject *args)
static PyObject *
gl_zsource(PyObject *self, PyObject *args)
static PyObject *
gl_zwritemask(PyObject *self, PyObject *args)
static PyObject *
gl_v2d(PyObject *self, PyObject *args)
static PyObject *
gl_v3d(PyObject *self, PyObject *args)
static PyObject *
gl_v4d(PyObject *self, PyObject *args)
static PyObject *
gl_pixmode(PyObject *self, PyObject *args)
static PyObject *
gl_qgetfd(PyObject *self, PyObject *args)
static PyObject *
gl_dither(PyObject *self, PyObject *args)
static struct PyMethodDef gl_methods[] = ;
void
initgl(void)
