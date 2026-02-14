
void Unwind_1400a42e0(undefined8 param_1,longlong param_2)

{
  void *_Memory;
  
  if (0xf < *(ulonglong *)(param_2 + 0xe0)) {
    if (*(ulonglong *)(param_2 + 0xe0) + 1 < 0x1000) {
      _Memory = *(void **)(param_2 + 0xd0);
    }
    else {
      _Memory = *(void **)(*(longlong *)(param_2 + 0xd0) + -8);
      if (0x1f < (ulonglong)((*(longlong *)(param_2 + 0xd0) + -8) - (longlong)_Memory)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(_Memory);
  }
  return;
}

