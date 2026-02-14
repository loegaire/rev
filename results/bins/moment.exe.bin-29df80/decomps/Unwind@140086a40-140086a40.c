
void Unwind_140086a40(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  void *_Memory;
  
  if (0xf < *(ulonglong *)(param_2 + 0x718)) {
    pvVar1 = *(void **)(param_2 + 0x700);
    _Memory = pvVar1;
    if ((0xfff < *(ulonglong *)(param_2 + 0x718) + 1) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *(undefined8 *)(param_2 + 0x710) = 0;
  *(undefined8 *)(param_2 + 0x718) = 0xf;
  *(undefined1 *)(param_2 + 0x700) = 0;
  return;
}

