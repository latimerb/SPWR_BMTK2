#include <stdio.h>
#include "hocdec.h"
extern int nrnmpi_myid;
extern int nrn_nobanner_;

extern void _bg2pyr_reg(void);
extern void _cad_reg(void);
extern void _CaDynamics_reg(void);
extern void _cadyn_reg(void);
extern void _Ca_HVA_reg(void);
extern void _Ca_LVA_reg(void);
extern void _ca_reg(void);
extern void _capool_reg(void);
extern void _cav31_reg(void);
extern void _chn2pyr_reg(void);
extern void _gabaa_reg(void);
extern void _gap_reg(void);
extern void _Gfluct_new_exc_reg(void);
extern void _Gfluct_new_inh_reg(void);
extern void _h_reg(void);
extern void _Ih_reg(void);
extern void _im_reg(void);
extern void _Im_reg(void);
extern void _Im_v2_reg(void);
extern void _int2int_reg(void);
extern void _int2pyr_reg(void);
extern void _kaprox_reg(void);
extern void _kca_reg(void);
extern void _Kd_reg(void);
extern void _kdrca1_reg(void);
extern void _kdrinter_reg(void);
extern void _kdrinter_WB_reg(void);
extern void _km_reg(void);
extern void _K_P_reg(void);
extern void _K_T_reg(void);
extern void _Kv2like_reg(void);
extern void _Kv3_1_reg(void);
extern void _kv_reg(void);
extern void _leakinter_reg(void);
extern void _leak_reg(void);
extern void _MyExp2Sid_reg(void);
extern void _na12_reg(void);
extern void _na16_reg(void);
extern void _na3_reg(void);
extern void _nainter_reg(void);
extern void _nainter_WB_reg(void);
extern void _na_reg(void);
extern void _nap_reg(void);
extern void _Nap_reg(void);
extern void _NaTa_reg(void);
extern void _NaTs_reg(void);
extern void _NaV_reg(void);
extern void _pyr2int_reg(void);
extern void _pyr2pyr_reg(void);
extern void _sahp_reg(void);
extern void _SK_reg(void);
extern void _vecevent_reg(void);

void modl_reg(){
  if (!nrn_nobanner_) if (nrnmpi_myid < 1) {
    fprintf(stderr, "Additional mechanisms from files\n");

    fprintf(stderr," modfiles/bg2pyr.mod");
    fprintf(stderr," modfiles/cad.mod");
    fprintf(stderr," modfiles/CaDynamics.mod");
    fprintf(stderr," modfiles/cadyn.mod");
    fprintf(stderr," modfiles/Ca_HVA.mod");
    fprintf(stderr," modfiles/Ca_LVA.mod");
    fprintf(stderr," modfiles/ca.mod");
    fprintf(stderr," modfiles/capool.mod");
    fprintf(stderr," modfiles/cav31.mod");
    fprintf(stderr," modfiles/chn2pyr.mod");
    fprintf(stderr," modfiles/gabaa.mod");
    fprintf(stderr," modfiles/gap.mod");
    fprintf(stderr," modfiles/Gfluct_new_exc.mod");
    fprintf(stderr," modfiles/Gfluct_new_inh.mod");
    fprintf(stderr," modfiles/h.mod");
    fprintf(stderr," modfiles/Ih.mod");
    fprintf(stderr," modfiles/im.mod");
    fprintf(stderr," modfiles/Im.mod");
    fprintf(stderr," modfiles/Im_v2.mod");
    fprintf(stderr," modfiles/int2int.mod");
    fprintf(stderr," modfiles/int2pyr.mod");
    fprintf(stderr," modfiles/kaprox.mod");
    fprintf(stderr," modfiles/kca.mod");
    fprintf(stderr," modfiles/Kd.mod");
    fprintf(stderr," modfiles/kdrca1.mod");
    fprintf(stderr," modfiles/kdrinter.mod");
    fprintf(stderr," modfiles/kdrinter_WB.mod");
    fprintf(stderr," modfiles/km.mod");
    fprintf(stderr," modfiles/K_P.mod");
    fprintf(stderr," modfiles/K_T.mod");
    fprintf(stderr," modfiles/Kv2like.mod");
    fprintf(stderr," modfiles/Kv3_1.mod");
    fprintf(stderr," modfiles/kv.mod");
    fprintf(stderr," modfiles/leakinter.mod");
    fprintf(stderr," modfiles/leak.mod");
    fprintf(stderr," modfiles/MyExp2Sid.mod");
    fprintf(stderr," modfiles/na12.mod");
    fprintf(stderr," modfiles/na16.mod");
    fprintf(stderr," modfiles/na3.mod");
    fprintf(stderr," modfiles/nainter.mod");
    fprintf(stderr," modfiles/nainter_WB.mod");
    fprintf(stderr," modfiles/na.mod");
    fprintf(stderr," modfiles/nap.mod");
    fprintf(stderr," modfiles/Nap.mod");
    fprintf(stderr," modfiles/NaTa.mod");
    fprintf(stderr," modfiles/NaTs.mod");
    fprintf(stderr," modfiles/NaV.mod");
    fprintf(stderr," modfiles/pyr2int.mod");
    fprintf(stderr," modfiles/pyr2pyr.mod");
    fprintf(stderr," modfiles/sahp.mod");
    fprintf(stderr," modfiles/SK.mod");
    fprintf(stderr," modfiles/vecevent.mod");
    fprintf(stderr, "\n");
  }
  _bg2pyr_reg();
  _cad_reg();
  _CaDynamics_reg();
  _cadyn_reg();
  _Ca_HVA_reg();
  _Ca_LVA_reg();
  _ca_reg();
  _capool_reg();
  _cav31_reg();
  _chn2pyr_reg();
  _gabaa_reg();
  _gap_reg();
  _Gfluct_new_exc_reg();
  _Gfluct_new_inh_reg();
  _h_reg();
  _Ih_reg();
  _im_reg();
  _Im_reg();
  _Im_v2_reg();
  _int2int_reg();
  _int2pyr_reg();
  _kaprox_reg();
  _kca_reg();
  _Kd_reg();
  _kdrca1_reg();
  _kdrinter_reg();
  _kdrinter_WB_reg();
  _km_reg();
  _K_P_reg();
  _K_T_reg();
  _Kv2like_reg();
  _Kv3_1_reg();
  _kv_reg();
  _leakinter_reg();
  _leak_reg();
  _MyExp2Sid_reg();
  _na12_reg();
  _na16_reg();
  _na3_reg();
  _nainter_reg();
  _nainter_WB_reg();
  _na_reg();
  _nap_reg();
  _Nap_reg();
  _NaTa_reg();
  _NaTs_reg();
  _NaV_reg();
  _pyr2int_reg();
  _pyr2pyr_reg();
  _sahp_reg();
  _SK_reg();
  _vecevent_reg();
}
