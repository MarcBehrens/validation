/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _Balise_Interdistance_UNISIG_Validation_Scenarios_test_InfraLibInt_H_
#define _Balise_Interdistance_UNISIG_Validation_Scenarios_test_InfraLibInt_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Interdistance::distance_BB */ distance_BB;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* math::Abs::A_Output */ A_Output_1;
  kcg_int /* math::Abs::A_Input */ A_Input_1;
  kcg_int /* math::Abs::_L8 */ _L8_1;
  kcg_int /* math::Abs::_L5 */ _L5_1;
  kcg_int /* math::Abs::_L3 */ _L3_1;
  kcg_int /* math::Abs::_L2 */ _L2_1;
  kcg_bool /* math::Abs::_L1 */ _L1_1;
  kcg_real /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Interdistance::_L1 */ _L1;
  kcg_real /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Interdistance::_L2 */ _L2;
  kcg_real /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Interdistance::_L3 */ _L3;
  kcg_real /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Interdistance::_L4 */ _L4;
  kcg_real /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Interdistance::_L5 */ _L5;
  kcg_int /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Interdistance::_L6 */ _L6;
  kcg_bool /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Interdistance::_L8 */ _L8;
  kcg_int /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Interdistance::_L9 */ _L9;
  kcg_int /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Interdistance::_L10 */ _L10;
  kcg_int /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Interdistance::_L11 */ _L11;
  kcg_real /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Interdistance::_L12 */ _L12;
  kcg_int /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Interdistance::_L13 */ _L13;
  kcg_real /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Interdistance::_L14 */ _L14;
} outC_Balise_Interdistance_UNISIG_Validation_Scenarios_test_InfraLibInt;

/* ===========  node initialization and cycle functions  =========== */
/* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Interdistance */
extern void Balise_Interdistance_UNISIG_Validation_Scenarios_test_InfraLibInt(
  /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Interdistance::pig0 */ kcg_int pig0,
  /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Interdistance::n_pig */ kcg_int n_pig,
  outC_Balise_Interdistance_UNISIG_Validation_Scenarios_test_InfraLibInt *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Balise_Interdistance_reset_UNISIG_Validation_Scenarios_test_InfraLibInt(
  outC_Balise_Interdistance_UNISIG_Validation_Scenarios_test_InfraLibInt *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Balise_Interdistance_init_UNISIG_Validation_Scenarios_test_InfraLibInt(
  outC_Balise_Interdistance_UNISIG_Validation_Scenarios_test_InfraLibInt *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Balise_Interdistance_UNISIG_Validation_Scenarios_test_InfraLibInt_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Balise_Interdistance_UNISIG_Validation_Scenarios_test_InfraLibInt.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

