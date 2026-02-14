
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140102a50(void)

{
  void *pvVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (DAT_14012b318 != (longlong *)0x0) {
    plVar4 = DAT_14012b320;
    plVar3 = DAT_14012b318;
    if (DAT_14012b318 != DAT_14012b320) {
      do {
        if (0xf < (ulonglong)plVar3[7]) {
          pvVar1 = (void *)plVar3[4];
          pvVar2 = pvVar1;
          if ((0xfff < plVar3[7] + 1U) &&
             (pvVar2 = *(void **)((longlong)pvVar1 + -8),
             0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) goto LAB_140102b8e;
          free(pvVar2);
        }
        plVar3[6] = 0;
        plVar3[7] = 0xf;
        *(undefined1 *)(plVar3 + 4) = 0;
        if (0xf < (ulonglong)plVar3[3]) {
          pvVar1 = (void *)*plVar3;
          pvVar2 = pvVar1;
          if ((0xfff < plVar3[3] + 1U) &&
             (pvVar2 = *(void **)((longlong)pvVar1 + -8),
             0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) goto LAB_140102b8e;
          free(pvVar2);
        }
        plVar3[2] = 0;
        plVar3[3] = 0xf;
        *(undefined1 *)plVar3 = 0;
        plVar3 = plVar3 + 8;
      } while (plVar3 != plVar4);
    }
    plVar4 = DAT_14012b318;
    if ((0xfff < (ulonglong)(DAT_14012b328 - (longlong)DAT_14012b318)) &&
       (plVar4 = (longlong *)DAT_14012b318[-1],
       0x1f < (ulonglong)((longlong)DAT_14012b318 + (-8 - (longlong)plVar4)))) {
LAB_140102b8e:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(plVar4);
    _DAT_14012b318 = ZEXT812(0);
    register0x0000120c = 0;
    DAT_14012b328 = 0;
  }
  return;
}

