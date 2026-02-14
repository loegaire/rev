
void Unwind_140104280(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  void *_Memory;
  
  if (0xf < *(ulonglong *)(param_2 + 0x1058)) {
    pvVar1 = *(void **)(param_2 + 0x1040);
    _Memory = pvVar1;
    if ((0xfff < *(ulonglong *)(param_2 + 0x1058) + 1) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  return;
}

