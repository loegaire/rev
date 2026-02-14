
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Unwind_140003400(void)

{
  void *pvVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (DAT_14012b270 != (longlong *)0x0) {
    plVar4 = DAT_14012b278;
    plVar3 = DAT_14012b270;
    if (DAT_14012b270 != DAT_14012b278) {
      do {
        if (0xf < (ulonglong)plVar3[7]) {
          pvVar2 = (void *)plVar3[4];
          pvVar1 = pvVar2;
          if ((0xfff < plVar3[7] + 1U) &&
             (pvVar1 = *(void **)((longlong)pvVar2 + -8),
             0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar1)))) goto LAB_1400036c1;
          free(pvVar1);
        }
        plVar3[6] = 0;
        plVar3[7] = 0xf;
        *(undefined1 *)(plVar3 + 4) = 0;
        if (0xf < (ulonglong)plVar3[3]) {
          pvVar2 = (void *)*plVar3;
          pvVar1 = pvVar2;
          if ((0xfff < plVar3[3] + 1U) &&
             (pvVar1 = *(void **)((longlong)pvVar2 + -8),
             0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar1)))) goto LAB_1400036c1;
          free(pvVar1);
        }
        plVar3[2] = 0;
        plVar3[3] = 0xf;
        *(undefined1 *)plVar3 = 0;
        plVar3 = plVar3 + 8;
      } while (plVar3 != plVar4);
    }
    plVar4 = DAT_14012b270;
    if ((0xfff < (ulonglong)(DAT_14012b280 - (longlong)DAT_14012b270)) &&
       (plVar4 = (longlong *)DAT_14012b270[-1],
       0x1f < (ulonglong)((longlong)DAT_14012b270 + (-8 - (longlong)plVar4)))) goto LAB_1400036c1;
    free(plVar4);
    _DAT_14012b270 = ZEXT812(0);
    register0x0000120c = 0;
    DAT_14012b280 = 0;
  }
  if (DAT_14012b258 != (longlong *)0x0) {
    plVar4 = DAT_14012b260;
    plVar3 = DAT_14012b258;
    if (DAT_14012b258 != DAT_14012b260) {
      do {
        if (0xf < (ulonglong)plVar3[3]) {
          pvVar2 = (void *)*plVar3;
          pvVar1 = pvVar2;
          if ((0xfff < plVar3[3] + 1U) &&
             (pvVar1 = *(void **)((longlong)pvVar2 + -8),
             0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar1)))) goto LAB_1400036c1;
          free(pvVar1);
        }
        plVar3[2] = 0;
        plVar3[3] = 0xf;
        *(undefined1 *)plVar3 = 0;
        plVar3 = plVar3 + 5;
      } while (plVar3 != plVar4);
    }
    plVar4 = DAT_14012b258;
    if ((0xfff < (ulonglong)(DAT_14012b268 - (longlong)DAT_14012b258)) &&
       (plVar4 = (longlong *)DAT_14012b258[-1],
       0x1f < (ulonglong)((longlong)DAT_14012b258 + (-8 - (longlong)plVar4)))) goto LAB_1400036c1;
    free(plVar4);
    _DAT_14012b258 = ZEXT812(0);
    register0x0000120c = 0;
    DAT_14012b268 = 0;
  }
  _Cnd_destroy_in_situ(&DAT_14012b208);
  if (7 < DAT_14012b1f8) {
    pvVar1 = (void *)CONCAT62(DAT_14012b1e0._2_6_,(undefined2)DAT_14012b1e0);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_14012b1f8 * 2 + 2) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
LAB_1400036c1:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar2);
  }
  _DAT_14012b1f0 = 0;
  DAT_14012b1f8 = 7;
  DAT_14012b1e0._0_2_ = 0;
  return;
}

