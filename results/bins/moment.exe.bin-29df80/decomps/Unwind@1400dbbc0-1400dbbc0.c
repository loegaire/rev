
void Unwind_1400dbbc0(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  undefined1 (*pauVar2) [16];
  void *pvVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  
  lVar7 = *(longlong *)(param_2 + 0x208);
  if (*(longlong *)(param_2 + 0x1f8) != *(longlong *)(param_2 + 0x1f0)) {
    puVar4 = (ulonglong *)(*(longlong *)(param_2 + 0x1f8) + 0x18);
    do {
      if (7 < *puVar4) {
        pvVar1 = (void *)puVar4[-3];
        pvVar3 = pvVar1;
        if ((0xfff < *puVar4 * 2 + 2) &&
           (pvVar3 = *(void **)((longlong)pvVar1 - 8),
           0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) goto LAB_1400dbd7f;
        free(pvVar3);
      }
      puVar4[-1] = 0;
      *puVar4 = 7;
      *(undefined2 *)(puVar4 + -3) = 0;
      puVar4 = puVar4 + 5;
      lVar7 = lVar7 + -0x28;
    } while (lVar7 != 0);
  }
  plVar5 = (longlong *)**(undefined8 **)(param_2 + 0x1e8);
  if (plVar5 != (longlong *)0x0) {
    plVar6 = *(longlong **)(*(longlong *)(param_2 + 0x210) + 0x68);
    if (plVar5 != plVar6) {
      do {
        if (7 < (ulonglong)plVar5[3]) {
          pvVar1 = (void *)*plVar5;
          pvVar3 = pvVar1;
          if ((0xfff < plVar5[3] * 2 + 2U) &&
             (pvVar3 = *(void **)((longlong)pvVar1 + -8),
             0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) goto LAB_1400dbd7f;
          free(pvVar3);
        }
        plVar5[2] = 0;
        plVar5[3] = 7;
        *(undefined2 *)plVar5 = 0;
        plVar5 = plVar5 + 5;
      } while (plVar5 != plVar6);
      plVar5 = (longlong *)**(undefined8 **)(param_2 + 0x1e8);
    }
    plVar6 = plVar5;
    if ((0xfff < (ulonglong)
                 (*(longlong *)(*(longlong *)(param_2 + 0x210) + 0x70) - (longlong)plVar5)) &&
       (plVar6 = (longlong *)plVar5[-1],
       0x1f < (ulonglong)((longlong)plVar5 + (-8 - (longlong)plVar6)))) {
LAB_1400dbd7f:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(plVar6);
    pauVar2 = *(undefined1 (**) [16])(param_2 + 0x1e8);
    *pauVar2 = (undefined1  [16])0x0;
    *(undefined8 *)pauVar2[1] = 0;
  }
  return;
}

