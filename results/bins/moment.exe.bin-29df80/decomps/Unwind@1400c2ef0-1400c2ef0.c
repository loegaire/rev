
void Unwind_1400c2ef0(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  void *_Memory;
  
  if (0xf < *(ulonglong *)(param_2 + 0xc0)) {
    _Memory = *(void **)(param_2 + 0x50);
    if (*(ulonglong *)(param_2 + 0xc0) < 0xfff) {
      *(longlong *)(param_2 + 0xc0) = *(longlong *)(param_2 + 0xc0) + 1;
    }
    else {
      pvVar1 = *(void **)((longlong)_Memory + -8);
      if (0x1f < (ulonglong)((longlong)_Memory + (-8 - (longlong)pvVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      *(longlong *)(param_2 + 0xc0) = *(longlong *)(param_2 + 0xc0) + 0x28;
      _Memory = pvVar1;
    }
    free(_Memory);
  }
  return;
}

