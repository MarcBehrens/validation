#ifndef ROOT2_VERRETRACKMSG_VERRETRACKMSG_PKG_INTERFACE
#define ROOT2_VERRETRACKMSG_VERRETRACKMSG_PKG_INTERFACE


#include "NewSmuTypes.h"
#include "kcg_types.h"
#include "Root2_VerReTrackMsg_VerReTrackMsg_Pkg.h"

extern SimSimulator * pSimulator;

/*******************************
 * Simulation context
 *******************************/
extern inC_Root2_VerReTrackMsg_VerReTrackMsg_Pkg inputs_ctx;
extern outC_Root2_VerReTrackMsg_VerReTrackMsg_Pkg outputs_ctx;

/* separate_io: inputs declaration */

/* separate_io: outputs declaration */
/*******************************
 * Validity
 *******************************/
extern int valid(void*);
extern int notvalid(void*);

#ifdef EXTENDED_SIM
void BeforeSimInit();
void AfterSimInit();
void BeforeSimStep();
void AfterSimStep();
void ExtendedSimStop();
void ExtendedGatherDumpData(char * pData);
void ExtendedRestoreDumpData(const char * pData);
int ExtendedGetDumpSize();
void UpdateValues();
extern void UpdateSimulatorValues();
extern int GraphicalInputsConnected;
#endif /* EXTENDED_SIM */

#define SIM_INFO    1
#define SIM_WARNING 2
#define SIM_ERROR   3
extern void SsmOutputMessage(int level, const char* str);

#endif /*ROOT2_VERRETRACKMSG_VERRETRACKMSG_PKG_INTERFACE */
