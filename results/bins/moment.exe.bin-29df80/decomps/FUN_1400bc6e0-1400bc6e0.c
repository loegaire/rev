
void FUN_1400bc6e0(void)

{
  void *_Memory;
  
  _Memory = DAT_14012ac90;
  if (DAT_14012ac90 != (void *)0x0) {
    if (*(void **)((longlong)DAT_14012ac90 + 0x50) != (void *)0x0) {
      free(*(void **)((longlong)DAT_14012ac90 + 0x50));
    }
    _Mtx_destroy_in_situ(_Memory);
    free(_Memory);
    return;
  }
  return;
}

