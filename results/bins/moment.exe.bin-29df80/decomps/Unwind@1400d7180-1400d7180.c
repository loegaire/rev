
void Unwind_1400d7180(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  void *pvVar2;
  longlong *plVar3;
  void *pvVar4;
  longlong *plVar5;
  undefined1 auVar6 [64];
  
  plVar1 = *(longlong **)(param_2 + 0x23a0);
  pvVar2 = (void *)plVar1[2];
  if (pvVar2 != (void *)0x0) {
    pvVar4 = pvVar2;
    if ((0xfff < (ulonglong)
                 (*(longlong *)
                   (*(longlong *)(param_2 + 0x2308) + 0x48 + *(longlong *)(param_2 + 0x2398)) -
                 (longlong)pvVar2)) &&
       (pvVar4 = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar4)))) {
LAB_1400d7319:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar4);
    *(undefined1 (*) [16])(plVar1 + 2) = (undefined1  [16])0x0;
    plVar1[4] = 0;
  }
  plVar5 = (longlong *)*plVar1;
  *(undefined8 *)plVar5[1] = 0;
  plVar5 = (longlong *)*plVar5;
  if (plVar5 != (longlong *)0x0) {
    auVar6 = ZEXT1264(ZEXT812(0));
    do {
      plVar3 = (longlong *)*plVar5;
      pvVar2 = (void *)plVar5[7];
      if (pvVar2 != (void *)0x0) {
        pvVar4 = pvVar2;
        if ((0xfff < (ulonglong)(plVar5[9] - (longlong)pvVar2)) &&
           (pvVar4 = *(void **)((longlong)pvVar2 + -8),
           0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar4)))) goto LAB_1400d7319;
        free(pvVar4);
        *(undefined1 (*) [16])(plVar5 + 7) = auVar6._0_16_;
        plVar5[9] = 0;
      }
      if (7 < (ulonglong)plVar5[5]) {
        pvVar2 = (void *)plVar5[2];
        pvVar4 = pvVar2;
        if ((0xfff < plVar5[5] * 2 + 2U) &&
           (pvVar4 = *(void **)((longlong)pvVar2 + -8),
           0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar4)))) goto LAB_1400d7319;
        free(pvVar4);
      }
      free(plVar5);
      plVar5 = plVar3;
    } while (plVar3 != (longlong *)0x0);
  }
  free((void *)*plVar1);
  *(undefined8 *)(param_2 + 0x2240) = *(undefined8 *)(param_2 + 0x2120);
  return;
}

