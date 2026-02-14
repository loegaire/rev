
void Unwind_1400dba30(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  undefined1 (*pauVar2) [16];
  longlong *plVar3;
  void *pvVar4;
  longlong *plVar5;
  undefined1 auVar6 [64];
  
  pvVar1 = (void *)**(longlong **)(param_2 + 0x118);
  if (pvVar1 != (void *)0x0) {
    pvVar4 = pvVar1;
    if ((0xfff < (ulonglong)
                 (*(longlong *)(*(longlong *)(param_2 + 0x210) + 0x48) - (longlong)pvVar1)) &&
       (pvVar4 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4)))) {
LAB_1400dbbb9:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar4);
    pauVar2 = *(undefined1 (**) [16])(param_2 + 0x118);
    *pauVar2 = (undefined1  [16])0x0;
    *(undefined8 *)pauVar2[1] = 0;
  }
  plVar5 = (longlong *)**(longlong **)(param_2 + 0x108);
  *(undefined8 *)plVar5[1] = 0;
  plVar5 = (longlong *)*plVar5;
  if (plVar5 != (longlong *)0x0) {
    auVar6 = ZEXT1264(ZEXT812(0));
    do {
      plVar3 = (longlong *)*plVar5;
      pvVar1 = (void *)plVar5[7];
      if (pvVar1 != (void *)0x0) {
        pvVar4 = pvVar1;
        if ((0xfff < (ulonglong)(plVar5[9] - (longlong)pvVar1)) &&
           (pvVar4 = *(void **)((longlong)pvVar1 + -8),
           0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4)))) goto LAB_1400dbbb9;
        free(pvVar4);
        *(undefined1 (*) [16])(plVar5 + 7) = auVar6._0_16_;
        plVar5[9] = 0;
      }
      if (7 < (ulonglong)plVar5[5]) {
        pvVar1 = (void *)plVar5[2];
        pvVar4 = pvVar1;
        if ((0xfff < plVar5[5] * 2 + 2U) &&
           (pvVar4 = *(void **)((longlong)pvVar1 + -8),
           0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4)))) goto LAB_1400dbbb9;
        free(pvVar4);
      }
      free(plVar5);
      plVar5 = plVar3;
    } while (plVar3 != (longlong *)0x0);
  }
  free((void *)**(undefined8 **)(param_2 + 0x108));
  return;
}

