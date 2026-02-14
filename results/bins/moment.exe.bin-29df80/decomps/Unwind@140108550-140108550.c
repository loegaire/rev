
void Unwind_140108550(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  void *_Memory;
  
  if (0xf < *(ulonglong *)(param_2 + 0x12a8)) {
    pvVar1 = *(void **)(param_2 + 0x1290);
    _Memory = pvVar1;
    if ((0xfff < *(ulonglong *)(param_2 + 0x12a8) + 1) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  return;
}

