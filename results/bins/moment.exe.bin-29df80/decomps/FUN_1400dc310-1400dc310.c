
void FUN_1400dc310(longlong param_1)

{
  void *pvVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [64];
  
  pvVar2 = *(void **)(param_1 + 0x98);
  if (pvVar2 != (void *)0x0) {
    pvVar1 = *(void **)(param_1 + 0xa0);
    if (pvVar2 != pvVar1) {
      do {
        FUN_1400dc310((longlong)pvVar2);
        pvVar2 = (void *)((longlong)pvVar2 + 0xb0);
      } while (pvVar2 != pvVar1);
      pvVar2 = *(void **)*(undefined1 (*) [16])(param_1 + 0x98);
    }
    pvVar1 = pvVar2;
    if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0xa8) - (longlong)pvVar2)) &&
       (pvVar1 = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar1)))) goto LAB_1400dc61f;
    free(pvVar1);
    auVar5._0_12_ = ZEXT812(0);
    auVar5._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0x98) = auVar5;
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  if (7 < *(ulonglong *)(param_1 + 0x90)) {
    pvVar2 = *(void **)(param_1 + 0x78);
    pvVar1 = pvVar2;
    if ((0xfff < *(ulonglong *)(param_1 + 0x90) * 2 + 2) &&
       (pvVar1 = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar1)))) goto LAB_1400dc61f;
    free(pvVar1);
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 7;
  *(undefined2 *)(param_1 + 0x78) = 0;
  plVar4 = *(longlong **)(param_1 + 0x60);
  if (plVar4 != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x68);
    if (plVar4 != plVar3) {
      do {
        if (7 < (ulonglong)plVar4[3]) {
          pvVar2 = (void *)*plVar4;
          pvVar1 = pvVar2;
          if ((0xfff < plVar4[3] * 2 + 2U) &&
             (pvVar1 = *(void **)((longlong)pvVar2 + -8),
             0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar1)))) goto LAB_1400dc61f;
          free(pvVar1);
        }
        plVar4[2] = 0;
        plVar4[3] = 7;
        *(undefined2 *)plVar4 = 0;
        plVar4 = plVar4 + 5;
      } while (plVar4 != plVar3);
      plVar4 = *(longlong **)*(undefined1 (*) [16])(param_1 + 0x60);
    }
    plVar3 = plVar4;
    if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x70) - (longlong)plVar4)) &&
       (plVar3 = (longlong *)plVar4[-1],
       0x1f < (ulonglong)((longlong)plVar4 + (-8 - (longlong)plVar3)))) goto LAB_1400dc61f;
    free(plVar3);
    auVar6._0_12_ = ZEXT812(0);
    auVar6._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0x60) = auVar6;
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  pvVar2 = *(void **)(param_1 + 0x38);
  if (pvVar2 != (void *)0x0) {
    pvVar1 = pvVar2;
    if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x48) - (longlong)pvVar2)) &&
       (pvVar1 = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar1)))) {
LAB_1400dc61f:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar1);
    auVar7._0_12_ = ZEXT812(0);
    auVar7._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0x38) = auVar7;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  plVar4 = *(longlong **)(param_1 + 0x28);
  *(undefined8 *)plVar4[1] = 0;
  plVar4 = (longlong *)*plVar4;
  if (plVar4 != (longlong *)0x0) {
    auVar8 = ZEXT1264(ZEXT812(0));
    do {
      plVar3 = (longlong *)*plVar4;
      pvVar2 = (void *)plVar4[7];
      if (pvVar2 != (void *)0x0) {
        pvVar1 = pvVar2;
        if ((0xfff < (ulonglong)(plVar4[9] - (longlong)pvVar2)) &&
           (pvVar1 = *(void **)((longlong)pvVar2 + -8),
           0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar1)))) goto LAB_1400dc61f;
        free(pvVar1);
        *(undefined1 (*) [16])(plVar4 + 7) = auVar8._0_16_;
        plVar4[9] = 0;
      }
      if (7 < (ulonglong)plVar4[5]) {
        pvVar2 = (void *)plVar4[2];
        pvVar1 = pvVar2;
        if ((0xfff < plVar4[5] * 2 + 2U) &&
           (pvVar1 = *(void **)((longlong)pvVar2 + -8),
           0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar1)))) goto LAB_1400dc61f;
        free(pvVar1);
      }
      free(plVar4);
      plVar4 = plVar3;
    } while (plVar3 != (longlong *)0x0);
  }
  free(*(void **)(param_1 + 0x28));
  return;
}

