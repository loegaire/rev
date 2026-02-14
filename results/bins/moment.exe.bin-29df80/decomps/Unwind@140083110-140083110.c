
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Unwind_140083110(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  void *pvVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)(param_2 + 0x11d0);
  if (*(longlong *)(param_2 + 0x1170) != *(longlong *)(param_2 + 0x11d8)) {
    puVar4 = (ulonglong *)(*(longlong *)(param_2 + 0x1170) + 0x38);
    do {
      if (0xf < *puVar4) {
        pvVar1 = (void *)puVar4[-3];
        pvVar2 = pvVar1;
        if ((0xfff < *puVar4 + 1) &&
           (pvVar2 = *(void **)((longlong)pvVar1 - 8),
           0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(pvVar2);
      }
      puVar4[-1] = 0;
      *puVar4 = 0xf;
      *(undefined1 *)(puVar4 + -3) = 0;
      if (0xf < puVar4[-4]) {
        pvVar1 = (void *)puVar4[-7];
        pvVar2 = pvVar1;
        if ((0xfff < puVar4[-4] + 1) &&
           (pvVar2 = *(void **)((longlong)pvVar1 - 8),
           0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(pvVar2);
      }
      puVar4[-5] = 0;
      puVar4[-4] = 0xf;
      *(undefined1 *)(puVar4 + -7) = 0;
      puVar4 = puVar4 + 8;
      lVar6 = lVar6 + -0x40;
    } while (lVar6 != 0);
  }
  if (DAT_14012af30 != (longlong *)0x0) {
    plVar5 = DAT_14012af38;
    plVar3 = DAT_14012af30;
    if (DAT_14012af30 != DAT_14012af38) {
      do {
        if (0xf < (ulonglong)plVar3[7]) {
          pvVar1 = (void *)plVar3[4];
          pvVar2 = pvVar1;
          if ((0xfff < plVar3[7] + 1U) &&
             (pvVar2 = *(void **)((longlong)pvVar1 + -8),
             0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
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
             0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(pvVar2);
        }
        plVar3[2] = 0;
        plVar3[3] = 0xf;
        *(undefined1 *)plVar3 = 0;
        plVar3 = plVar3 + 8;
      } while (plVar3 != plVar5);
    }
    plVar5 = DAT_14012af30;
    if ((0xfff < (ulonglong)(DAT_14012af40 - (longlong)DAT_14012af30)) &&
       (plVar5 = (longlong *)DAT_14012af30[-1],
       0x1f < (ulonglong)((longlong)DAT_14012af30 + (-8 - (longlong)plVar5)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(plVar5);
    _DAT_14012af30 = (undefined1  [16])0x0;
    DAT_14012af40 = 0;
  }
  return;
}

