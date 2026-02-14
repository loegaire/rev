
void Unwind_1400a40a0(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  void *_Memory;
  
  pvVar1 = *(void **)(param_2 + 0xe0);
  _Memory = pvVar1;
  if (0xfff < *(ulonglong *)(param_2 + 0x108)) {
    _Memory = *(void **)((longlong)pvVar1 + -8);
    if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    *(longlong *)(param_2 + 0x108) = *(longlong *)(param_2 + 0x108) + 0x27;
  }
  free(_Memory);
  return;
}

