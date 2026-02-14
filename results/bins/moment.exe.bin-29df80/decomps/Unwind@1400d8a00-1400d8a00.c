
void Unwind_1400d8a00(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 (*pauVar2) [16];
  void *pvVar3;
  void *pvVar4;
  ulonglong *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  
  lVar1 = *(longlong *)(param_2 + 0x23a0);
  pauVar2 = *(undefined1 (**) [16])(param_2 + 0x2390);
  lVar8 = *(longlong *)(param_2 + 0x2398);
  if (*(longlong *)(param_2 + 0x2360) != *(longlong *)(param_2 + 0x2388)) {
    puVar5 = (ulonglong *)(*(longlong *)(param_2 + 0x2360) + 0x18);
    do {
      if (7 < *puVar5) {
        pvVar3 = (void *)puVar5[-3];
        pvVar4 = pvVar3;
        if ((0xfff < *puVar5 * 2 + 2) &&
           (pvVar4 = *(void **)((longlong)pvVar3 - 8),
           0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar4)))) goto LAB_1400d8baa;
        free(pvVar4);
      }
      puVar5[-1] = 0;
      *puVar5 = 7;
      *(undefined2 *)(puVar5 + -3) = 0;
      puVar5 = puVar5 + 5;
      lVar8 = lVar8 + -0x28;
    } while (lVar8 != 0);
  }
  plVar6 = *(longlong **)*pauVar2;
  if (plVar6 != (longlong *)0x0) {
    plVar7 = *(longlong **)(lVar1 + 0x68);
    if (plVar6 != plVar7) {
      do {
        if (7 < (ulonglong)plVar6[3]) {
          pvVar3 = (void *)*plVar6;
          pvVar4 = pvVar3;
          if ((0xfff < plVar6[3] * 2 + 2U) &&
             (pvVar4 = *(void **)((longlong)pvVar3 + -8),
             0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar4)))) goto LAB_1400d8baa;
          free(pvVar4);
        }
        plVar6[2] = 0;
        plVar6[3] = 7;
        *(undefined2 *)plVar6 = 0;
        plVar6 = plVar6 + 5;
      } while (plVar6 != plVar7);
      plVar6 = *(longlong **)*pauVar2;
    }
    plVar7 = plVar6;
    if ((0xfff < (ulonglong)(*(longlong *)(lVar1 + 0x70) - (longlong)plVar6)) &&
       (plVar7 = (longlong *)plVar6[-1],
       0x1f < (ulonglong)((longlong)plVar6 + (-8 - (longlong)plVar7)))) {
LAB_1400d8baa:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(plVar7);
    *pauVar2 = (undefined1  [16])0x0;
    *(undefined8 *)pauVar2[1] = 0;
  }
  return;
}

