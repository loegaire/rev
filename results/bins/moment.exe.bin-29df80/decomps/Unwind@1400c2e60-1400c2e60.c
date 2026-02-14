
void Unwind_1400c2e60(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  void *_Memory;
  
  if (0xf < *(ulonglong *)(param_2 + 0xe8)) {
    pvVar1 = *(void **)(param_2 + 0xd0);
    _Memory = pvVar1;
    if ((0xfff < *(ulonglong *)(param_2 + 0xe8) + 1) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *(undefined8 *)(param_2 + 0xe0) = 0;
  *(undefined8 *)(param_2 + 0xe8) = 0xf;
  *(undefined1 *)(param_2 + 0xd0) = 0;
  return;
}

