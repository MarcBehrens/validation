/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _Send_P041_MessageLibBaseline2_H_
#define _Send_P041_MessageLibBaseline2_H_

#include "kcg_types.h"
#include "Write_P041_TM_trackside.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedPackets_T_Common_Types_Pkg /* MessageLibBaseline2::Send_P041::B_data_out */ B_data_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Write_P041_TM_trackside /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* MessageLibBaseline2::Send_P041 */ ck_every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedPackets_T_Common_Types_Pkg /* MessageLibBaseline2::Send_P041::_L3 */ _L3;
  P041_trackside_int_T_TM /* MessageLibBaseline2::Send_P041::_L4 */ _L4;
  kcg_bool /* MessageLibBaseline2::Send_P041::_L8 */ _L8;
  kcg_bool /* MessageLibBaseline2::Send_P041::_L6 */ _L6;
  CompressedPackets_T_Common_Types_Pkg /* MessageLibBaseline2::Send_P041::_L7 */ _L7;
  kcg_bool /* MessageLibBaseline2::Send_P041::_L5 */ _L5;
} outC_Send_P041_MessageLibBaseline2;

/* ===========  node initialization and cycle functions  =========== */
/* MessageLibBaseline2::Send_P041 */
extern void Send_P041_MessageLibBaseline2(
  /* MessageLibBaseline2::Send_P041::B_data_in */ CompressedPackets_T_Common_Types_Pkg *B_data_in,
  /* MessageLibBaseline2::Send_P041::P041 */ P041_trackside_int_T_TM *P041,
  outC_Send_P041_MessageLibBaseline2 *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Send_P041_reset_MessageLibBaseline2(
  outC_Send_P041_MessageLibBaseline2 *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Send_P041_init_MessageLibBaseline2(
  outC_Send_P041_MessageLibBaseline2 *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Send_P041_MessageLibBaseline2_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Send_P041_MessageLibBaseline2.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

