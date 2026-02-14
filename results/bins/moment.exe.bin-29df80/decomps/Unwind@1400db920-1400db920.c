
void Unwind_1400db920(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  undefined1 (*pauVar2) [16];
  ulonglong uVar3;
  void *pvVar4;
  undefined1 auVar5 [16];
  
  pvVar1 = (void *)**(longlong **)(param_2 + 0x1d8);
  if (pvVar1 != (void *)0x0) {
    pvVar4 = pvVar1;
    if ((0xfff < (ulonglong)
                 (*(longlong *)(*(longlong *)(param_2 + 0x200) + 0x48) - (longlong)pvVar1)) &&
       (pvVar4 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4)))) goto LAB_1400dba23;
    free(pvVar4);
    auVar5._0_12_ = ZEXT812(0);
    auVar5._12_4_ = 0;
    pauVar2 = *(undefined1 (**) [16])(param_2 + 0x1d8);
    *pauVar2 = auVar5;
    *(undefined8 *)pauVar2[1] = 0;
  }
  uVar3 = *(ulonglong *)(*(longlong *)(param_2 + 0x200) + 0x28);
  if (7 < uVar3) {
    pvVar1 = (void *)**(longlong **)(param_2 + 0x1e8);
    pvVar4 = pvVar1;
    if ((0xfff < uVar3 * 2 + 2) &&
       (pvVar4 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4)))) {
LAB_1400dba23:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar4);
  }
  free(*(void **)(param_2 + 0x200));
  return;
}

