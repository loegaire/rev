
void Unwind_140084bb0(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  void *pvVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_2 + 0x1b0);
  if ((*(char *)(param_2 + 0x1184) == '\x01') && (param_2 + 0x700 != lVar3)) {
    do {
      if (0xf < *(ulonglong *)(lVar3 + -8)) {
        pvVar1 = *(void **)(lVar3 + -0x20);
        pvVar2 = pvVar1;
        if ((0xfff < *(ulonglong *)(lVar3 + -8) + 1) &&
           (pvVar2 = *(void **)((longlong)pvVar1 + -8),
           0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(pvVar2);
      }
      *(undefined8 *)(lVar3 + -0x10) = 0;
      *(undefined8 *)(lVar3 + -8) = 0xf;
      *(undefined1 *)(lVar3 + -0x20) = 0;
      if (0xf < *(ulonglong *)(lVar3 + -0x28)) {
        pvVar1 = *(void **)(lVar3 + -0x40);
        pvVar2 = pvVar1;
        if ((0xfff < *(ulonglong *)(lVar3 + -0x28) + 1) &&
           (pvVar2 = *(void **)((longlong)pvVar1 + -8),
           0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(pvVar2);
      }
      *(undefined8 *)(lVar3 + -0x30) = 0;
      *(undefined8 *)(lVar3 + -0x28) = 0xf;
      *(undefined1 *)(lVar3 + -0x40) = 0;
      lVar3 = lVar3 + -0x40;
    } while (lVar3 != param_2 + 0x700);
  }
  return;
}

