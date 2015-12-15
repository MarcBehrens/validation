/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _Write_P041_TM_trackside_H_
#define _Write_P041_TM_trackside_H_

#include "kcg_types.h"
#include "C_P041_tracksim_compr_TM_conversions.h"
#include "SEND_WriteBaliseMessageHeader_TM_lib_internal.h"
#include "SEND_MessageData_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TM_trackside::Write_P041::Error */ Error;
  CompressedPackets_T_Common_Types_Pkg /* TM_trackside::Write_P041::RadioPacketsOut */ RadioPacketsOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SEND_MessageData_TM_lib_internal /* 1 */ _2_Context_1;
  outC_SEND_WriteBaliseMessageHeader_TM_lib_internal /* 1 */ _1_Context_1;
  outC_C_P041_tracksim_compr_TM_conversions /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P041_trackside_int_T_TM /* TM_trackside::Write_P041::_L1 */ _L1;
  Metadata_T_Common_Types_Pkg /* TM_trackside::Write_P041::_L4 */ _L4;
  CompressedPacketData_T_Common_Types_Pkg /* TM_trackside::Write_P041::_L10 */ _L10;
  kcg_bool /* TM_trackside::Write_P041::_L18 */ _L18;
  kcg_int /* TM_trackside::Write_P041::_L21 */ _L21;
  kcg_int /* TM_trackside::Write_P041::_L22 */ _L22;
  CompressedPackets_T_Common_Types_Pkg /* TM_trackside::Write_P041::_L39 */ _L39;
  CompressedPackets_T_Common_Types_Pkg /* TM_trackside::Write_P041::_L40 */ _L40;
  CompressedPacketData_T_Common_Types_Pkg /* TM_trackside::Write_P041::_L42 */ _L42;
  Metadata_T_Common_Types_Pkg /* TM_trackside::Write_P041::_L41 */ _L41;
  CompressedPacketData_T_Common_Types_Pkg /* TM_trackside::Write_P041::_L44 */ _L44;
  MetadataElement_T_Common_Types_Pkg /* TM_trackside::Write_P041::_L43 */ _L43;
} outC_Write_P041_TM_trackside;

/* ===========  node initialization and cycle functions  =========== */
/* TM_trackside::Write_P041 */
extern void Write_P041_TM_trackside(
  /* TM_trackside::Write_P041::Packet41 */ P041_trackside_int_T_TM *Packet41,
  /* TM_trackside::Write_P041::Packets */ CompressedPackets_T_Common_Types_Pkg *Packets,
  outC_Write_P041_TM_trackside *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Write_P041_reset_TM_trackside(outC_Write_P041_TM_trackside *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Write_P041_init_TM_trackside(outC_Write_P041_TM_trackside *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Write_P041_TM_trackside_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Write_P041_TM_trackside.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

