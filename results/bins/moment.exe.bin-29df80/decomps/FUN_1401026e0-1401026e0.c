
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401026e0(void)

{
  void *pvVar1;
  void *_Memory;
  longlong *plVar2;
  longlong *plVar3;
  
  if (DAT_14012b378 != (longlong *)0x0) {
    plVar3 = DAT_14012b380;
    plVar2 = DAT_14012b378;
    if (DAT_14012b378 != DAT_14012b380) {
      do {
        if (0xf < (ulonglong)plVar2[3]) {
          pvVar1 = (void *)*plVar2;
          _Memory = pvVar1;
          if ((0xfff < plVar2[3] + 1U) &&
             (_Memory = *(void **)((longlong)pvVar1 + -8),
             0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) goto LAB_1401027c0;
          free(_Memory);
        }
        plVar2[2] = 0;
        plVar2[3] = 0xf;
        *(undefined1 *)plVar2 = 0;
        plVar2 = plVar2 + 4;
      } while (plVar2 != plVar3);
    }
    plVar3 = DAT_14012b378;
    if ((0xfff < (ulonglong)(DAT_14012b388 - (longlong)DAT_14012b378)) &&
       (plVar3 = (longlong *)DAT_14012b378[-1],
       0x1f < (ulonglong)((longlong)DAT_14012b378 + (-8 - (longlong)plVar3)))) {
LAB_1401027c0:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(plVar3);
    _DAT_14012b378 = ZEXT812(0);
    register0x0000120c = 0;
    DAT_14012b388 = 0;
  }
  return;
}

