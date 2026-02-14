
void FUN_1400de140(void *param_1,longlong param_2)

{
  void *_Memory;
  
  _Memory = param_1;
  if ((0xfff < (ulonglong)(param_2 * 0xb0)) &&
     (_Memory = *(void **)((longlong)param_1 + -8),
     0x1f < (ulonglong)((longlong)param_1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  free(_Memory);
  return;
}

