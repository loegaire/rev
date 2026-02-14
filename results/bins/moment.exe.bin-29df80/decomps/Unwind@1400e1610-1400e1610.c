
void Unwind_1400e1610(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  longlong lVar3;
  void *pvVar4;
  
  uVar1 = *(ulonglong *)(*(longlong *)(param_2 + 0x1d0) + 0x58);
  if (0xf < uVar1) {
    pvVar2 = (void *)**(longlong **)(param_2 + 0x198);
    pvVar4 = pvVar2;
    if ((0xfff < uVar1 + 1) &&
       (pvVar4 = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar4)))) goto LAB_1400e1732;
    free(pvVar4);
  }
  lVar3 = *(longlong *)(param_2 + 0x1d0);
  *(undefined8 *)(lVar3 + 0x50) = 0;
  *(undefined8 *)(lVar3 + 0x58) = 0xf;
  *(undefined1 *)(lVar3 + 0x40) = 0;
  if (0xf < *(ulonglong *)(lVar3 + 0x38)) {
    pvVar2 = (void *)**(longlong **)(param_2 + 0x1b0);
    pvVar4 = pvVar2;
    if ((0xfff < *(ulonglong *)(lVar3 + 0x38) + 1) &&
       (pvVar4 = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar4)))) {
LAB_1400e1732:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar4);
  }
  free(*(void **)(param_2 + 0x1d0));
  return;
}

