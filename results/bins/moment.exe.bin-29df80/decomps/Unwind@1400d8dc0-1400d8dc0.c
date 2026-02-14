
void Unwind_1400d8dc0(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  longlong *plVar2;
  undefined1 (*pauVar3) [16];
  longlong *plVar4;
  void *pvVar5;
  longlong *plVar6;
  undefined1 auVar7 [64];
  
  pvVar1 = (void *)**(longlong **)(param_2 + 0x2160);
  plVar2 = *(longlong **)(param_2 + 0x20f0);
  if (pvVar1 != (void *)0x0) {
    pvVar5 = pvVar1;
    if ((0xfff < (ulonglong)
                 (*(longlong *)(*(longlong *)(param_2 + 0x23a0) + 0x48) - (longlong)pvVar1)) &&
       (pvVar5 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar5)))) {
LAB_1400d8f48:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar5);
    pauVar3 = *(undefined1 (**) [16])(param_2 + 0x2160);
    *pauVar3 = (undefined1  [16])0x0;
    *(undefined8 *)pauVar3[1] = 0;
  }
  plVar6 = (longlong *)*plVar2;
  *(undefined8 *)plVar6[1] = 0;
  plVar6 = (longlong *)*plVar6;
  if (plVar6 != (longlong *)0x0) {
    auVar7 = ZEXT1264(ZEXT812(0));
    do {
      plVar4 = (longlong *)*plVar6;
      pvVar1 = (void *)plVar6[7];
      if (pvVar1 != (void *)0x0) {
        pvVar5 = pvVar1;
        if ((0xfff < (ulonglong)(plVar6[9] - (longlong)pvVar1)) &&
           (pvVar5 = *(void **)((longlong)pvVar1 + -8),
           0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar5)))) goto LAB_1400d8f48;
        free(pvVar5);
        *(undefined1 (*) [16])(plVar6 + 7) = auVar7._0_16_;
        plVar6[9] = 0;
      }
      if (7 < (ulonglong)plVar6[5]) {
        pvVar1 = (void *)plVar6[2];
        pvVar5 = pvVar1;
        if ((0xfff < plVar6[5] * 2 + 2U) &&
           (pvVar5 = *(void **)((longlong)pvVar1 + -8),
           0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar5)))) goto LAB_1400d8f48;
        free(pvVar5);
      }
      free(plVar6);
      plVar6 = plVar4;
    } while (plVar4 != (longlong *)0x0);
  }
  free((void *)*plVar2);
  return;
}

