
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400c0c40(void)

{
  void *pvVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  FUN_1400c0b20(*(longlong **)((longlong)DAT_14012b2a8 + 8));
  free(DAT_14012b2a8);
  FUN_1400c0b20(*(longlong **)((longlong)DAT_14012b298 + 8));
  free(DAT_14012b298);
  FUN_1400c0bb0(*(longlong **)((longlong)DAT_14012b288 + 8));
  free(DAT_14012b288);
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
             0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar1)))) goto LAB_1400c138e;
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
             0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar1)))) goto LAB_1400c138e;
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
       0x1f < (ulonglong)((longlong)DAT_14012b270 + (-8 - (longlong)plVar4)))) goto LAB_1400c138e;
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
             0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar1)))) goto LAB_1400c138e;
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
       0x1f < (ulonglong)((longlong)DAT_14012b258 + (-8 - (longlong)plVar4)))) goto LAB_1400c138e;
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
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) goto LAB_1400c138e;
    free(pvVar2);
  }
  _DAT_14012b1f0 = 0;
  DAT_14012b1f8 = 7;
  DAT_14012b1e0._0_2_ = 0;
  if (7 < DAT_14012b1d8) {
    pvVar1 = (void *)CONCAT62(DAT_14012b1c0._2_6_,(undefined2)DAT_14012b1c0);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_14012b1d8 * 2 + 2) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) goto LAB_1400c138e;
    free(pvVar2);
  }
  _DAT_14012b1d0 = 0;
  DAT_14012b1d8 = 7;
  DAT_14012b1c0._0_2_ = 0;
  if (7 < DAT_14012b1b8) {
    pvVar1 = (void *)CONCAT62(DAT_14012b1a0._2_6_,(undefined2)DAT_14012b1a0);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_14012b1b8 * 2 + 2) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) goto LAB_1400c138e;
    free(pvVar2);
  }
  _DAT_14012b1b0 = 0;
  DAT_14012b1b8 = 7;
  DAT_14012b1a0._0_2_ = 0;
  if (0xf < DAT_14012b198) {
    pvVar1 = (void *)CONCAT71(DAT_14012b180._1_7_,(undefined1)DAT_14012b180);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_14012b198 + 1) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) goto LAB_1400c138e;
    free(pvVar2);
  }
  _DAT_14012b190 = 0;
  DAT_14012b198 = 0xf;
  DAT_14012b180._0_1_ = 0;
  if (0xf < DAT_14012b178) {
    pvVar1 = (void *)CONCAT71(DAT_14012b160._1_7_,(undefined1)DAT_14012b160);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_14012b178 + 1) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) goto LAB_1400c138e;
    free(pvVar2);
  }
  _DAT_14012b170 = 0;
  DAT_14012b178 = 0xf;
  DAT_14012b160._0_1_ = 0;
  if (0xf < DAT_14012b158) {
    pvVar1 = (void *)CONCAT71(DAT_14012b140._1_7_,(undefined1)DAT_14012b140);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_14012b158 + 1) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) goto LAB_1400c138e;
    free(pvVar2);
  }
  _DAT_14012b150 = 0;
  DAT_14012b158 = 0xf;
  DAT_14012b140._0_1_ = 0;
  if (0xf < DAT_14012b138) {
    pvVar1 = (void *)CONCAT71(DAT_14012b120._1_7_,(undefined1)DAT_14012b120);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_14012b138 + 1) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) goto LAB_1400c138e;
    free(pvVar2);
  }
  _DAT_14012b130 = 0;
  DAT_14012b138 = 0xf;
  DAT_14012b120._0_1_ = 0;
  if (7 < DAT_14012b118) {
    pvVar1 = (void *)CONCAT62(DAT_14012b100._2_6_,(undefined2)DAT_14012b100);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_14012b118 * 2 + 2) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) goto LAB_1400c138e;
    free(pvVar2);
  }
  _DAT_14012b110 = 0;
  DAT_14012b118 = 7;
  DAT_14012b100._0_2_ = 0;
  if (7 < DAT_14012b0f8) {
    pvVar1 = (void *)CONCAT62(DAT_14012b0e0._2_6_,(undefined2)DAT_14012b0e0);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_14012b0f8 * 2 + 2) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) goto LAB_1400c138e;
    free(pvVar2);
  }
  _DAT_14012b0f0 = 0;
  DAT_14012b0f8 = 7;
  DAT_14012b0e0._0_2_ = 0;
  if (7 < DAT_14012b0d8) {
    pvVar1 = (void *)CONCAT62(DAT_14012b0c0._2_6_,(undefined2)DAT_14012b0c0);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_14012b0d8 * 2 + 2) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) goto LAB_1400c138e;
    free(pvVar2);
  }
  _DAT_14012b0d0 = 0;
  DAT_14012b0d8 = 7;
  DAT_14012b0c0._0_2_ = 0;
  if (0xf < DAT_14012b0b8) {
    pvVar1 = (void *)CONCAT71(DAT_14012b0a0._1_7_,(undefined1)DAT_14012b0a0);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_14012b0b8 + 1) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) goto LAB_1400c138e;
    free(pvVar2);
  }
  _DAT_14012b0b0 = 0;
  DAT_14012b0b8 = 0xf;
  DAT_14012b0a0._0_1_ = 0;
  if (0xf < DAT_14012b098) {
    pvVar1 = (void *)CONCAT71(DAT_14012b080._1_7_,(undefined1)DAT_14012b080);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_14012b098 + 1) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
LAB_1400c138e:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar2);
  }
  _DAT_14012b090 = 0;
  DAT_14012b098 = 0xf;
  DAT_14012b080._0_1_ = 0;
  return;
}

