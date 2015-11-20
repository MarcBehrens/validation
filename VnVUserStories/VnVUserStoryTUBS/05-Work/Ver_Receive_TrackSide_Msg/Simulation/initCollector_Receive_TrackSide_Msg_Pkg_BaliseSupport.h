/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_
#define _initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_

#include "kcg_types.h"
#include "convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector::outCollector */ outCollector;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector::_L11 */ _L11;
  centerOfBalisePosition_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector::_L10 */ _L10;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector::_L9 */ _L9;
  NID_C /* Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector::_L8 */ _L8;
  kcg_int /* Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector::_L7 */ _L7;
  TelegramHeader_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector::_L6 */ _L6;
  kcg_int /* Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector::_L5 */ _L5;
  N_TOTAL /* Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector::_L4 */ _L4;
  NID_BG /* Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector::_L3 */ _L3;
  centerOfBalisePosition_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector::_L2 */ _L2;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector::_L1 */ _L1;
  Telegram_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector::_L12 */ _L12;
} outC_initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport;

/* ===========  node initialization and cycle functions  =========== */
/* Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector */
extern void initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector::newTelegram */ Telegram_T_BG_Types_Pkg *newTelegram,
  outC_initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void initCollector_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void initCollector_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

