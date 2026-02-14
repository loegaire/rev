
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400bfea0(void)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (DAT_14012ab58 != (longlong *)0x0) {
    plVar2 = DAT_14012ab60;
    plVar1 = DAT_14012ab58;
    if (DAT_14012ab58 != DAT_14012ab60) {
      do {
        if (1 < *plVar1 + 1U) {
          *plVar1 = 0;
          NtClose();
        }
        plVar1 = plVar1 + 1;
      } while (plVar1 != plVar2);
    }
    plVar2 = DAT_14012ab58;
    if ((0xfff < (ulonglong)(DAT_14012ab68 - (longlong)DAT_14012ab58)) &&
       (plVar2 = (longlong *)DAT_14012ab58[-1],
       0x1f < (ulonglong)((longlong)DAT_14012ab58 + (-8 - (longlong)plVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(plVar2);
    _DAT_14012ab58 = ZEXT812(0);
    register0x0000120c = 0;
    DAT_14012ab68 = 0;
  }
  return;
}

