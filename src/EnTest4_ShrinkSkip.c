#include "modding.h"
#include "global.h"

RECOMP_HOOK_RETURN("EnTest4_GetBellTimeAndShrinkScreenBeforeDay3")
void EnTest4_GetBellTimeAndShrinkScreenBeforeDay3(void) {
  gSaveContext.screenScale = 1000.0f;
  gSaveContext.screenScaleFlag = false;
}
