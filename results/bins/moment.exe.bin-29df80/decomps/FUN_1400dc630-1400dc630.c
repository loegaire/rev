
void FUN_1400dc630(longlong param_1)

{
  void *pvVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [64];
  
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = pvVar1;
    if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x28) - (longlong)pvVar1)) &&
       (pvVar3 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) {
LAB_1400dc76d:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar3);
    auVar5._0_12_ = ZEXT812(0);
    auVar5._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0x18) = auVar5;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  plVar4 = *(longlong **)(param_1 + 8);
  *(undefined8 *)plVar4[1] = 0;
  plVar4 = (longlong *)*plVar4;
  if (plVar4 != (longlong *)0x0) {
    auVar6 = ZEXT1264(ZEXT812(0));
    do {
      plVar2 = (longlong *)*plVar4;
      pvVar1 = (void *)plVar4[7];
      if (pvVar1 != (void *)0x0) {
        pvVar3 = pvVar1;
        if ((0xfff < (ulonglong)(plVar4[9] - (longlong)pvVar1)) &&
           (pvVar3 = *(void **)((longlong)pvVar1 + -8),
           0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) goto LAB_1400dc76d;
        free(pvVar3);
        *(undefined1 (*) [16])(plVar4 + 7) = auVar6._0_16_;
        plVar4[9] = 0;
      }
      if (7 < (ulonglong)plVar4[5]) {
        pvVar1 = (void *)plVar4[2];
        pvVar3 = pvVar1;
        if ((0xfff < plVar4[5] * 2 + 2U) &&
           (pvVar3 = *(void **)((longlong)pvVar1 + -8),
           0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) goto LAB_1400dc76d;
        free(pvVar3);
      }
      free(plVar4);
      plVar4 = plVar2;
    } while (plVar2 != (longlong *)0x0);
  }
  free(*(void **)(param_1 + 8));
  return;
}

