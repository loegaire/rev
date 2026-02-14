
void Unwind_1400cd210(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  pvVar1 = *(void **)(param_2 + 0x448);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = pvVar1;
    if ((0xfff < (ulonglong)(*(longlong *)(param_2 + 0x458) - (longlong)pvVar1)) &&
       (pvVar3 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) {
LAB_1400cd42b:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar3);
    *(undefined1 (*) [16])(param_2 + 0x448) = (undefined1  [16])0x0;
    *(undefined8 *)(param_2 + 0x458) = 0;
  }
  plVar4 = *(longlong **)(param_2 + 0x438);
  *(undefined8 *)plVar4[1] = 0;
  plVar4 = (longlong *)*plVar4;
  if (plVar4 != (longlong *)0x0) {
    lVar5 = 0;
    lVar6 = 0;
    do {
      plVar2 = (longlong *)*plVar4;
      pvVar1 = (void *)plVar4[7];
      if (pvVar1 != (void *)0x0) {
        pvVar3 = pvVar1;
        if ((0xfff < (ulonglong)(plVar4[9] - (longlong)pvVar1)) &&
           (pvVar3 = *(void **)((longlong)pvVar1 + -8),
           0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) goto LAB_1400cd42b;
        free(pvVar3);
        plVar4[7] = lVar5;
        plVar4[8] = lVar6;
        plVar4[9] = 0;
      }
      if (7 < (ulonglong)plVar4[5]) {
        pvVar1 = (void *)plVar4[2];
        pvVar3 = pvVar1;
        if ((0xfff < plVar4[5] * 2 + 2U) &&
           (pvVar3 = *(void **)((longlong)pvVar1 + -8),
           0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) goto LAB_1400cd42b;
        free(pvVar3);
      }
      free(plVar4);
      plVar4 = plVar2;
    } while (plVar2 != (longlong *)0x0);
  }
  free(*(void **)(param_2 + 0x438));
  return;
}

